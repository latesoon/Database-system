#include "user.h"
#include "ui_user.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>

QString uid="undefined";
void user::recsignal(QString msg){
    uid=msg;
    ui->inf->setText("Welcome: user "+uid);
    QSqlQuery query;
    query.exec("select * from employee");
    while (query.next()) {
        if(query.value("employeeID").toString()==uid){
            ui->ns->setText(query.value("employname").toString());
            ui->es->setText(query.value("enrollmentdate").toString());
            if(query.value("sex").toBool()==true)
                ui->ss->setText("男");
            else if(query.value("sex").toBool()==false)
                ui->ss->setText("女");
            ui->ps->setText(query.value("job").toString());
            QSqlQuery qbm;
            qbm.exec("select * from department");
            while (qbm.next()) {
                if(qbm.value("departmentID").toString()==query.value("departmentID").toString()){
                    ui->bms->setText(qbm.value("departname").toString());
                    break;
                }
            }
            QSqlQuery qtt;
            qtt.exec("select * from technicist");
            while(qtt.next()){
                if(qtt.value("employeeID").toString()==uid){
                    ui->jss->setText(qtt.value("techlevel").toString());
                    break;
                }
            }
            QSqlQuery qmm;
            qmm.exec("select * from management");
            while(qmm.next()){
                if(qmm.value("employeeID").toString()==uid){
                    ui->gls->setText(qmm.value("managelevel").toString());
                    break;
                }
            }
            break;
        }
    }
}
void user::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
}

user::~user()
{
    delete ui;
}
