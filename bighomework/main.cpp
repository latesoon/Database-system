#include "login.h"
#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("myodbc");
    db.setUserName("root");
    db.setPassword("1433223aaa");
    bool ok = db.open();
    if(ok){
        w.show();
    }
    else{
        QMessageBox::information(NULL,"失败","数据库连接失败！");
        qDebug()<<"error open database because"<<db.lastError().text();
    }
    return a.exec();
}
