#include "add.h"
#include "ui_add.h"
#include "perstl.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "perstl.h"
#include <QDebug>
#include <iostream>
using namespace std;

Add::Add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
    m_per = new Person;
    setFixedSize(this->width(),this->height());
    setWindowTitle("公司员工信息管理系统");
}

Add::~Add()
{
    delete ui;
}

void Add::setType(bool isAdd, Person p)
{
    m_isAdd = isAdd;
//    m_per->id = p.id;
//    m_per->work_day = p.work_day;
//    m_per->salary = p.salary;
//    m_per->grade = p.grade;
//    m_per->name = p.name;
//    m_per->sex = p.sex;
//    m_per->job = p.job;

    QString name = p.name;
    ui->le_name->setText(p.name);
    ui->le_id->setText(QString::number(p.id));

    ui->cb_sex->setCurrentText(p.sex);
    ui->cb_job->setCurrentText(p.job);
    ui->cb_grade->setCurrentText(p.grade);
    ui->sb_day->setValue(p.work_day);
}

void Add::on_exit_clicked()
{
    this->close();
}

void Add::on_btn_save_clicked()
{
    PerStl *stl = PerStl::get_sql();

    if(ui->le_id->text().isEmpty() || ui->le_name->text().isEmpty())
    {
        QMessageBox::information(nullptr, "错误", "信息不完整");
        return;
    }

    Person p;
    p.id = ui->le_id->text().toInt();
    p.name = ui->le_name->text();
    p.sex = ui->cb_sex->currentText();
    p.job = ui->cb_job->currentText();
    p.grade = ui->cb_grade->currentText();
    p.work_day = ui->sb_day->value();
    if(p.job == "经理")
    {
        p.salary = 1234 * p.work_day;
    }
    else if(p.job == "技术人员")
    {
        p.salary = 2345 * p.work_day;
    }
    else if(p.job == "销售人员")
    {
        p.salary = 3345 * p.work_day;
    }
    else if(p.job == "销售经理")
    {
        p.salary = 4331 * p.work_day;
    }


    if(m_isAdd)
    {
        stl->add_per(p);
        QMessageBox::information(nullptr, "提示", "添加成功");
    }
    else
    {
        stl->add_per(p);
        QMessageBox::information(nullptr, "提示", "修改成功");
    }

    this->close();
}

void Add::on_le_id_editingFinished()
{
    PerStl *stl = PerStl::get_sql();
    //得到了所有学生
    QVector<Person> v = stl->get_Page(1, stl->get_Cnt());
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].id == ui->le_id->text().toInt())
        {
            QMessageBox::information(nullptr, "提示", "该编号已使用！");
            ui->le_id->clear();
            return;
        }

    }
}
