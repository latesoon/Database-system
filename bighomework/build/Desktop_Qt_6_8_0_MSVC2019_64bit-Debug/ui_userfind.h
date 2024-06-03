/********************************************************************************
** Form generated from reading UI file 'userfind.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFIND_H
#define UI_USERFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userfind
{
public:
    QPushButton *pushButton;
    QLabel *inf;
    QLabel *title;
    QLabel *tstr;
    QLabel *ed;
    QLabel *jsd;
    QLabel *gld;
    QLabel *es;
    QLabel *bms;
    QPushButton *check;
    QLabel *ss;
    QComboBox *Box;
    QLabel *pd;
    QLabel *nd;
    QLabel *bmd;
    QLabel *gls;
    QLabel *nd_2;
    QLabel *ns;
    QLabel *ps;
    QLabel *jss;
    QLabel *sd;
    QPushButton *ch;
    QLabel *gld_2;
    QLabel *jsd_2;
    QLabel *j1;
    QLabel *j2;

    void setupUi(QDialog *userfind)
    {
        if (userfind->objectName().isEmpty())
            userfind->setObjectName("userfind");
        userfind->resize(793, 533);
        pushButton = new QPushButton(userfind);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(680, 480, 93, 28));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        pushButton->setFont(font);
        inf = new QLabel(userfind);
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
        title = new QLabel(userfind);
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
        tstr = new QLabel(userfind);
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
        ed = new QLabel(userfind);
        ed->setObjectName("ed");
        ed->setGeometry(QRect(70, 250, 101, 19));
        ed->setFont(font);
        jsd = new QLabel(userfind);
        jsd->setObjectName("jsd");
        jsd->setGeometry(QRect(70, 370, 101, 19));
        jsd->setFont(font);
        gld = new QLabel(userfind);
        gld->setObjectName("gld");
        gld->setGeometry(QRect(70, 410, 101, 19));
        gld->setFont(font);
        es = new QLabel(userfind);
        es->setObjectName("es");
        es->setGeometry(QRect(220, 250, 211, 19));
        es->setFont(font);
        bms = new QLabel(userfind);
        bms->setObjectName("bms");
        bms->setGeometry(QRect(220, 330, 211, 19));
        bms->setFont(font);
        check = new QPushButton(userfind);
        check->setObjectName("check");
        check->setGeometry(QRect(480, 120, 71, 31));
        check->setFont(font);
        check->setContextMenuPolicy(Qt::DefaultContextMenu);
        check->setLayoutDirection(Qt::LeftToRight);
        ss = new QLabel(userfind);
        ss->setObjectName("ss");
        ss->setGeometry(QRect(220, 210, 211, 19));
        ss->setFont(font);
        Box = new QComboBox(userfind);
        Box->setObjectName("Box");
        Box->setGeometry(QRect(210, 120, 241, 31));
        Box->setFont(font1);
        pd = new QLabel(userfind);
        pd->setObjectName("pd");
        pd->setGeometry(QRect(70, 290, 101, 19));
        pd->setFont(font);
        nd = new QLabel(userfind);
        nd->setObjectName("nd");
        nd->setGeometry(QRect(70, 170, 69, 19));
        nd->setFont(font);
        bmd = new QLabel(userfind);
        bmd->setObjectName("bmd");
        bmd->setGeometry(QRect(70, 330, 101, 19));
        bmd->setFont(font);
        gls = new QLabel(userfind);
        gls->setObjectName("gls");
        gls->setGeometry(QRect(220, 410, 211, 19));
        gls->setFont(font);
        nd_2 = new QLabel(userfind);
        nd_2->setObjectName("nd_2");
        nd_2->setGeometry(QRect(130, 120, 69, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(16);
        nd_2->setFont(font3);
        ns = new QLabel(userfind);
        ns->setObjectName("ns");
        ns->setGeometry(QRect(220, 170, 211, 19));
        ns->setFont(font);
        ps = new QLabel(userfind);
        ps->setObjectName("ps");
        ps->setGeometry(QRect(220, 290, 211, 19));
        ps->setFont(font);
        jss = new QLabel(userfind);
        jss->setObjectName("jss");
        jss->setGeometry(QRect(220, 370, 211, 19));
        jss->setFont(font);
        sd = new QLabel(userfind);
        sd->setObjectName("sd");
        sd->setGeometry(QRect(70, 210, 69, 19));
        sd->setFont(font);
        ch = new QPushButton(userfind);
        ch->setObjectName("ch");
        ch->setGeometry(QRect(570, 120, 151, 31));
        ch->setFont(font);
        ch->setContextMenuPolicy(Qt::DefaultContextMenu);
        ch->setLayoutDirection(Qt::LeftToRight);
        gld_2 = new QLabel(userfind);
        gld_2->setObjectName("gld_2");
        gld_2->setGeometry(QRect(70, 490, 101, 19));
        gld_2->setFont(font);
        jsd_2 = new QLabel(userfind);
        jsd_2->setObjectName("jsd_2");
        jsd_2->setGeometry(QRect(70, 450, 101, 19));
        jsd_2->setFont(font);
        j1 = new QLabel(userfind);
        j1->setObjectName("j1");
        j1->setGeometry(QRect(220, 450, 211, 19));
        j1->setFont(font);
        j2 = new QLabel(userfind);
        j2->setObjectName("j2");
        j2->setGeometry(QRect(220, 490, 211, 19));
        j2->setFont(font);
        pushButton->raise();
        title->raise();
        inf->raise();
        tstr->raise();
        ed->raise();
        jsd->raise();
        gld->raise();
        es->raise();
        bms->raise();
        check->raise();
        ss->raise();
        Box->raise();
        pd->raise();
        nd->raise();
        bmd->raise();
        gls->raise();
        nd_2->raise();
        ns->raise();
        ps->raise();
        jss->raise();
        sd->raise();
        ch->raise();
        gld_2->raise();
        jsd_2->raise();
        j1->raise();
        j2->raise();

        retranslateUi(userfind);

        QMetaObject::connectSlotsByName(userfind);
    } // setupUi

    void retranslateUi(QDialog *userfind)
    {
        userfind->setWindowTitle(QCoreApplication::translate("userfind", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("userfind", "\350\277\224\345\233\236", nullptr));
        inf->setText(QCoreApplication::translate("userfind", "Welcome: admin", nullptr));
        title->setText(QCoreApplication::translate("userfind", "  Iwork Admin", nullptr));
        tstr->setText(QCoreApplication::translate("userfind", "nowtime", nullptr));
        ed->setText(QCoreApplication::translate("userfind", "\345\205\245\350\201\214\346\227\266\351\227\264", nullptr));
        jsd->setText(QCoreApplication::translate("userfind", "\346\212\200\346\234\257\350\201\214\347\272\247", nullptr));
        gld->setText(QCoreApplication::translate("userfind", "\347\256\241\347\220\206\350\201\214\347\272\247", nullptr));
        es->setText(QString());
        bms->setText(QString());
        check->setText(QCoreApplication::translate("userfind", "\346\237\245\350\257\242", nullptr));
        ss->setText(QString());
        pd->setText(QCoreApplication::translate("userfind", "\350\201\214\345\212\241", nullptr));
        nd->setText(QCoreApplication::translate("userfind", "\345\247\223\345\220\215", nullptr));
        bmd->setText(QCoreApplication::translate("userfind", "\351\203\250\351\227\250", nullptr));
        gls->setText(QString());
        nd_2->setText(QCoreApplication::translate("userfind", "\345\267\245\345\217\267", nullptr));
        ns->setText(QString());
        ps->setText(QString());
        jss->setText(QString());
        sd->setText(QCoreApplication::translate("userfind", "\346\200\247\345\210\253", nullptr));
        ch->setText(QCoreApplication::translate("userfind", "-->\351\253\230\347\272\247\346\243\200\347\264\242", nullptr));
        gld_2->setText(QCoreApplication::translate("userfind", "\345\257\206\347\240\201", nullptr));
        jsd_2->setText(QCoreApplication::translate("userfind", "\345\267\245\350\265\204", nullptr));
        j1->setText(QString());
        j2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class userfind: public Ui_userfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFIND_H
