/********************************************************************************
** Form generated from reading UI file 'userfindpro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFINDPRO_H
#define UI_USERFINDPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_userfindpro
{
public:
    QLabel *tstr;
    QLabel *title;
    QLabel *inf;
    QPushButton *pushButton;
    QComboBox *Box;
    QLabel *nd_2;
    QPushButton *check;
    QTableWidget *widget;

    void setupUi(QDialog *userfindpro)
    {
        if (userfindpro->objectName().isEmpty())
            userfindpro->setObjectName("userfindpro");
        userfindpro->resize(789, 534);
        tstr = new QLabel(userfindpro);
        tstr->setObjectName("tstr");
        tstr->setGeometry(QRect(260, 40, 241, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria Math")});
        font.setPointSize(14);
        tstr->setFont(font);
        tstr->setStyleSheet(QString::fromUtf8("QLabel#tstr{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        tstr->setAlignment(Qt::AlignCenter);
        title = new QLabel(userfindpro);
        title->setObjectName("title");
        title->setGeometry(QRect(0, 0, 801, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria Math")});
        font1.setPointSize(24);
        title->setFont(font1);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setStyleSheet(QString::fromUtf8("QLabel#title{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        inf = new QLabel(userfindpro);
        inf->setObjectName("inf");
        inf->setGeometry(QRect(480, 20, 301, 71));
        inf->setFont(font);
        inf->setLayoutDirection(Qt::RightToLeft);
        inf->setStyleSheet(QString::fromUtf8("QLabel#inf{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        inf->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(userfindpro);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(610, 120, 111, 28));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(14);
        pushButton->setFont(font2);
        Box = new QComboBox(userfindpro);
        Box->setObjectName("Box");
        Box->setGeometry(QRect(180, 120, 241, 31));
        Box->setFont(font);
        nd_2 = new QLabel(userfindpro);
        nd_2->setObjectName("nd_2");
        nd_2->setGeometry(QRect(80, 120, 81, 31));
        nd_2->setFont(font2);
        check = new QPushButton(userfindpro);
        check->setObjectName("check");
        check->setGeometry(QRect(450, 120, 71, 31));
        check->setFont(font2);
        check->setContextMenuPolicy(Qt::DefaultContextMenu);
        check->setLayoutDirection(Qt::LeftToRight);
        widget = new QTableWidget(userfindpro);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 181, 671, 321));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(12);
        widget->setFont(font3);
        title->raise();
        tstr->raise();
        inf->raise();
        pushButton->raise();
        Box->raise();
        nd_2->raise();
        check->raise();
        widget->raise();

        retranslateUi(userfindpro);

        QMetaObject::connectSlotsByName(userfindpro);
    } // setupUi

    void retranslateUi(QDialog *userfindpro)
    {
        userfindpro->setWindowTitle(QCoreApplication::translate("userfindpro", "Dialog", nullptr));
        tstr->setText(QCoreApplication::translate("userfindpro", "nowtime", nullptr));
        title->setText(QCoreApplication::translate("userfindpro", "  Iwork Admin", nullptr));
        inf->setText(QCoreApplication::translate("userfindpro", "Welcome: admin", nullptr));
        pushButton->setText(QCoreApplication::translate("userfindpro", "\350\277\224\345\233\236\344\270\212\345\261\202", nullptr));
        nd_2->setText(QCoreApplication::translate("userfindpro", "\351\203\250\351\227\250ID", nullptr));
        check->setText(QCoreApplication::translate("userfindpro", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userfindpro: public Ui_userfindpro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFINDPRO_H
