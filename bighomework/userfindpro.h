#ifndef USERFINDPRO_H
#define USERFINDPRO_H

#include <QDialog>

namespace Ui {
class userfindpro;
}

class userfindpro : public QDialog
{
    Q_OBJECT

public:
    explicit userfindpro(QWidget *parent = nullptr);
    ~userfindpro();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_check_clicked();

private:
    Ui::userfindpro *ui;
};

#endif // USERFINDPRO_H
