#pragma once
#ifndef USER_H
#define USER_H
#include <QDialog>

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void recsignal(QString msg);
public slots:
    void time(void);
private:
    Ui::user *ui;
};

#endif // USER_H
