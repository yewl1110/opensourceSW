#include "rentview.h"
#include "ui_rentview.h"
#include "rentdata.h"
#include <QMenu>
#include <QMouseEvent>
#include <QSortFilterProxyModel>

RentView::RentView(QSortFilterProxyModel * model,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RentView)
{
    this->model=model;
    ui->setupUi(this);
    returnAct=new QAction("&Return",this);
    connect(returnAct,&QAction::triggered,this,&RentView::returnBook);
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setSortingEnabled(true);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);

    ui->tableView->setMouseTracking(true);
    ui->tableView->viewport()->setMouseTracking(true);
    ui->tableView->installEventFilter(this);
    ui->tableView->viewport()->installEventFilter(this);
}

RentView::~RentView()
{
    delete ui;
}

void RentView::contextMenuEvent(QContextMenuEvent *event){
    if(this->obj==ui->tableView->viewport()){
        QMenu menu;
        menu.addAction(returnAct);
        menu.addSeparator();
        menu.exec(event->globalPos());
        obj=nullptr;
    }
}

bool RentView::eventFilter(QObject *obj,QEvent *event){
    if(obj==ui->tableView->viewport()){
        if(event->type()==QEvent::MouseButtonPress)
            this->obj=obj;
    }
    return QDialog::eventFilter(obj,event);
}

void RentView::returnBook(){

}

void RentView::drow(){
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setSortingEnabled(true);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
}

bool event(QEvent *e);
