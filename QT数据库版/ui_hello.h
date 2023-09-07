/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hello
{
public:
    QFrame *frame;
    QLabel *lb_account;
    QLineEdit *Username;
    QLabel *lb_secret;
    QLineEdit *Password;
    QPushButton *btn_login;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Hello)
    {
        if (Hello->objectName().isEmpty())
            Hello->setObjectName(QString::fromUtf8("Hello"));
        Hello->resize(524, 442);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/\344\273\273\345\212\241\346\240\217\345\233\276\346\240\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        Hello->setWindowIcon(icon);
        Hello->setStyleSheet(QString::fromUtf8("*{\n"
"	background:rgb(255, 255, 255);\n"
"	font-size:15px;\n"
"	font-family:Century Gothic,sans-serif;\n"
"}"));
        frame = new QFrame(Hello);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, -20, 541, 471));
        frame->setMinimumSize(QSize(451, 361));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"	border-image: url(:/new/prefix1/NEUW.jpg);\n"
"	border:sold 10px rgba(0,0,0);\n"
"}\n"
"QLineEdit{\n"
"\n"
"	font-size:18px;\n"
"	border-style:outset;\n"
"	border-radius:10px;\n"
"}\n"
"QPushButton{\n"
"	background:#ced1d8;\n"
"	border-style:outset;\n"
"	border-radius:10px;\n"
" \n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#405361;\n"
"	border-style:inset;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_account = new QLabel(frame);
        lb_account->setObjectName(QString::fromUtf8("lb_account"));
        lb_account->setGeometry(QRect(110, 200, 91, 61));
        lb_account->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:white;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        Username = new QLineEdit(frame);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(190, 210, 221, 41));
        Username->setMinimumSize(QSize(181, 41));
        lb_secret = new QLabel(frame);
        lb_secret->setObjectName(QString::fromUtf8("lb_secret"));
        lb_secret->setGeometry(QRect(110, 270, 61, 51));
        lb_secret->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:white;\n"
"	font-style: italic bold;\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
""));
        Password = new QLineEdit(frame);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(190, 280, 221, 41));
        Password->setMinimumSize(QSize(181, 41));
        Password->setStyleSheet(QString::fromUtf8(""));
        btn_login = new QPushButton(frame);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(150, 370, 241, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy);
        btn_login->setMinimumSize(QSize(241, 41));
        btn_login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:#ff9900;\n"
"	border-style:outset;\n"
"	border-radius:20px;\n"
" font: 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#405361;\n"
"	border-style:inset;\n"
"	\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 60, 351, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(85,170,225,0);\n"
"	color:white;\n"
"	font: 30pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"}\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 120, 271, 71));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/\346\240\241\345\276\275.png);\n"
"background: transparent;"));

        retranslateUi(Hello);

        QMetaObject::connectSlotsByName(Hello);
    } // setupUi

    void retranslateUi(QWidget *Hello)
    {
        Hello->setWindowTitle(QApplication::translate("Hello", "Form", nullptr));
        lb_account->setText(QApplication::translate("Hello", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lb_secret->setText(QApplication::translate("Hello", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_login->setText(QApplication::translate("Hello", "\347\231\273 \345\275\225", nullptr));
        label->setText(QApplication::translate("Hello", "\350\207\252\345\274\272\344\270\215\346\201\257 \347\237\245\350\241\214\345\220\210\344\270\200", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Hello: public Ui_Hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
