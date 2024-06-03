/********************************************************************************
** Form generated from reading UI file 'useradd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERADD_H
#define UI_USERADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_useradd
{
public:
    QPushButton *pushButton;
    QLabel *inf;
    QLabel *title;
    QLabel *tstr;
    QLabel *jsd;
    QLabel *pd;
    QLabel *sd;
    QLabel *nd;
    QLabel *bmd;
    QLabel *gld;
    QLabel *ed;
    QLabel *nd_3;
    QLineEdit *u1;
    QLineEdit *u6;
    QLineEdit *u2;
    QLineEdit *u4;
    QLineEdit *u3;
    QLineEdit *u5;
    QLineEdit *u7;
    QLineEdit *u8;
    QTextBrowser *textBrowser;
    QPushButton *qd;
    QLineEdit *u10;
    QLineEdit *u9;
    QLabel *jsd_2;
    QLabel *gld_2;

    void setupUi(QDialog *useradd)
    {
        if (useradd->objectName().isEmpty())
            useradd->setObjectName("useradd");
        useradd->resize(790, 534);
        pushButton = new QPushButton(useradd);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 480, 93, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        pushButton->setFont(font);
        inf = new QLabel(useradd);
        inf->setObjectName("inf");
        inf->setGeometry(QRect(480, 20, 301, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cambria Math")});
        font1.setPointSize(14);
        inf->setFont(font1);
        inf->setLayoutDirection(Qt::RightToLeft);
        inf->setStyleSheet(QString::fromUtf8("QLabel#inf{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        inf->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        title = new QLabel(useradd);
        title->setObjectName("title");
        title->setGeometry(QRect(0, 0, 801, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cambria Math")});
        font2.setPointSize(24);
        title->setFont(font2);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setStyleSheet(QString::fromUtf8("QLabel#title{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        tstr = new QLabel(useradd);
        tstr->setObjectName("tstr");
        tstr->setGeometry(QRect(260, 40, 241, 30));
        tstr->setFont(font1);
        tstr->setStyleSheet(QString::fromUtf8("QLabel#tstr{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        tstr->setAlignment(Qt::AlignCenter);
        jsd = new QLabel(useradd);
        jsd->setObjectName("jsd");
        jsd->setGeometry(QRect(60, 360, 101, 19));
        jsd->setFont(font);
        pd = new QLabel(useradd);
        pd->setObjectName("pd");
        pd->setGeometry(QRect(60, 280, 101, 19));
        pd->setFont(font);
        sd = new QLabel(useradd);
        sd->setObjectName("sd");
        sd->setGeometry(QRect(60, 200, 69, 19));
        sd->setFont(font);
        nd = new QLabel(useradd);
        nd->setObjectName("nd");
        nd->setGeometry(QRect(60, 160, 69, 19));
        nd->setFont(font);
        bmd = new QLabel(useradd);
        bmd->setObjectName("bmd");
        bmd->setGeometry(QRect(60, 320, 101, 19));
        bmd->setFont(font);
        gld = new QLabel(useradd);
        gld->setObjectName("gld");
        gld->setGeometry(QRect(60, 400, 101, 19));
        gld->setFont(font);
        ed = new QLabel(useradd);
        ed->setObjectName("ed");
        ed->setGeometry(QRect(60, 240, 101, 19));
        ed->setFont(font);
        nd_3 = new QLabel(useradd);
        nd_3->setObjectName("nd_3");
        nd_3->setGeometry(QRect(60, 120, 69, 19));
        nd_3->setFont(font);
        u1 = new QLineEdit(useradd);
        u1->setObjectName("u1");
        u1->setGeometry(QRect(180, 120, 221, 25));
        u6 = new QLineEdit(useradd);
        u6->setObjectName("u6");
        u6->setGeometry(QRect(180, 320, 221, 25));
        u2 = new QLineEdit(useradd);
        u2->setObjectName("u2");
        u2->setGeometry(QRect(180, 160, 221, 25));
        u4 = new QLineEdit(useradd);
        u4->setObjectName("u4");
        u4->setGeometry(QRect(180, 240, 221, 25));
        u3 = new QLineEdit(useradd);
        u3->setObjectName("u3");
        u3->setGeometry(QRect(180, 200, 221, 25));
        u5 = new QLineEdit(useradd);
        u5->setObjectName("u5");
        u5->setGeometry(QRect(180, 280, 221, 25));
        u7 = new QLineEdit(useradd);
        u7->setObjectName("u7");
        u7->setGeometry(QRect(180, 360, 221, 25));
        u8 = new QLineEdit(useradd);
        u8->setObjectName("u8");
        u8->setGeometry(QRect(180, 400, 221, 25));
        textBrowser = new QTextBrowser(useradd);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(460, 160, 256, 171));
        qd = new QPushButton(useradd);
        qd->setObjectName("qd");
        qd->setGeometry(QRect(520, 400, 121, 51));
        qd->setFont(font);
        u10 = new QLineEdit(useradd);
        u10->setObjectName("u10");
        u10->setGeometry(QRect(180, 480, 221, 25));
        u9 = new QLineEdit(useradd);
        u9->setObjectName("u9");
        u9->setGeometry(QRect(180, 440, 221, 25));
        jsd_2 = new QLabel(useradd);
        jsd_2->setObjectName("jsd_2");
        jsd_2->setGeometry(QRect(60, 440, 101, 19));
        jsd_2->setFont(font);
        gld_2 = new QLabel(useradd);
        gld_2->setObjectName("gld_2");
        gld_2->setGeometry(QRect(60, 480, 101, 19));
        gld_2->setFont(font);
        title->raise();
        tstr->raise();
        inf->raise();
        pushButton->raise();
        jsd->raise();
        pd->raise();
        sd->raise();
        nd->raise();
        bmd->raise();
        gld->raise();
        ed->raise();
        nd_3->raise();
        u1->raise();
        u6->raise();
        u2->raise();
        u4->raise();
        u3->raise();
        u5->raise();
        u7->raise();
        u8->raise();
        textBrowser->raise();
        qd->raise();
        u10->raise();
        u9->raise();
        jsd_2->raise();
        gld_2->raise();

        retranslateUi(useradd);

        QMetaObject::connectSlotsByName(useradd);
    } // setupUi

    void retranslateUi(QDialog *useradd)
    {
        useradd->setWindowTitle(QCoreApplication::translate("useradd", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("useradd", "\350\277\224\345\233\236", nullptr));
        inf->setText(QCoreApplication::translate("useradd", "Welcome: admin", nullptr));
        title->setText(QCoreApplication::translate("useradd", "  Iwork Admin", nullptr));
        tstr->setText(QCoreApplication::translate("useradd", "nowtime", nullptr));
        jsd->setText(QCoreApplication::translate("useradd", "\346\212\200\346\234\257\350\201\214\347\272\247", nullptr));
        pd->setText(QCoreApplication::translate("useradd", "\350\201\214\345\212\241", nullptr));
        sd->setText(QCoreApplication::translate("useradd", "\346\200\247\345\210\253", nullptr));
        nd->setText(QCoreApplication::translate("useradd", "\345\247\223\345\220\215", nullptr));
        bmd->setText(QCoreApplication::translate("useradd", "\351\203\250\351\227\250ID", nullptr));
        gld->setText(QCoreApplication::translate("useradd", "\347\256\241\347\220\206\350\201\214\347\272\247", nullptr));
        ed->setText(QCoreApplication::translate("useradd", "\345\205\245\350\201\214\346\227\266\351\227\264", nullptr));
        nd_3->setText(QCoreApplication::translate("useradd", "\345\267\245\345\217\267", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("useradd", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\263\250\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\345\267\245\345\217\267\345\277\205\351\241\273\350\276\223\345\205\245\344\270\224\344\270\272\346\225\260\345\255\227\357\274\214\345\247\223\345\220\215\345\277\205\351\241\273\350\276\223\345\205\245\357\274\214\345\205\266\344\273\226"
                        "\345\217\257\344\273\245\347\274\272\347\234\201\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.\350\213\245\350\276\223\345\205\245\346\200\247\345\210\253\357\274\214\347\224\267\350\276\223\345\205\2451\357\274\214\345\245\263\350\276\223\345\205\2450\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.\350\213\245\350\256\276\345\256\232\351\203\250\351\227\250ID\357\274\214\345\210\231\351\203\250\351\227\250ID\345\277\205\351\241\273\345\255\230\345\234\250\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4.\350\213\245\350\276\223\345\205\245\346\212\200\346\234\257\350\201\214\347\272\247/\347\256\241\347\220\206\350\201\214\347\272\247\357\274\214\345\277\205\351\241\273\346\230\257\346\225\260\345\255\2271-99\343\200\202</p></"
                        "body></html>", nullptr));
        qd->setText(QCoreApplication::translate("useradd", "\347\241\256\345\256\232", nullptr));
        jsd_2->setText(QCoreApplication::translate("useradd", "\345\267\245\350\265\204", nullptr));
        gld_2->setText(QCoreApplication::translate("useradd", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class useradd: public Ui_useradd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERADD_H
