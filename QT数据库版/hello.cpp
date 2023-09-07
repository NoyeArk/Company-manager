#include "hello.h"
#include "ui_hello.h"
#include <qwindowdefs.h>
#include <QMessageBox>

Hello::Hello(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hello),
    w(nullptr)
{
    ui->setupUi(this);
    setFixedSize(this->width(),this->height());
    this->setWindowTitle("公司员工信息管理系统登录界面");
    ui->Password->setEchoMode(QLineEdit::Password);
    ui->Username->setPlaceholderText("工号/账号");
    ui->Password->setPlaceholderText("密码");
}

void Hello::on_btn_login_clicked()
{
    QString user = ui->Username->text();
    QString password = ui->Password->text();
    if(user == "neuq" && password == "1234")
    {
        w = new MainWindow;
        this->close();
        w->show();
    }
    else
    {
        QMessageBox::information(nullptr, "提示", "密码错误");
    }
}

void Hello::on_btn_exit_clicked()
{
    this->close();
}
