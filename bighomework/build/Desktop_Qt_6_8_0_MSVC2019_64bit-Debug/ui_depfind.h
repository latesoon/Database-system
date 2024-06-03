/********************************************************************************
** Form generated from reading UI file 'depfind.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPFIND_H
#define UI_DEPFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_depfind
{
public:
    QPushButton *pushButton;
    QLabel *inf;
    QLabel *title;
    QLabel *tstr;
    QLabel *ed;
    QLabel *nd;
    QLabel *nd_2;
    QLabel *es;
    QLabel *ss;
    QLabel *ns;
    QPushButton *check;
    QLabel *sd;
    QComboBox *Box;

    void setupUi(QDialog *depfind)
    {
        if (depfind->objectName().isEmpty())
            depfind->setObjectName("depfind");
        depfind->resize(789, 532);
        depfind->setMinimumSize(QSize(0, 16));
        pushButton = new QPushButton(depfind);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 470, 93, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        pushButton->setFont(font);
        inf = new QLabel(depfind);
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
        title = new QLabel(depfind);
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
        tstr = new QLabel(depfind);
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
        ed = new QLabel(depfind);
        ed->setObjectName("ed");
        ed->setGeometry(QRect(70, 370, 101, 19));
        ed->setFont(font);
        nd = new QLabel(depfind);
        nd->setObjectName("nd");
        nd->setGeometry(QRect(70, 250, 69, 19));
        nd->setFont(font);
        nd_2 = new QLabel(depfind);
        nd_2->setObjectName("nd_2");
        nd_2->setGeometry(QRect(140, 160, 111, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(16);
        nd_2->setFont(font3);
        es = new QLabel(depfind);
        es->setObjectName("es");
        es->setGeometry(QRect(220, 370, 211, 19));
        es->setFont(font);
        ss = new QLabel(depfind);
        ss->setObjectName("ss");
        ss->setGeometry(QRect(220, 310, 211, 19));
        ss->setFont(font);
        ns = new QLabel(depfind);
        ns->setObjectName("ns");
        ns->setGeometry(QRect(220, 250, 211, 19));
        ns->setFont(font);
        check = new QPushButton(depfind);
        check->setObjectName("check");
        check->setGeometry(QRect(550, 160, 71, 31));
        check->setFont(font);
        check->setContextMenuPolicy(Qt::DefaultContextMenu);
        check->setLayoutDirection(Qt::LeftToRight);
        sd = new QLabel(depfind);
        sd->setObjectName("sd");
        sd->setGeometry(QRect(70, 310, 69, 19));
        sd->setFont(font);
        Box = new QComboBox(depfind);
        Box->setObjectName("Box");
        Box->setGeometry(QRect(280, 160, 241, 31));
        Box->setFont(font1);
        title->raise();
        pushButton->raise();
        inf->raise();
        tstr->raise();
        ed->raise();
        nd->raise();
        nd_2->raise();
        es->raise();
        ss->raise();
        ns->raise();
        check->raise();
        sd->raise();
        Box->raise();

        retranslateUi(depfind);

        QMetaObject::connectSlotsByName(depfind);
    } // setupUi

    void retranslateUi(QDialog *depfind)
    {
        depfind->setWindowTitle(QCoreApplication::translate("depfind", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("depfind", "\350\277\224\345\233\236", nullptr));
        inf->setText(QCoreApplication::translate("depfind", "Welcome: admin", nullptr));
        title->setText(QCoreApplication::translate("depfind", "  Iwork Admin", nullptr));
        tstr->setText(QCoreApplication::translate("depfind", "nowtime", nullptr));
        ed->setText(QCoreApplication::translate("depfind", "\351\203\250\351\227\250\344\272\272\346\225\260", nullptr));
        nd->setText(QCoreApplication::translate("depfind", "\351\203\250\351\227\250\345\220\215", nullptr));
        nd_2->setText(QCoreApplication::translate("depfind", "\351\203\250\351\227\250\347\274\226\345\217\267", nullptr));
        es->setText(QString());
        ss->setText(QString());
        ns->setText(QString());
        check->setText(QCoreApplication::translate("depfind", "\346\237\245\350\257\242", nullptr));
        sd->setText(QCoreApplication::translate("depfind", "\351\203\250\351\225\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depfind: public Ui_depfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPFIND_H
