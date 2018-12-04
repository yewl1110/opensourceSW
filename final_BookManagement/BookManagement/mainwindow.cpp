#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabledata.h"
#include "adminlogin.h"
#include <QDir>
#include "rentdata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << QDir::currentPath();
    ui->pushButton->setIcon(QIcon(QDir::currentPath()));
    ui->pushButton->setIconSize(QSize(20,20));
    ui->pushButton->setFlat(true);

    QApplication::setAttribute(Qt::AA_DisableWindowContextHelpButton);
    b_info=new B_INFO;

    tableData=new TableData();
    drow();
    rentData=new Rentdata();

    //function of createActions() add to menuBar
    createActions();
    connectMenus();

    //combobox initiolize
    ui->comboBox->setEditable(true);
    ui->comboBox->lineEdit()->setReadOnly(true);
    ui->comboBox->lineEdit()->setAlignment(Qt::AlignCenter);

    ui->tableView->setMouseTracking(true);
    ui->tableView->viewport()->setMouseTracking(true);
    ui->tableView->installEventFilter(this);
    ui->tableView->viewport()->installEventFilter(this);
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


void MainWindow::createActions(){

    addAct=new QAction(tr("&Add"),this);
    connect(addAct,&QAction::triggered, this,&MainWindow::add);
    loginAct=new QAction(tr("&Login"),this);
    connect(loginAct,&QAction::triggered,this,&MainWindow::login);

    //popupmenu
    rentAct=new QAction(tr("&Rent"),this);
    connect(rentAct,&QAction::triggered,this,&MainWindow::rent);
    updateAct=new QAction(tr("&Update"),this);
    mDeleteAct=new QAction(tr("&Delete"),this);
    connect(updateAct,&QAction::triggered,this,&MainWindow::update);
    connect(mDeleteAct,&QAction::triggered,this,&MainWindow::mDelete);
    }

void MainWindow::connectMenus(){
    ui->menuBar->addAction(loginAct);
    ui->menuBar->addAction(addAct);
    ui->menuBar->setNativeMenuBar(true);
}

void MainWindow::add(){

    ad=new addDialog;
    if (ad->exec()==QDialog::Accepted){
        b_info=ad->returnInfo();
        tableData->insertData(b_info);

    drow();
    delete ad;
    }
}

void MainWindow::rent(){
    b_info->ID=tableData->s_model->index(b_info->row,0).data().toString();
    b_info->stored=tableData->model->index(b_info->row,5).data().toString();
    b_info->rent=tableData->model->index(b_info->row,6).data().toString();

    if(b_info->stored.toInt()<=b_info->rent.toInt()||0>=b_info->stored.toInt()){
        QMessageBox::StandardButton msg;
        msg=QMessageBox::critical(this,"","");
        return;
    }

    rentDialog *r=new rentDialog(b_info->ID);
    if(r->exec()==r->Accepted){
        mRent=r->getRent();
        rentData->getID(mRent);
        tableData->bookRent(mRent->ID);
        delete r;
    }
    drow();
}

void MainWindow::login(){
    am=new adminLogin();
    qDebug() << am->exec();
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event){
    if(this->obj==ui->tableView->viewport()){
        QMenu menu;
        menu.addAction(rentAct);
        menu.addSeparator();
        menu.addAction(updateAct);
        menu.addAction(mDeleteAct);
        menu.exec(event->globalPos());
        obj=nullptr;
    }
}

void MainWindow::update(){
    b_info->ID=tableData->model->index(b_info->row,0).data().toString();
    b_info->title=tableData->model->index(b_info->row,1).data().toString();
    b_info->author=tableData->model->index(b_info->row,2).data().toString();
    b_info->publisher=tableData->model->index(b_info->row,3).data().toString();
    b_info->created=tableData->model->index(b_info->row,4).data().toString();
    b_info->stored=tableData->model->index(b_info->row,5).data().toString();
    b_info->rent=tableData->model->index(b_info->row,6).data().toString();

    ad=new addDialog;
    ad->setB_info(b_info);
    if (ad->exec()==QDialog::Accepted){ //object
        b_info=ad->returnInfo();
        tableData->updateData(b_info);
    }
    drow();
    delete ad;
}

void MainWindow::mDelete(){
    QMessageBox::StandardButton msg;
    msg=QMessageBox::question(this,"check","Are you sure you want to delete?",QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
    if(msg==QMessageBox::Yes){
        b_info->ID=tableData->model->index(b_info->row,0).data().toString();
        tableData->deleteData(b_info);
    }
    drow();
}

bool MainWindow::eventFilter(QObject *obj,QEvent *event){
    if(obj==ui->tableView){
        if(event->type()==QEvent::MouseButtonPress){
        }
    }
    else if(obj==ui->tableView->viewport()){
        if(event->type()==QEvent::MouseButtonPress){
            this->obj=obj;
        }
    }
    return QMainWindow::eventFilter(obj,event);
}

void MainWindow::on_tableView_pressed(const QModelIndex &index)
{
    b_info->row = tableData->s_model->mapToSource(ui->tableView->currentIndex()).row();
    b_info->ID=ui->tableView->model()->index(b_info->row,0).data().toString();
    qDebug() << "on_tableView_pressed .." << b_info->ID;
}

void MainWindow::on_pushButton_clicked()
{
    enum {title=1,author=2,publisher=3};
    tableData->setFilter(ui->textEdit->toPlainText(),ui->comboBox->currentIndex());

}

void MainWindow::on_textEdit_textChanged()
{
    qDebug() << ui->textEdit->toPlainText();
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    b_info->row = tableData->s_model->mapToSource(ui->tableView->currentIndex()).row();
    b_info->ID=ui->tableView->model()->index(b_info->row,0).data().toString();
    qDebug() << b_info->ID;

    rentData->viewData(b_info->ID);
    rentview=new RentView(rentData->s_model);
    rentview->exec();
    delete rentview;
}
