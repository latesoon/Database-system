#include "userfindpro.h"
#include "ui_userfindpro.h"
#include "userfind.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>
void userfindpro::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
userfindpro::userfindpro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userfindpro)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Admin");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
    ui->Box->clear();
    QSqlQuery q;
    q.exec("select * from department order by departmentID");
    while (q.next()){
        ui->Box->addItem(q.value("departmentID").toString()+ "-" +q.value("departname").toString());
    }
    ui->widget->setColumnCount(9);
    ui->widget->setHorizontalHeaderLabels(QStringList() << "工号" << "姓名" << "性别"<<"入职时间"<<"职务"<<"技术"<<"管理"<<"工资"<<"密码");
    QList<double>per;
    per<<0.10<<0.14<<0.06<<0.14<<0.14<<0.06<<0.06<<0.10;
    for (int i = 0; i < 8; i++) {
        ui->widget->horizontalHeader()->resizeSection(i, ui->widget->width()*per[i]);
    }
    ui->widget->horizontalHeader()->setStretchLastSection(true);
}

userfindpro::~userfindpro()
{
    delete ui;
}

void userfindpro::on_pushButton_clicked()
{
    userfind* f=new userfind;
    this->close();
    f->show();
}


void userfindpro::on_check_clicked()
{
    QString ct = ui->Box->currentText();
    if(ct.isEmpty()){
        QMessageBox::information(NULL,"注意","您没有选择合适的部门");
        return;
    }
    while (ui->widget->rowCount()) ui->widget->removeRow(0);
    QStringList parts = ct.split('-');
    QSqlQuery query;
    int search=parts[0].toInt();
    if(search)
        query.prepare("SELECT * FROM fullemployee WHERE departmentID = :departmentID ORDER BY employeeID");
    else
        query.prepare("SELECT * FROM fullemployee WHERE departmentID = :departmentID OR departmentID IS NULL ORDER BY employeeID");
    query.bindValue(":departmentID", search);
    query.exec();
    while(query.next()){
        int row = ui->widget->rowCount();
        ui->widget->insertRow(row);
        ui->widget->setItem(row, 0, new QTableWidgetItem(query.value("employeeID").toString()));
        ui->widget->setItem(row, 1, new QTableWidgetItem(query.value("employname").toString()));
        if(!query.value("sex").isNull())
            ui->widget->setItem(row, 2, new QTableWidgetItem((query.value("sex").toBool()==true)?"男":"女"));
        ui->widget->setItem(row, 3, new QTableWidgetItem(query.value("enrollmentdate").toString()));
        ui->widget->setItem(row, 4, new QTableWidgetItem(query.value("job").toString()));
        ui->widget->setItem(row, 5, new QTableWidgetItem(query.value("techlevel").toString()));
        ui->widget->setItem(row, 6, new QTableWidgetItem(query.value("managelevel").toString()));
        ui->widget->setItem(row, 7, new QTableWidgetItem(query.value("salary").toString()));
        ui->widget->setItem(row, 8, new QTableWidgetItem(query.value("pwd").toString()));
    }
}

