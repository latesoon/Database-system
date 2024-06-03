/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *title;
    QLabel *tstr;
    QLabel *per;
    QLabel *nd;
    QLabel *ns;
    QLabel *sd;
    QLabel *ss;
    QLabel *ed;
    QLabel *es;
    QLabel *pd;
    QLabel *ps;
    QLabel *bmd;
    QLabel *bms;
    QLabel *jsd;
    QLabel *gld;
    QLabel *jss;
    QLabel *gls;
    QLabel *inf;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(800, 534);
        user->setContextMenuPolicy(Qt::ActionsContextMenu);
        title = new QLabel(user);
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
        tstr = new QLabel(user);
        tstr->setObjectName("tstr");
        tstr->setGeometry(QRect(240, 40, 241, 30));
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
        per = new QLabel(user);
        per->setObjectName("per");
        per->setGeometry(QRect(10, 110, 131, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(18);
        font2.setUnderline(true);
        per->setFont(font2);
        nd = new QLabel(user);
        nd->setObjectName("nd");
        nd->setGeometry(QRect(20, 180, 69, 19));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(14);
        nd->setFont(font3);
        ns = new QLabel(user);
        ns->setObjectName("ns");
        ns->setGeometry(QRect(170, 180, 211, 19));
        ns->setFont(font3);
        sd = new QLabel(user);
        sd->setObjectName("sd");
        sd->setGeometry(QRect(20, 220, 69, 19));
        sd->setFont(font3);
        ss = new QLabel(user);
        ss->setObjectName("ss");
        ss->setGeometry(QRect(170, 220, 211, 19));
        ss->setFont(font3);
        ed = new QLabel(user);
        ed->setObjectName("ed");
        ed->setGeometry(QRect(20, 260, 101, 19));
        ed->setFont(font3);
        es = new QLabel(user);
        es->setObjectName("es");
        es->setGeometry(QRect(170, 260, 211, 19));
        es->setFont(font3);
        pd = new QLabel(user);
        pd->setObjectName("pd");
        pd->setGeometry(QRect(20, 300, 101, 19));
        pd->setFont(font3);
        ps = new QLabel(user);
        ps->setObjectName("ps");
        ps->setGeometry(QRect(170, 300, 211, 19));
        ps->setFont(font3);
        bmd = new QLabel(user);
        bmd->setObjectName("bmd");
        bmd->setGeometry(QRect(20, 340, 101, 19));
        bmd->setFont(font3);
        bms = new QLabel(user);
        bms->setObjectName("bms");
        bms->setGeometry(QRect(170, 340, 211, 19));
        bms->setFont(font3);
        jsd = new QLabel(user);
        jsd->setObjectName("jsd");
        jsd->setGeometry(QRect(20, 380, 101, 19));
        jsd->setFont(font3);
        gld = new QLabel(user);
        gld->setObjectName("gld");
        gld->setGeometry(QRect(20, 420, 101, 19));
        gld->setFont(font3);
        jss = new QLabel(user);
        jss->setObjectName("jss");
        jss->setGeometry(QRect(170, 380, 211, 19));
        jss->setFont(font3);
        gls = new QLabel(user);
        gls->setObjectName("gls");
        gls->setGeometry(QRect(170, 420, 211, 19));
        gls->setFont(font3);
        inf = new QLabel(user);
        inf->setObjectName("inf");
        inf->setGeometry(QRect(490, 20, 301, 71));
        inf->setFont(font1);
        inf->setLayoutDirection(Qt::RightToLeft);
        inf->setStyleSheet(QString::fromUtf8("QLabel#inf{\n"
"	background-color: #0088ff; \n"
"	color: #ffffff;\n"
"	min-width:30px;\n"
"	min-height:30px;\n"
"}"));
        inf->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("user", "  Iwork", nullptr));
        tstr->setText(QCoreApplication::translate("user", "nowtime", nullptr));
        per->setText(QCoreApplication::translate("user", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        nd->setText(QCoreApplication::translate("user", "\345\247\223\345\220\215", nullptr));
        ns->setText(QString());
        sd->setText(QCoreApplication::translate("user", "\346\200\247\345\210\253", nullptr));
        ss->setText(QString());
        ed->setText(QCoreApplication::translate("user", "\345\205\245\350\201\214\346\227\266\351\227\264", nullptr));
        es->setText(QString());
        pd->setText(QCoreApplication::translate("user", "\350\201\214\345\212\241", nullptr));
        ps->setText(QString());
        bmd->setText(QCoreApplication::translate("user", "\351\203\250\351\227\250", nullptr));
        bms->setText(QString());
        jsd->setText(QCoreApplication::translate("user", "\346\212\200\346\234\257\350\201\214\347\272\247", nullptr));
        gld->setText(QCoreApplication::translate("user", "\347\256\241\347\220\206\350\201\214\347\272\247", nullptr));
        jss->setText(QString());
        gls->setText(QString());
        inf->setText(QCoreApplication::translate("user", "Welcome: user undefined", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
