#include "depfind.h"
#include "ui_depfind.h"
#include "admin.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>
void depfind::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
depfind::depfind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::depfind)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Admin");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
    ui->Box->clear();
    QSqlQuery q;
    q.exec("select departmentID from department");
    while (q.next()){
        ui->Box->addItem(q.value("departmentID").toString());
    }
}

depfind::~depfind()
{
    delete ui;
}

void depfind::on_pushButton_clicked()
{
    admin* ad=new admin;
    this->close();
    ad->show();
}


void depfind::on_check_clicked()
{
    QString ct = ui->Box->currentText();
    if(ct.isEmpty()){
        QMessageBox::information(NULL,"注意","您没有选择合适的ID");
        return;
    }
    QSqlQuery query;
    query.exec("select * from department");
    while (query.next()) {
        if(query.value("departmentID").toString()==ct){
            ui->ns->setText(query.value("departname").toString());
            ui->ss->setText(query.value("employeeID").toString());
            QSqlQuery qu;
            int cnt=0;
            qu.exec("select departmentID from employee");
            while(qu.next()){
                if(qu.value("departmentID").toString()==ct)cnt++;
            }
            ui->es->setText(QString::number(cnt));
            break;
        }
    }
}

