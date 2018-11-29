#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabledata.h"
#include <QAction>
#include "adminlogin.h"
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableData=new TableData();
    drow();

    createActions();
    connectMenus();  //function of createActions() add to menuBar
    ui->comboBox->setEditable(true);
    ui->comboBox->lineEdit()->setReadOnly(true);
    ui->comboBox->lineEdit()->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drow(){
    tableData->drow();

    ui->tableView->setModel(tableData->s_model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnWidth(1,350);
    ui->tableView->setColumnWidth(2,200);
    ui->tableView->setColumnWidth(3,200);
    ui->tableView->setColumnWidth(4,120);
    ui->tableView->setColumnWidth(5,70);
    ui->tableView->setColumnWidth(6,70);
    ui->tableView->setSortingEnabled(true);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    //get row number
    myRow = tableData->s_model->mapToSource(ui->tableView->currentIndex()).row();
    ui->tableView->setColumnHidden(0,false);
    ID=ui->tableView->model()->data(ui->tableView->model()->index(myRow,0)).toString();
    ui->tableView->setColumnHidden(0,true);

}

void MainWindow::createActions(){
    addAct=new QAction(tr("&Add"),this);
    connect(addAct,&QAction::triggered, this,&MainWindow::add);

    loginAct=new QAction(tr("&Login"),this);
    connect(loginAct,&QAction::triggered,this,&MainWindow::login);
}

void MainWindow::connectMenus(){
    ui->menuBar->addAction(loginAct);
    ui->menuBar->addAction(addAct);
    ui->menuBar->setNativeMenuBar(true);
}

void MainWindow::add(){
    ad=new addDialog;
    ad->exec();
}

void MainWindow::login(){
    am=new adminLogin();
    am->exec();
}
