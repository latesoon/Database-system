#ifndef LOGIN_H
#define LOGIN_H

#include <QtWidgets>
#include <QMainWindow>
#include "admin.h"
#include "qsqldatabase.h"
#include "user.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
signals:
    void sendsignal(QString msg);
private slots:
    void on_log_clicked();

    void on_help_clicked();

private:
    Ui::login *ui;
    admin* ad=new admin;
    user* us=new user;
};
#endif // LOGIN_H
