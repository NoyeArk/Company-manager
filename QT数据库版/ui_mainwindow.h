/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_return;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QCheckBox *checkBox;
    QPushButton *search;
    QComboBox *cb_job;
    QComboBox *cb_sex;
    QComboBox *cb_grade;
    QLineEdit *le_input;
    QPushButton *AddButton;
    QPushButton *DelButton;
    QLabel *status;
    QPushButton *btn_refresh;
    QPushButton *EditButton;
    QWidget *page_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(898, 661);
        MainWindow->setMinimumSize(QSize(800, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/\344\273\273\345\212\241\346\240\217\345\233\276\346\240\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#fff7f7"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color:#3b9a9c;"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\344\275\223 CN Bold"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(891, 59));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btn_return = new QPushButton(widget_2);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(81);
        sizePolicy1.setVerticalStretch(41);
        sizePolicy1.setHeightForWidth(btn_return->sizePolicy().hasHeightForWidth());
        btn_return->setSizePolicy(sizePolicy1);
        btn_return->setMinimumSize(QSize(81, 41));
        btn_return->setStyleSheet(QString::fromUtf8("QPushButton{font: 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));

        gridLayout_2->addWidget(btn_return, 0, 0, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(81, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));

        gridLayout_2->addWidget(pushButton, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 10);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(widget_2, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 851, 361));
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 14pt \"3ds\";\n"
"\n"
"QHeaderView::section:horizontal { 					/*\350\256\276\347\275\256\346\240\207\351\242\230(\346\260\264\345\271\263\347\232\204)*/\n"
"        border: 1px solid rgb(255, 255, 255); 			/*\347\231\275\350\211\262\351\227\264\351\232\224*/\n"
"	      border-bottom: 0px;							/*\344\270\213\350\276\271\346\241\206\344\270\215\351\234\200\350\246\201\351\242\234\350\211\262*/\n"
"        color: rgb(2, 65, 132);\n"
"        background: transparent;\n"
"        padding-left: 2px;\n"
"        min-width:60px;\n"
"}\n"
"QHeaderView::section:horizontal:hover {			/*\350\256\276\347\275\256\351\274\240\346\240\207\345\201\234\347\225\231\347\212\266\346\200\201*/\n"
"        color: white;							/*\345\255\227\344\275\223\347\231\275\350\211\262*/\n"
"        background: rgb(11,82,202);				/*\350\203\214\346\231\257\346\267\261\350\223\235\350\211\262*/\n"
"}\n"
"\n"
"QHeaderView{							/*\350\256\276\347\275\256\346\240\207\351\242\230(\345\214\205\346\213\254\345\236"
                        "\202\347\233\264+\346\260\264\345\271\263\347\232\204)*/\n"
"	\n"
"			  font-size: 19px;				/*11\346\246\234*/\n"
"	      border: 1px solid rgb(255, 255, 255);\n"
"       /* border-bottom: 2px solid rgb(35, 100, 224); 		\344\270\213\350\276\271\346\241\206\346\267\261\350\223\235\350\211\262*/\n"
"        background: rgb(100, 188, 238);				/*\350\203\214\346\231\257\346\265\205\350\223\235\350\211\262*/ \n"
"	      min-height:40px;\n"
"	       \n"
"}"));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(800, 20, 73, 18));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        search = new QPushButton(page);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(670, 9, 80, 31));
        search->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));
        cb_job = new QComboBox(page);
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->setObjectName(QString::fromUtf8("cb_job"));
        cb_job->setGeometry(QRect(10, 10, 91, 31));
        cb_job->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        cb_sex = new QComboBox(page);
        cb_sex->addItem(QString());
        cb_sex->addItem(QString());
        cb_sex->addItem(QString());
        cb_sex->setObjectName(QString::fromUtf8("cb_sex"));
        cb_sex->setGeometry(QRect(130, 11, 71, 31));
        cb_sex->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        cb_grade = new QComboBox(page);
        cb_grade->addItem(QString());
        cb_grade->addItem(QString());
        cb_grade->addItem(QString());
        cb_grade->addItem(QString());
        cb_grade->setObjectName(QString::fromUtf8("cb_grade"));
        cb_grade->setGeometry(QRect(230, 10, 71, 31));
        cb_grade->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        le_input = new QLineEdit(page);
        le_input->setObjectName(QString::fromUtf8("le_input"));
        le_input->setGeometry(QRect(360, 9, 281, 31));
        le_input->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        AddButton = new QPushButton(page);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(20, 430, 51, 31));
        AddButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));
        DelButton = new QPushButton(page);
        DelButton->setObjectName(QString::fromUtf8("DelButton"));
        DelButton->setGeometry(QRect(190, 430, 61, 31));
        DelButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));
        status = new QLabel(page);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(760, 440, 121, 21));
        status->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));
        btn_refresh = new QPushButton(page);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));
        btn_refresh->setGeometry(QRect(270, 430, 61, 31));
        btn_refresh->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));
        EditButton = new QPushButton(page);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        EditButton->setGeometry(QRect(100, 430, 61, 31));
        EditButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 25 14pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(8,255,200,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\205\254\345\217\270\345\221\230\345\267\245\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\205\254\345\217\270\345\221\230\345\267\245\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_return->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\347\255\211\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\350\201\214\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\207\272\345\213\244\345\244\251\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\267\245\350\265\204", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        search->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        cb_job->setItemText(0, QApplication::translate("MainWindow", "\350\201\214\344\275\215", nullptr));
        cb_job->setItemText(1, QApplication::translate("MainWindow", "\347\273\217\347\220\206", nullptr));
        cb_job->setItemText(2, QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\217\347\220\206", nullptr));
        cb_job->setItemText(3, QApplication::translate("MainWindow", "\346\212\200\346\234\257\344\272\272\345\221\230", nullptr));
        cb_job->setItemText(4, QApplication::translate("MainWindow", "\351\224\200\345\224\256\344\272\272\345\221\230", nullptr));

        cb_sex->setItemText(0, QApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        cb_sex->setItemText(1, QApplication::translate("MainWindow", "\347\224\267", nullptr));
        cb_sex->setItemText(2, QApplication::translate("MainWindow", "\345\245\263", nullptr));

        cb_grade->setItemText(0, QApplication::translate("MainWindow", "\347\255\211\347\272\247", nullptr));
        cb_grade->setItemText(1, QApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
        cb_grade->setItemText(2, QApplication::translate("MainWindow", "\344\270\255\347\272\247", nullptr));
        cb_grade->setItemText(3, QApplication::translate("MainWindow", "\345\210\235\347\272\247", nullptr));

        AddButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        DelButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        status->setText(QApplication::translate("MainWindow", "\345\205\261xx\346\235\241\350\256\260\345\275\225", nullptr));
        btn_refresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        EditButton->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
