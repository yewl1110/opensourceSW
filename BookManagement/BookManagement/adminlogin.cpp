#include "adminlogin.h"
#include "ui_adminlogin.h"

adminLogin::adminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLogin)
{
    ui->setupUi(this);
    this->setWindowTitle("Sign in");
    ui->changeFrame->hide();
    ui->signinFrame->show();
}

adminLogin::~adminLogin()
{
    delete ui;
}

void adminLogin::on_pushButton_clicked()
{

    this->setWindowTitle("Change password");
    ui->changeFrame->show();
    ui->signinFrame->hide();
}
