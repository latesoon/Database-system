/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *num;
    QLineEdit *getnum;
    QLabel *pwd;
    QLineEdit *getpwd;
    QPushButton *log;
    QRadioButton *ad;
    QRadioButton *user;
    QPushButton *help;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 600);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(280, 60, 261, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria Math")});
        font.setPointSize(28);
        title->setFont(font);
        title->setLayoutDirection(Qt::LeftToRight);
        num = new QLabel(centralwidget);
        num->setObjectName("num");
        num->setGeometry(QRect(220, 308, 69, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(14);
        num->setFont(font1);
        getnum = new QLineEdit(centralwidget);
        getnum->setObjectName("getnum");
        getnum->setGeometry(QRect(290, 314, 261, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria Math")});
        font2.setPointSize(14);
        getnum->setFont(font2);
        pwd = new QLabel(centralwidget);
        pwd->setObjectName("pwd");
        pwd->setGeometry(QRect(220, 370, 69, 41));
        pwd->setFont(font1);
        getpwd = new QLineEdit(centralwidget);
        getpwd->setObjectName("getpwd");
        getpwd->setGeometry(QRect(290, 380, 261, 31));
        getpwd->setFont(font2);
        log = new QPushButton(centralwidget);
        log->setObjectName("log");
        log->setGeometry(QRect(350, 460, 93, 28));
        log->setFont(font1);
        ad = new QRadioButton(centralwidget);
        ad->setObjectName("ad");
        ad->setGeometry(QRect(430, 260, 118, 23));
        ad->setFont(font2);
        user = new QRadioButton(centralwidget);
        user->setObjectName("user");
        user->setGeometry(QRect(290, 260, 118, 23));
        user->setFont(font2);
        help = new QPushButton(centralwidget);
        help->setObjectName("help");
        help->setGeometry(QRect(500, 460, 26, 26));
        help->setFont(font2);
        help->setStyleSheet(QString::fromUtf8("QPushButton#help {\n"
"    color:#ffffff;\n"
"	border-radius: 13px;\n"
"	min-width: 26px;\n"
"    min-height: 26px;   \n"
"    max-width: 26px;   \n"
"    max-height: 26px;   \n"
"	background-color:#0055ff;\n"
"}"));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        title->setText(QCoreApplication::translate("login", "Iwork   Login", nullptr));
        num->setText(QCoreApplication::translate("login", "\345\267\245\345\217\267", nullptr));
        pwd->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        log->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        ad->setText(QCoreApplication::translate("login", "admin", nullptr));
        user->setText(QCoreApplication::translate("login", "user", nullptr));
        help->setText(QCoreApplication::translate("login", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
