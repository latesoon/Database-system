/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *title;
    QLabel *tstr;
    QLabel *inf;
    QPushButton *b1;
    QLabel *label;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *b5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(793, 533);
        title = new QLabel(admin);
        title->setObjectName("title");
        title->setGeometry(QRect(0, 0, 801, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria Math")});
        font.setPointSize(24);
        title->setFont(font);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setStyleSheet(QString::fromUtf8("QLabel#title{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        tstr = new QLabel(admin);
        tstr->setObjectName("tstr");
        tstr->setGeometry(QRect(260, 40, 241, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria Math")});
        font1.setPointSize(14);
        tstr->setFont(font1);
        tstr->setStyleSheet(QString::fromUtf8("QLabel#tstr{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        tstr->setAlignment(Qt::AlignCenter);
        inf = new QLabel(admin);
        inf->setObjectName("inf");
        inf->setGeometry(QRect(480, 20, 301, 71));
        inf->setFont(font1);
        inf->setLayoutDirection(Qt::RightToLeft);
        inf->setStyleSheet(QString::fromUtf8("QLabel#inf{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        inf->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        b1 = new QPushButton(admin);
        b1->setObjectName("b1");
        b1->setGeometry(QRect(60, 190, 311, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(14);
        b1->setFont(font2);
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 110, 121, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(16);
        font3.setUnderline(true);
        label->setFont(font3);
        b2 = new QPushButton(admin);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(60, 250, 311, 41));
        b2->setFont(font2);
        b3 = new QPushButton(admin);
        b3->setObjectName("b3");
        b3->setGeometry(QRect(60, 310, 311, 41));
        b3->setFont(font2);
        b4 = new QPushButton(admin);
        b4->setObjectName("b4");
        b4->setGeometry(QRect(60, 370, 311, 41));
        b4->setFont(font2);
        b5 = new QPushButton(admin);
        b5->setObjectName("b5");
        b5->setGeometry(QRect(60, 430, 311, 41));
        b5->setFont(font2);
        label_2 = new QLabel(admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 190, 321, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font4.setPointSize(12);
        font4.setUnderline(false);
        label_2->setFont(font4);
        label_3 = new QLabel(admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 250, 331, 41));
        label_3->setFont(font4);
        label_4 = new QLabel(admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 310, 331, 41));
        label_4->setFont(font4);
        label_5 = new QLabel(admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 370, 331, 41));
        label_5->setFont(font4);
        label_6 = new QLabel(admin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(410, 430, 331, 41));
        label_6->setFont(font4);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("admin", "  Iwork Admin", nullptr));
        tstr->setText(QCoreApplication::translate("admin", "nowtime", nullptr));
        inf->setText(QCoreApplication::translate("admin", "Welcome: admin", nullptr));
        b1->setText(QCoreApplication::translate("admin", "\345\221\230\345\267\245\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("admin", "\346\223\215\344\275\234\351\200\211\346\213\251", nullptr));
        b2->setText(QCoreApplication::translate("admin", "\345\242\236\345\212\240\346\226\260\345\221\230\345\267\245", nullptr));
        b3->setText(QCoreApplication::translate("admin", "\345\221\230\345\267\245\344\277\241\346\201\257\344\277\256\346\224\271/\347\247\273\351\231\244", nullptr));
        b4->setText(QCoreApplication::translate("admin", "\351\203\250\351\227\250\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        b5->setText(QCoreApplication::translate("admin", "\351\203\250\351\227\250\345\242\236\345\212\240/\344\277\256\346\224\271/\347\247\273\351\231\244", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "\345\207\240\347\247\222\351\222\237\350\216\267\345\276\227\344\270\200\345\220\215\345\221\230\345\267\245\347\232\204\345\205\250\351\203\250\344\277\241\346\201\257\343\200\202", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "\345\234\250\345\205\254\345\217\270\345\211\215\351\200\224\346\257\224\350\276\203\345\205\211\346\230\216\347\232\204\346\227\266\345\200\231\346\257\224\350\276\203\345\270\270\347\224\250\343\200\202", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "\345\234\250\344\273\200\344\271\210\346\203\205\345\206\265\344\270\213\345\245\275\345\203\217\351\203\275\346\234\211\347\224\250\346\255\246\344\271\213\345\234\260\343\200\202", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "\350\222\270\350\222\270\346\227\245\344\270\212\357\274\201", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "\347\274\235\345\220\210\346\200\252\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
