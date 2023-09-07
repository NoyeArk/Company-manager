/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_save;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *sb_day;
    QComboBox *cb_job;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *le_id;
    QLabel *label_4;
    QComboBox *cb_grade;
    QLabel *label_2;
    QLabel *label_6;
    QComboBox *cb_sex;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QString::fromUtf8("Add"));
        Add->resize(399, 366);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/\344\273\273\345\212\241\346\240\217\345\233\276\346\240\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        Add->setWindowIcon(icon);
        Add->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 244, 169);"));
        gridLayout_3 = new QGridLayout(Add);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(Add);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        btn_save = new QPushButton(widget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setMinimumSize(QSize(76, 42));
        btn_save->setStyleSheet(QString::fromUtf8("QPushButton{font: 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color: rgba(46,148,185,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));

        gridLayout->addWidget(btn_save, 0, 1, 1, 1);

        exit = new QPushButton(widget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setMinimumSize(QSize(76, 42));
        exit->setStyleSheet(QString::fromUtf8("QPushButton{font: 11pt '\345\276\256\350\275\257\351\233\205\351\273\221 Light';color: rgb(0,0,0);background-color:rgba(46,148,185,1)}\n"
"QPushButton{border: none;border-radius:15px;}\n"
"QPushButton:hover{background-color: rgb(22,218,208);}\n"
"QPushButton:pressed{background-color: rgb(17,171,164);}"));

        gridLayout->addWidget(exit, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(Add);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 265));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        sb_day = new QSpinBox(widget_2);
        sb_day->setObjectName(QString::fromUtf8("sb_day"));
        sb_day->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: white;\n"
"font: 14pt \"3ds\";"));
        sb_day->setMaximum(31);

        gridLayout_2->addWidget(sb_day, 5, 2, 1, 1);

        cb_job = new QComboBox(widget_2);
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->addItem(QString());
        cb_job->setObjectName(QString::fromUtf8("cb_job"));
        cb_job->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));

        gridLayout_2->addWidget(cb_job, 3, 2, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 4, 1, 1, 1);

        le_id = new QLineEdit(widget_2);
        le_id->setObjectName(QString::fromUtf8("le_id"));
        le_id->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;\n"
"font: 14pt \"3ds\";"));

        gridLayout_2->addWidget(le_id, 0, 2, 1, 2);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 1, 1, 1);

        cb_grade = new QComboBox(widget_2);
        cb_grade->addItem(QString());
        cb_grade->addItem(QString());
        cb_grade->addItem(QString());
        cb_grade->setObjectName(QString::fromUtf8("cb_grade"));
        cb_grade->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));

        gridLayout_2->addWidget(cb_grade, 4, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:black;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));

        gridLayout_2->addWidget(label_6, 5, 1, 1, 1);

        cb_sex = new QComboBox(widget_2);
        cb_sex->addItem(QString());
        cb_sex->addItem(QString());
        cb_sex->setObjectName(QString::fromUtf8("cb_sex"));
        cb_sex->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"\n"
"font: 14pt \"3ds\";"));

        gridLayout_2->addWidget(cb_sex, 2, 2, 1, 1);

        le_name = new QLineEdit(widget_2);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        le_name->setMinimumSize(QSize(21, 0));
        le_name->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;\n"
"font: 14pt \"3ds\";"));

        gridLayout_2->addWidget(le_name, 1, 2, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 4, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        QWidget::setTabOrder(le_id, le_name);
        QWidget::setTabOrder(le_name, cb_sex);
        QWidget::setTabOrder(cb_sex, cb_job);
        QWidget::setTabOrder(cb_job, cb_grade);
        QWidget::setTabOrder(cb_grade, sb_day);
        QWidget::setTabOrder(sb_day, btn_save);
        QWidget::setTabOrder(btn_save, exit);

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", nullptr));
        btn_save->setText(QApplication::translate("Add", "\344\277\235\345\255\230", nullptr));
        exit->setText(QApplication::translate("Add", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("Add", "\347\274\226\345\217\267\357\274\232", nullptr));
        cb_job->setItemText(0, QApplication::translate("Add", "\347\273\217\347\220\206", nullptr));
        cb_job->setItemText(1, QApplication::translate("Add", "\351\224\200\345\224\256\347\273\217\347\220\206", nullptr));
        cb_job->setItemText(2, QApplication::translate("Add", "\346\212\200\346\234\257\344\272\272\345\221\230", nullptr));
        cb_job->setItemText(3, QApplication::translate("Add", "\351\224\200\345\224\256\344\272\272\345\221\230", nullptr));

        label_3->setText(QApplication::translate("Add", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QApplication::translate("Add", "\347\255\211\347\272\247\357\274\232", nullptr));
        label_4->setText(QApplication::translate("Add", "\350\201\214\344\275\215\357\274\232", nullptr));
        cb_grade->setItemText(0, QApplication::translate("Add", "\351\253\230\347\272\247", nullptr));
        cb_grade->setItemText(1, QApplication::translate("Add", "\344\270\255\347\272\247", nullptr));
        cb_grade->setItemText(2, QApplication::translate("Add", "\345\210\235\347\272\247", nullptr));

        label_2->setText(QApplication::translate("Add", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Add", "\345\207\272\345\213\244\345\244\251\346\225\260\357\274\232", nullptr));
        cb_sex->setItemText(0, QApplication::translate("Add", "\347\224\267", nullptr));
        cb_sex->setItemText(1, QApplication::translate("Add", "\345\245\263", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
