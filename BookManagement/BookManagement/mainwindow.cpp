#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabledata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableData=new TableData();
    drow();

    addDialog *ad;
    ad=new addDialog;
    ad->exec();
    //add click event to menu
    connect(ui->menuAdd,SIGNAL(clicked()),this,SLOT(add_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drow(){
    tableData->drow();

    ui->tableView->setModel(tableData->s_model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnWidth(1,300);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setSortingEnabled(true);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void MainWindow::add_clicked(){
    addDialog *ad=new addDialog;
    ad->exec();
}

void MainWindow::login_clikced(){
    //popup dialog
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    //get row number, popup menu create
}

