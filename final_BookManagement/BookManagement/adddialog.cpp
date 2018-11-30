#include "adddialog.h"
#include "ui_adddialog.h"

addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    this->setWindowTitle("Insert");
    ui->setupUi(this);
}

addDialog::addDialog(const QString *str,B_INFO info){

    ui->setupUi(this);
    this->setWindowTitle("Update");
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{

}
