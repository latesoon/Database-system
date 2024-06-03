/********************************************************************************
** Form generated from reading UI file 'depop.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOP_H
#define UI_DEPOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_depop
{
public:
    QPushButton *pushButton;
    QLabel *inf;
    QLabel *title;
    QLabel *tstr;
    QGroupBox *groupBox;
    QLineEdit *e1;
    QLabel *l1;
    QLineEdit *e2;
    QLineEdit *e3;
    QLabel *l2;
    QLabel *l3;
    QTextBrowser *textBrowser;
    QPushButton *sm;
    QGroupBox *groupBox_2;
    QLineEdit *e4;
    QLabel *l1_2;
    QLineEdit *e5;
    QLineEdit *e6;
    QLabel *l2_2;
    QLabel *l3_2;
    QTextBrowser *textBrowser_2;
    QPushButton *xg;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *sc;
    QLineEdit *e7;
    QLabel *l3_3;

    void setupUi(QDialog *depop)
    {
        if (depop->objectName().isEmpty())
            depop->setObjectName("depop");
        depop->resize(791, 535);
        pushButton = new QPushButton(depop);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 490, 93, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        pushButton->setFont(font);
        inf = new QLabel(depop);
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
        title = new QLabel(depop);
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
        tstr = new QLabel(depop);
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
        groupBox = new QGroupBox(depop);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 110, 661, 171));
        groupBox->setFont(font);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        e1 = new QLineEdit(groupBox);
        e1->setObjectName("e1");
        e1->setGeometry(QRect(130, 40, 221, 25));
        l1 = new QLabel(groupBox);
        l1->setObjectName("l1");
        l1->setGeometry(QRect(30, 40, 81, 19));
        e2 = new QLineEdit(groupBox);
        e2->setObjectName("e2");
        e2->setGeometry(QRect(130, 80, 221, 25));
        e3 = new QLineEdit(groupBox);
        e3->setObjectName("e3");
        e3->setGeometry(QRect(130, 120, 221, 25));
        l2 = new QLabel(groupBox);
        l2->setObjectName("l2");
        l2->setGeometry(QRect(30, 80, 69, 19));
        l3 = new QLabel(groupBox);
        l3->setObjectName("l3");
        l3->setGeometry(QRect(30, 120, 71, 19));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(380, 30, 271, 91));
        sm = new QPushButton(groupBox);
        sm->setObjectName("sm");
        sm->setGeometry(QRect(460, 130, 93, 28));
        groupBox_2 = new QGroupBox(depop);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(70, 290, 661, 191));
        groupBox_2->setFont(font);
        groupBox_2->setLayoutDirection(Qt::LeftToRight);
        e4 = new QLineEdit(groupBox_2);
        e4->setObjectName("e4");
        e4->setGeometry(QRect(100, 40, 221, 25));
        l1_2 = new QLabel(groupBox_2);
        l1_2->setObjectName("l1_2");
        l1_2->setGeometry(QRect(20, 40, 81, 19));
        e5 = new QLineEdit(groupBox_2);
        e5->setObjectName("e5");
        e5->setGeometry(QRect(100, 80, 221, 25));
        e6 = new QLineEdit(groupBox_2);
        e6->setObjectName("e6");
        e6->setGeometry(QRect(100, 120, 221, 25));
        l2_2 = new QLabel(groupBox_2);
        l2_2->setObjectName("l2_2");
        l2_2->setGeometry(QRect(20, 80, 69, 19));
        l3_2 = new QLabel(groupBox_2);
        l3_2->setObjectName("l3_2");
        l3_2->setGeometry(QRect(20, 120, 71, 19));
        textBrowser_2 = new QTextBrowser(groupBox_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(400, 20, 251, 121));
        xg = new QPushButton(groupBox_2);
        xg->setObjectName("xg");
        xg->setGeometry(QRect(410, 150, 93, 28));
        cb1 = new QCheckBox(groupBox_2);
        cb1->setObjectName("cb1");
        cb1->setGeometry(QRect(330, 80, 98, 23));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(10);
        cb1->setFont(font3);
        cb2 = new QCheckBox(groupBox_2);
        cb2->setObjectName("cb2");
        cb2->setGeometry(QRect(330, 120, 98, 23));
        cb2->setFont(font3);
        sc = new QPushButton(groupBox_2);
        sc->setObjectName("sc");
        sc->setGeometry(QRect(530, 150, 93, 28));
        e7 = new QLineEdit(groupBox_2);
        e7->setObjectName("e7");
        e7->setGeometry(QRect(100, 160, 221, 25));
        l3_3 = new QLabel(groupBox_2);
        l3_3->setObjectName("l3_3");
        l3_3->setGeometry(QRect(20, 160, 71, 19));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font4.setPointSize(11);
        l3_3->setFont(font4);
        title->raise();
        inf->raise();
        tstr->raise();
        pushButton->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(depop);

        QMetaObject::connectSlotsByName(depop);
    } // setupUi

    void retranslateUi(QDialog *depop)
    {
        depop->setWindowTitle(QCoreApplication::translate("depop", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("depop", "\350\277\224\345\233\236", nullptr));
        inf->setText(QCoreApplication::translate("depop", "Welcome: admin", nullptr));
        title->setText(QCoreApplication::translate("depop", "  Iwork Admin", nullptr));
        tstr->setText(QCoreApplication::translate("depop", "nowtime", nullptr));
        groupBox->setTitle(QCoreApplication::translate("depop", "\351\203\250\351\227\250\346\267\273\345\212\240", nullptr));
        l1->setText(QCoreApplication::translate("depop", "\351\203\250\351\227\250ID", nullptr));
        l2->setText(QCoreApplication::translate("depop", "\351\203\250\351\227\250\345\220\215", nullptr));
        l3->setText(QCoreApplication::translate("depop", "\351\203\250\351\225\277ID", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("depop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">\346\263\250\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">1.\351\231\244\351\203\250\351\227\250ID\345\244\226\357\274\214\345\205\266\344\273\226\345\235"
                        "\207\351\235\236\345\277\205\345\241\253\351\241\271\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">2.\351\203\250\351\227\250ID\344\270\215\345\217\257\344\270\216\345\267\262\346\234\211\351\203\250\351\227\250ID\351\207\215\345\244\215\357\274\214\344\270\224\345\277\205\351\241\273\345\234\2501001-9999\347\232\204\350\214\203\345\233\264\345\206\205\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">3.\351\203\250\351\225\277\345\277\205\351\241\273\345\255\230\345\234\250\357\274\214\344\270\224\350\256\276\347\275\256\351\203\250\351\225\277\345\220\216\357\274\214\351\203\250\351\225\277\347\232\204\351\203\250\351\227\250\350\207\252\345\212\250\350\260\203\346\225\264\350\207\263"
                        "\346\226\260\351\203\250\351\227\250\343\200\202</span></p></body></html>", nullptr));
        sm->setText(QCoreApplication::translate("depop", "\346\217\220\344\272\244", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("depop", "\351\203\250\351\227\250\344\277\256\346\224\271/\347\247\273\351\231\244", nullptr));
        l1_2->setText(QCoreApplication::translate("depop", "\351\203\250\351\227\250ID", nullptr));
        l2_2->setText(QCoreApplication::translate("depop", "\351\203\250\351\227\250\345\220\215", nullptr));
        l3_2->setText(QCoreApplication::translate("depop", "\351\203\250\351\225\277ID", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("depop", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\346\245\267\344\275\223'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">\346\263\250\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">1.\351\203\250\351\227\250\347\247\273\351\231\244\346\223\215\344\275\234\345\277\205\351\241"
                        "\273\345\241\253\345\206\231\351\203\250\351\227\250ID\357\274\214\350\213\245\345\241\253\345\206\231\346\226\260\351\203\250\351\227\250ID\345\210\231\345\205\266\344\270\255\345\221\230\345\267\245\350\277\201\347\247\273\350\207\263\346\226\260\351\203\250\351\227\250\357\274\214\345\220\246\345\210\231\350\277\201\347\247\273\350\207\263\351\273\230\350\256\244\357\274\210ID\357\274\2320\357\274\211\351\203\250\351\227\250\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:8pt;\">2.\351\203\250\351\227\250\344\277\256\346\224\271\346\223\215\344\275\234\346\230\257\351\200\232\350\277\207\347\273\231\345\256\232\347\232\204\351\203\250\351\227\250ID\344\277\256\346\224\271\351\203\250\351\227\250\345\220\215\345\222\214\351\203\250\351\225\277\357\274\214\351\203\250\351\227\250ID\344\270\215\345\217\257\347\274\272\347\234\201\357\274\214\351\203\250\351"
                        "\227\250\345\220\215\345\222\214\351\203\250\351\225\277\350\213\245\344\273\205\351\234\200\344\277\256\346\224\271\344\270\200\345\244\204\357\274\214\345\210\231\345\217\246\344\270\200\345\244\204\346\227\240\351\234\200\345\241\253\345\206\231\357\274\214\350\213\245\351\234\200\346\224\271\344\270\272\347\251\272\345\200\274\345\210\231\345\213\276\351\200\211\345\244\215\351\200\211\346\241\206\357\274\214\345\244\215\351\200\211\346\241\206\344\274\230\345\205\210\347\272\247\351\253\230\344\272\216\350\276\223\345\205\245\343\200\202</span></p></body></html>", nullptr));
        xg->setText(QCoreApplication::translate("depop", "\344\277\256\346\224\271", nullptr));
        cb1->setText(QCoreApplication::translate("depop", "null", nullptr));
        cb2->setText(QCoreApplication::translate("depop", "null", nullptr));
        sc->setText(QCoreApplication::translate("depop", "\347\247\273\351\231\244", nullptr));
        l3_3->setText(QCoreApplication::translate("depop", "\346\226\260\351\203\250\351\227\250ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depop: public Ui_depop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOP_H
