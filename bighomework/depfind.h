#ifndef DEPFIND_H
#define DEPFIND_H

#include <QDialog>

namespace Ui {
class depfind;
}

class depfind : public QDialog
{
    Q_OBJECT

public:
    explicit depfind(QWidget *parent = nullptr);
    ~depfind();
public slots:
    void time(void);
private slots:
    void on_pushButton_clicked();

    void on_check_clicked();

private:
    Ui::depfind *ui;
};

#endif // DEPFIND_H
