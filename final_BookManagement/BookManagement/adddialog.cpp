#include "adddialog.h"
#include "ui_adddialog.h"
#include <QDateEdit>
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>

addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);
    ui->updateButton->hide();
    this->setWindowTitle("Add");
}

addDialog::~addDialog()
{
    delete ui;
}


B_INFO * addDialog::returnInfo(){
    return this->return_info;
}

void addDialog::setB_info(B_INFO *info){
    ui->insertButton->hide();
    this->setWindowTitle(tr("Update"));
    ui->updateButton->show();
    this->b_info=info;
    ui->titleEdit->setText(b_info->title);
    ui->authorEdit->setText(b_info->author);
    ui->publisherEdit->setText(b_info->publisher);
    b_info->created.chop(13);
    ui->createdEdit->setDate(QDate::fromString(b_info->created,"yyyy-MM-dd"));
    ui->storedEdit->setText(b_info->stored);
    ui->rendEdit->setText(b_info->rent);
}

void addDialog::on_updateButton_clicked()
{
    if(checkData(b_info)){
        getInfo();
        this->return_info->ID=b_info->ID;
        this->accept();
    }
}

void addDialog::getInfo(){
    return_info=new B_INFO;
    return_info->title=ui->titleEdit->toPlainText();
    return_info->author=ui->authorEdit->toPlainText();
    return_info->publisher=ui->publisherEdit->toPlainText();
    return_info->created=ui->createdEdit->date().toString("yyyy-MM-dd");
    return_info->stored=ui->storedEdit->toPlainText();
    return_info->rent=ui->rendEdit->toPlainText();
}

void addDialog::on_insertButton_clicked()
{
    if(checkData(b_info)){
       getInfo();
       this->accept();
    }
}

bool addDialog::checkData(B_INFO * b_info){
    if(ui->titleEdit->toPlainText().length()>100){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","Exceed the length of 'Title'");
        return false;
    }
    else if(ui->titleEdit->toPlainText().isEmpty()){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","Title is null");
        return false;
    }
    else if(ui->authorEdit->toPlainText().length()>30){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","Exceed the length of 'Author'");
        return false;
    }
    else if(ui->authorEdit->toPlainText().isEmpty()){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","author is null");
        return false;
    }
    else if(ui->storedEdit->toPlainText().isEmpty()){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","Stored is null");
        return false;
    }
    else if(ui->storedEdit->toPlainText().toInt()<ui->rendEdit->toPlainText().toInt()){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","Rent can not be greater than Stored");
        return false;
    }
    else
        return true;
}

