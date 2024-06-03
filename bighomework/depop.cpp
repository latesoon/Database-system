#include "depop.h"
#include "ui_depop.h"
#include "admin.h"
#include <QMessagebox>
#include<QDateTime>
#include<QTimer>
#include<QtSql>
void depop::time(){
    QDateTime dateTime= QDateTime::currentDateTime();
    QString tt=dateTime.toString("yyyy-MM-dd hh:mm:ss");
    ui->tstr->setText(tt);
}
depop::depop(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::depop)
{
    ui->setupUi(this);
    this->setWindowTitle("Iwork Admin");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(time()));
    timer->start(1000);
}

depop::~depop()
{
    delete ui;
}

void depop::on_pushButton_clicked()
{
    admin* ad=new admin;
    this->close();
    ad->show();
}


void depop::on_sm_clicked()
{
    bool c1;
    int val=ui->e1->text().toInt(&c1);
    if(!c1){
        QMessageBox::critical(NULL,"错误","输入的部门ID不是数字，创建失败！");
        return;
    }
    if(!ui->e2->text().isEmpty()){
        if(!ui->e3->text().isEmpty()){
            bool c2;
            int val2=ui->e3->text().toInt(&c2);
            if(!c2){
                QMessageBox::critical(NULL,"错误","输入的部长ID不是数字，创建失败！");
            }
            QSqlQuery query;
            query.prepare("INSERT INTO department (departmentID,departname,employeeID) VALUES (:value1,:value2,:value3)");
            query.bindValue(":value1",val);
            query.bindValue(":value2", ui->e2->text());
            query.bindValue(":value3",val2);
            if (!query.exec()) {
                QMessageBox::critical(NULL,"错误","数据库错误，插入失败，请检查输入！");
                return;
            }
        }
        else{
            QSqlQuery query;
            query.prepare("INSERT INTO department (departmentID,departname) VALUES (:value1,:value2)");
            query.bindValue(":value1",val);
            query.bindValue(":value2", ui->e2->text());
            if (!query.exec()) {
                QMessageBox::critical(NULL,"错误","数据库错误，插入失败，请检查输入！");
                return;
            }
        }
    }
    else{
        if(!ui->e3->text().isEmpty()){
            bool c2;
            int val2=ui->e3->text().toInt(&c2);
            if(!c2){
                QMessageBox::critical(NULL,"错误","输入的部长ID不是数字，创建失败！");
            }
            QSqlQuery query;
            query.prepare("INSERT INTO department (departmentID,employeeID) VALUES (:value1,:value2)");
            query.bindValue(":value1",val);
            query.bindValue(":value2",val2);
            if (!query.exec()) {
                QMessageBox::critical(NULL,"错误","数据库错误，插入失败，请检查输入！");
                return;
            }
        }
        else{
            QSqlQuery query;
            query.prepare("INSERT INTO department (departmentID) VALUES (:value1)");
            query.bindValue(":value1",val);
            if (!query.exec()) {
                QMessageBox::critical(NULL,"错误","数据库错误，插入失败，请检查输入！");
                return;
            }
        }
    }
    QMessageBox::information(NULL,"操作完成","操作完成！");
}


void depop::on_sc_clicked(){
    bool c1;
    int val=ui->e4->text().toInt(&c1);
    if(!c1 || !val){
        QMessageBox::critical(NULL,"错误","输入的部门ID不合法，移除失败！");
        return;
    }
    int val2=0;
    if(!ui->e7->text().isEmpty()){
        bool c2;
        val2=ui->e7->text().toInt(&c2);
        if(!c2){
        QMessageBox::critical(NULL,"错误","输入的新部门ID不合法，移除失败！");
        return;
        }
    }
    QSqlQuery query_update;
    QSqlQuery query_delete;
    QSqlQuery transaction_start;
    QSqlQuery transaction_commit;
    QSqlQuery transaction_rollback;
    transaction_start.exec("START TRANSACTION");
    query_update.prepare("update employee set departmentID =:value1 where departmentID =:value2");
    query_update.bindValue(":value1", val2);
    query_update.bindValue(":value2", val);
    query_delete.prepare("DELETE FROM department WHERE departmentID = :value");
    query_delete.bindValue(":value", val);
    bool ok1=query_update.exec();
    bool ok2=query_delete.exec();
    if(ok1 && ok2)
    {
        transaction_commit.exec("COMMIT");
        QMessageBox::information(NULL,"操作完成","操作完成！");
    }else
    {
        transaction_rollback.exec("ROLLBACK");
        QMessageBox::critical(NULL,"错误","操作失败！");
    }
}

void depop::on_xg_clicked()
{
    bool c1;
    int val=ui->e4->text().toInt(&c1);
    if(!c1){
        QMessageBox::critical(NULL,"错误","输入的部门ID不是数字，修改失败！");
        return;
    }
    if(ui->cb1->isChecked()){
        QSqlQuery query;
        query.prepare("UPDATE department SET departname = :value1 WHERE departmentID = :value2");
        query.bindValue(":value1", NULL);
        query.bindValue(":value2", val);
        if(!query.exec())
            QMessageBox::critical(NULL,"错误","修改部门名失败！");
    }
    else{
        if(!ui->e5->text().isEmpty()){
            QSqlQuery query1;
            query1.prepare("UPDATE department SET departname = :value1 WHERE departmentID = :value2");
            query1.bindValue(":value1", ui->e5->text());
            query1.bindValue(":value2", val);
            if (!query1.exec()) {
                QMessageBox::critical(NULL,"错误","修改部门名失败！");
            }
        }
    }
    if(ui->cb2->isChecked()){
        QSqlQuery query;
        query.prepare("UPDATE department SET employeeID = :value1 WHERE departmentID = :value2");
        query.bindValue(":value1", 0);
        query.bindValue(":value2", val);
        if(!query.exec())
            QMessageBox::critical(NULL,"错误","修改部长ID失败！");
    }
    else{
        if(!ui->e6->text().isEmpty()){
            bool c2;
            int val2=ui->e6->text().toInt(&c2);
            if(!c2){
                QMessageBox::critical(NULL,"错误","输入的部长ID不是数字！");
            }
            else{
                QSqlQuery query2;
                query2.prepare("UPDATE department SET employeeID = :value1 WHERE departmentID = :value2");
                query2.bindValue(":value1", val2);
                query2.bindValue(":value2", val);
                if (!query2.exec()) {
                    QMessageBox::critical(NULL,"错误","修改部长ID失败！");
                }
                else{
                    QSqlQuery query3;
                    query3.prepare("UPDATE employee SET departmentID = :value1 WHERE employeeID = :value2");
                    query3.bindValue(":value1", val);
                    query3.bindValue(":value2", val2);
                    if (!query3.exec()) {
                        QMessageBox::critical(NULL,"错误","更新部长的个人信息失败，请检查并更改");
                    }
                }
            }
        }
    }
    QMessageBox::information(NULL,"操作完成","操作完成！");
}

