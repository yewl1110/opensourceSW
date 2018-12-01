#include "adddialog.h"
#include "ui_adddialog.h"
#include <QDateEdit>

addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    this->setWindowTitle(tr("Insert"));
    ui->setupUi(this);
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{

}

void addDialog::setB_info(B_INFO *info){
    this->setWindowTitle(tr("Update"));
    this->b_info=info;
    ui->titleEdit->setText(b_info->title);
    ui->authorEdit->setText(b_info->author);
    ui->publisherEdit->setText(b_info->publisher);
    QDate date=QDate::fromString(b_info->created);
    ui->createdEdit->setDate(date);
    ui->storedEdit->setText(b_info->stored);
    ui->rendEdit->setText(b_info->rent);
}
