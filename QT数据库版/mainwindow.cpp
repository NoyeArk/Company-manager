#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "hello.h"
#include "QDebug.h"

int MainWindow::click_row = 0;
QString MainWindow::ID = "";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_pSql(nullptr)
{
    ui->setupUi(this);
    //固定窗口不能拉伸
    setFixedSize(this->width(),this->height());
    //隐藏序号
    ui->tableWidget->verticalHeader()->setHidden(true);
    //不能编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //选择整行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    //居中对齐
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //更改选中背景色
    ui->tableWidget->setStyleSheet("selection-background-color: rgb(83,82,109)");
    //设置表格中单元格字体和大小
    ui->tableWidget->setFont(QFont("3ds", 12));
    //设置搜索框背景提示语
    ui->le_input->setPlaceholderText("请输入编号或姓名");

    refresh();

    change_label();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

//得到当前鼠标选中的员工行数和ID信息
void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
    MainWindow::click_row = row;
    ID = ui->tableWidget->item(row, 0)->text();
}

//删除按钮-删除员工信息
void MainWindow::on_DelButton_clicked()
{
    ui->tableWidget->removeRow(click_row);
    m_pSql->del_per(ID.toInt());
    change_label();
}

//改变右下角的人数信息
void MainWindow::change_label()
{
    QLabel* label = ui->stackedWidget->findChild<QLabel*>("status");
    QString str = QString("共%1条记录").arg(ui->tableWidget->rowCount() + 1);
    label->setText(str);
}

//刷新表格信息
void MainWindow::refresh()
{
    m_pSql = PerStl::get_sql();
    int num = m_pSql->get_Cnt();

    qDebug() << "num:" << num << endl;
    //得到了所有学生
    QVector<Person> v = m_pSql->get_Page(1, num);

    ui->tableWidget->setRowCount(num - 1);

    for(int i = 0; i < v.size(); i++)
    {

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(v[i].id)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(v[i].name));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(v[i].sex));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(v[i].grade));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(v[i].job));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(v[i].work_day)));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(v[i].salary)));
        for(int j = 0; j < 7; j++)
        {
            ui->tableWidget->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    change_label();
}

//添加按钮——显示添加界面
void MainWindow::on_AddButton_clicked()
{
    ui_add = new Add;
    ui_add->setType(true);
    ui_add->setWindowModality(Qt::ApplicationModal);
    ui_add->show();
    refresh();
}

//刷新按钮——调用刷新函数
void MainWindow::on_btn_refresh_clicked()
{
    refresh();
}

//编辑按钮——显示编辑界面
void MainWindow::on_EditButton_clicked()
{
    ui_add = new Add;
    Person p = m_pSql->get_per(ID.toInt());
    ui_add->setType(false, p);
    ui_add->setWindowModality(Qt::ApplicationModal);
    ui_add->show();
    m_pSql->del_per(ID.toInt());
}

//筛选函数-根据筛选信息显示
void MainWindow::on_selectButton()
{
    m_pSql = PerStl::get_sql();
    int num = m_pSql->get_Cnt();

    //得到了所有学生
    QVector<Person> v = m_pSql->get_Page(1, num);

    ui->tableWidget->clearContents();

    QString str_sex = ui->cb_sex->currentText();
    QString str_job = ui->cb_job->currentText();
    QString str_grade = ui->cb_grade->currentText();

    int Index = 0;
    for(int i = 0; i < v.size(); i++)
    {

        if(!v[i].sex.contains(str_sex) && str_sex != "性别")
            continue;
        if(!v[i].job.contains(str_job) && str_job != "职位")
            continue;
        if(!v[i].grade.contains(str_grade) && str_grade != "等级")
            continue;

        if(str_job == "经理")
        {
            if(v[i].job == "销售经理")
            {
                continue;
            }
        }

        ui->tableWidget->setRowCount(Index + 1);
        ui->tableWidget->setItem(Index, 0, new QTableWidgetItem(QString::number(v[i].id)));
        ui->tableWidget->setItem(Index, 1, new QTableWidgetItem(v[i].name));
        ui->tableWidget->setItem(Index, 2, new QTableWidgetItem(v[i].sex));
        ui->tableWidget->setItem(Index, 3, new QTableWidgetItem(v[i].grade));
        ui->tableWidget->setItem(Index, 4, new QTableWidgetItem(v[i].job));
        ui->tableWidget->setItem(Index, 5, new QTableWidgetItem(QString::number(v[i].work_day)));
        ui->tableWidget->setItem(Index, 6, new QTableWidgetItem(QString::number(v[i].salary)));

        for(int j = 0; j < 7; j++)
        {
            ui->tableWidget->item (Index,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
        Index++;
    }
    if(!Index)
    {
        for(int i = 0; i < v.size(); i++)
            ui->tableWidget->removeRow(0);
    }

    change_label();
}

//查询按钮-根据输入的ID或姓名查询
void MainWindow::on_search_clicked()
{
    m_pSql = PerStl::get_sql();
    int num = m_pSql->get_Cnt();

    //得到了所有学生
    QVector<Person> v = m_pSql->get_Page(1, num);

    int input = ui->le_input->text().toInt();
    QString str = ui->le_input->text();

    ui->tableWidget->clearContents();

    int Index = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(!v[i].name.contains(str) && v[i].id != input)
            continue;

        ui->tableWidget->setRowCount(Index + 1);
        ui->tableWidget->setItem(Index, 0, new QTableWidgetItem(QString::number(v[i].id)));
        ui->tableWidget->setItem(Index, 1, new QTableWidgetItem(v[i].name));
        ui->tableWidget->setItem(Index, 2, new QTableWidgetItem(v[i].sex));
        ui->tableWidget->setItem(Index, 3, new QTableWidgetItem(v[i].grade));
        ui->tableWidget->setItem(Index, 4, new QTableWidgetItem(v[i].job));
        ui->tableWidget->setItem(Index, 5, new QTableWidgetItem(QString::number(v[i].work_day)));
        ui->tableWidget->setItem(Index, 6, new QTableWidgetItem(QString::number(v[i].salary)));

        for(int j = 0; j < 7; j++)
        {
            ui->tableWidget->item (Index,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
        Index++;
    }
    if(!Index)
    {
        for(int i = 0; i < v.size(); i++)
            ui->tableWidget->removeRow(0);
    }

    change_label();
}

//职位筛选
void MainWindow::on_cb_job_currentIndexChanged(int index)
{
   on_selectButton();
}

//性别筛选
void MainWindow::on_cb_sex_currentIndexChanged(int index)
{
   on_selectButton();
}

//等级筛选
void MainWindow::on_cb_grade_currentIndexChanged(int index)
{
    on_selectButton();
}

//全选按钮
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->tableWidget->selectAll();
    }
    else
    {
        ui->tableWidget->clearSelection();
    }
}

//返回登录界面按钮
void MainWindow::on_btn_return_clicked()
{
    Hello *h = new Hello;
    this->close();
    h->show();
}
