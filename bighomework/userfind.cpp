#include "userfind.h"
#include "ui_userfind.h"
#include "admin.h"
#include "userfindpro.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>
void userfind::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
userfind::userfind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userfind)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Admin");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
    ui->Box->clear();
    QSqlQuery q;
    q.exec("select employeeID from employee order by employeeID");
    while (q.next()){
        ui->Box->addItem(q.value("employeeID").toString());
    }
}

userfind::~userfind()
{
    delete ui;
}

void userfind::on_pushButton_clicked()
{
    admin* ad=new admin;
    this->close();
    ad->show();
}


void userfind::on_check_clicked()
{
    QString ct = ui->Box->currentText();
    if(ct.isEmpty()){
        QMessageBox::information(NULL,"注意","您没有选择合适的ID");
        return;
    }
    QSqlQuery query;
    query.exec("select * from employee");
    while (query.next()) {
        if(query.value("employeeID").toString()==ct){
            ui->ns->setText(query.value("employname").toString());
            ui->es->setText(query.value("enrollmentdate").toString());
            if(query.value("sex").toBool()==true)
                ui->ss->setText("男");
            else if(query.value("sex").toBool()==false)
                ui->ss->setText("女");
            else
                ui->ss->setText("");
            ui->ps->setText(query.value("job").toString());
            QSqlQuery qbm;
            qbm.exec("select * from department");
            bool bqbm=false;
            while (qbm.next()) {
                if(qbm.value("departmentID").toString()==query.value("departmentID").toString()){
                    ui->bms->setText(qbm.value("departname").toString());
                    bqbm=true;
                    break;
                }
            }
            if(!bqbm)ui->bms->setText("");
            QSqlQuery qtt;
            qtt.exec("select * from technicist");
            bool bqtt=false;
            while(qtt.next()){
                if(qtt.value("employeeID").toString()==ct){
                    ui->jss->setText(qtt.value("techlevel").toString());
                    bqtt=true;
                    break;
                }
            }
            if(!bqtt)ui->jss->setText("");
            QSqlQuery qmm;
            qmm.exec("select * from management");
            bool bqmm=false;
            while(qmm.next()){
                if(qmm.value("employeeID").toString()==ct){
                    ui->gls->setText(qmm.value("managelevel").toString());
                    bqmm=true;
                    break;
                }
            }
            if(!bqmm)ui->gls->setText("");
            ui->j1->setText(query.value("salary").toString());
            ui->j2->setText(query.value("pwd").toString());
            break;
        }
    }
}


void userfind::on_ch_clicked()
{
    userfindpro* p=new userfindpro;
    this->close();
    p->show();
}

