#include "adddialog.h"
#include "ui_adddialog.h"
#include <QDateEdit>
#include <QDateTime>


addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Add");
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{

    b_info=new B_INFO;
    b_info->title=ui->titleEdit->toPlainText();
    b_info->author=ui->authorEdit->toPlainText();
    b_info->publisher=ui->publisherEdit->toPlainText();
   // QDateTime a;
   // a.setDate(ui->createdEdit->date());
   // ui->authorEdit->setText(a.toString());
    b_info->stored=ui->storedEdit->toPlainText();
    b_info->rent=ui->rendEdit->toPlainText();
    returnInfo();
    this->accept();
}

B_INFO * addDialog::returnInfo(){
    return b_info;
}

void addDialog::setB_info(B_INFO *info){
    this->setWindowTitle(tr("Update"));
    this->b_info=info;
    //ui->
    ui->titleEdit->setText(b_info->title);
    ui->authorEdit->setText(b_info->author);
    ui->publisherEdit->setText(b_info->publisher);
    QDate date=QDate::fromString(b_info->created);
    ui->createdEdit->setDate(date);
    ui->storedEdit->setText(b_info->stored);
    ui->rendEdit->setText(b_info->rent);
}
