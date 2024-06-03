#ifndef USERFIND_H
#define USERFIND_H

#include <QDialog>

namespace Ui {
class userfind;
}

class userfind : public QDialog
{
    Q_OBJECT

public:
    explicit userfind(QWidget *parent = nullptr);
    ~userfind();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_check_clicked();

    void on_ch_clicked();

private:
    Ui::userfind *ui;
};

#endif // USERFIND_H
