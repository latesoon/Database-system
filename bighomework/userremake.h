#ifndef USERREMAKE_H
#define USERREMAKE_H

#include <QDialog>

namespace Ui {
class userremake;
}

class userremake : public QDialog
{
    Q_OBJECT

public:
    explicit userremake(QWidget *parent = nullptr);
    ~userremake();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_dl_clicked();

    void on_xg_clicked();

private:
    Ui::userremake *ui;
};

#endif // USERREMAKE_H
