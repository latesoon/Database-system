#ifndef USERADD_H
#define USERADD_H

#include <QDialog>

namespace Ui {
class useradd;
}

class useradd : public QDialog
{
    Q_OBJECT

public:
    explicit useradd(QWidget *parent = nullptr);
    ~useradd();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_qd_clicked();

private:
    Ui::useradd *ui;
};

#endif // USERADD_H
