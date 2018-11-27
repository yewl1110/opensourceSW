#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    textEdit=new QTextEdit();
    ui->textEdit->setText("search");

    db=QSqlDatabase::addDatabase("QMYSQL");  //database connection
    db.setHostName("localhost");
    db.setDatabaseName("book_management");
    db.setUserName("root");
    db.setPassword("980809");
    qDebug() << db.open();


    model=new QSqlQueryModel();    //database teblemodel object
    model->setQuery("select * from b_info");

    m=new QSortFilterProxyModel(this);  //sort tablemodel object
    m->setDynamicSortFilter(true);
    m->setSourceModel(model);

    ui->tableView->setModel(m);   //tablewidget setting
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setSortingEnabled(true);

    ui->tableView->verticalHeader()->hide();  //fixed size
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QString str= QString::number(model->rowCount());
    ui->textEdit->setText(str);
}

void MainWindow::on_pushButton_2_clicked()
{
  //  model->setQuery("insert into b_info values (") ; //data insert
}

void MainWindow::on_pushButton_3_clicked()
{
    if(model->rowCount()<=0){
        QMessageBox *err=new QMessageBox();
        err->setText("Data isn't exist!!");
        err->setStandardButtons(QMessageBox::Yes);
        err->show();
        return;
    }

    model->setQuery("delete from b_info where id = 1");  //data delete
    model->setQuery("select * from b_info");
    m->setSourceModel(model);
    ui->tableView->setModel(m);
}
