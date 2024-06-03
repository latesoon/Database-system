#ifndef DEPOP_H
#define DEPOP_H

#include <QDialog>

namespace Ui {
class depop;
}

class depop : public QDialog
{
    Q_OBJECT

public:
    explicit depop(QWidget *parent = nullptr);
    ~depop();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_sm_clicked();

    void on_sc_clicked();

    void on_xg_clicked();

private:
    Ui::depop *ui;
};

#endif // DEPOP_H
