#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class adminLogin;
}

class adminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminLogin(QWidget *parent = nullptr);
    ~adminLogin();

private:
    Ui::adminLogin *ui;

private slots:
    void on_pushButton_clicked();
    void on_cancleButton_clicked();
};

#endif // ADMINLOGIN_H
