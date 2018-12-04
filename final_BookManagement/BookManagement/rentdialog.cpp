#include "rentdialog.h"
#include "ui_RentDialog.h"
#include <QDebug>
#include <QDate>

rentDialog::rentDialog(QString ID,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rentDialog)
{
    ui->setupUi(this);
    ui->borrowedEdit->setDate(QDate::currentDate());
    ui->dateEdit_2->setDate(QDate::currentDate().addDays(7));
    rent=new RENT;
    rent->ID=ID;
}

rentDialog::~rentDialog()
{
    delete ui;
}

void rentDialog::on_pushButton_clicked()
{
    rent->name=ui->nameEdit->toPlainText();
    rent->rentdate=ui->borrowedEdit->date().toString("yyyy-MM-dd");
    rent->returndate=ui->dateEdit_2->date().toString("yyyy-MM-dd");
    this->accept();
}

RENT * rentDialog::getRent(){
    return rent;
}
