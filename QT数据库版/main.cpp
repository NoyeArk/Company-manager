#include "mainwindow.h"
#include <QApplication>
#include "perstl.h"
#include "hello.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    Hello h;
    h.show();

    return a.exec();
}
