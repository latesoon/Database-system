#include "login.h"
#include "ui_login.h"
#include "admin.h"
#include "user.h"
#include<QMessageBox>
#include<QtSql>
#include<windows.h>
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Login");
    this->setStyleSheet("QMainWindow { background-image: url(F:/C/databasesystem/bighomework/sunrise.jpg); }");
}

login::~login()
{
    delete ui;
}

void login::on_log_clicked()
{
    if(ui->ad->isChecked()){
        if(ui->getnum->text()=="10000" && ui->getpwd->text()=="10000"){
            this->hide();
            ad->show();
        }
        else{
            QMessageBox::information(NULL,"用户名或密码错误","请检查后重新输入！(您正在尝试管理员用户登录，请确认您的登录类型）");
        }
    }
    else if(ui->user->isChecked()){
        bool ischeaked=false;
        QSqlQuery query;
        query.exec("select employeeID,pwd from employee");
        while (query.next()) {
            if(ui->getnum->text().toInt()==query.value("employeeID").toInt() && ui->getpwd->text()==query.value("pwd").toString()){
                us->show();
                this->hide();
                connect(this,SIGNAL(sendsignal(QString)),us,SLOT(recsignal(QString)));
                QString S=ui->getnum->text();
                emit sendsignal(S);
                ischeaked=true;
                break;
            }
        }
        if(ischeaked==false)QMessageBox::information(NULL,"用户名或密码错误","请检查后重新输入！(您正在尝试普通用户登录，请确认您的登录类型）");
    }
}


void login::on_help_clicked()
{
    QMessageBox::information(NULL,"预留admin账号","工号：10000\n密码：10000");
}

