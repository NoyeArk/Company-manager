#ifndef HELLO_H
#define HELLO_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Hello;
}

class Hello : public QWidget
{
    Q_OBJECT

public:
    explicit Hello(QWidget *parent = nullptr);
    ~Hello()
    {
        delete ui;
    }

private slots:
    void on_btn_login_clicked();

    void on_btn_exit_clicked();

private:
    Ui::Hello *ui;
    MainWindow* w;
};

#endif // HELLO_H
