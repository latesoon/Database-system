#include "admin.h"
#include "ui_admin.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>
#include"userfind.h"
#include"useradd.h"
#include"userremake.h"
#include"depfind.h"
#include"depop.h"
void admin::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Admin");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
}

admin::~admin()
{
    delete ui;
}

void admin::on_b1_clicked()
{
    userfind* uf=new userfind;
    this->close();
    uf->show();
}


void admin::on_b2_clicked()
{
    useradd* ua=new useradd;
    this->close();
    ua->show();
}


void admin::on_b3_clicked()
{
    userremake* ur=new userremake;
    this->close();
    ur->show();
}


void admin::on_b4_clicked()
{
    depfind* df=new depfind;
    this->close();
    df->show();
}


void admin::on_b5_clicked()
{
    depop* dp=new depop;
    this->close();
    dp->show();
}

