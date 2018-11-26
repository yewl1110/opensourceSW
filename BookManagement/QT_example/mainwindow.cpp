#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSortFilterProxyModel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db=QSqlDatabase::addDatabase("QMYSQL");  //database connection
    db.setHostName("localhost");
    db.setDatabaseName("book_management");
    db.setUserName("root");
    db.setPassword("980809");
    qDebug() << db.open();


    model=new QSqlQueryModel();    //database teblemodel object
    model->setQuery("select * from b_info");

    QSortFilterProxyModel *m=new QSortFilterProxyModel(this);  //sort tablemodel object
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
    model->sort(index.column());
}
