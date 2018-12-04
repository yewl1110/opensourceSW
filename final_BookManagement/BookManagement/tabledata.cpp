#include "tabledata.h"
#include "header.h"
#include <iostream>
#include <QMessageBox>

TableData::TableData()
{
    db=new QSqlDatabase();
    *db=QSqlDatabase::addDatabase("QMYSQL");
    db->setHostName("localhost");
    db->setDatabaseName("book_management");
    db->setUserName("root");
    db->setPassword("980809");
    bool ok=db->open();
    qDebug() << ok;
    if(!ok)
        return;

    drow();
}

void TableData::drow(){
    model=new QSqlQueryModel();
    model->setQuery("select * from b_info");

    s_model=new QSortFilterProxyModel();
    s_model->setDynamicSortFilter(true);
    s_model->setSourceModel(model);
}

void TableData::viewData(){
    drow();
}

bool TableData::insertData(B_INFO *b_info){
    QString insert="insert into b_info (title,author,publisher,created,stored,rent) values ('";
    insert+=b_info->title+"','"+b_info->author+"','"+b_info->publisher+"',";
    insert+="current_date(),"+b_info->stored+","+b_info->rent+");";

    model->setQuery(insert);
    return true;
}

bool TableData::updateData(B_INFO *b_info){
    QString update="update b_info set ";
    update+="title='"+b_info->title+"',author='"+b_info->author+"',publisher='"+b_info->publisher+"',";
    update+="created='" + b_info->created + "',stored="+b_info->stored+",rent="+b_info->rent;
    update+=" where id="+b_info->ID+";";

    model->setQuery(update);
    return true;
}

bool TableData::deleteData(B_INFO *b_info){
    QString remove="delete from b_info where id=";
    remove+=b_info->ID;

    model->setQuery(remove);
    return true;
}

void TableData::setFilter(QString str,int column){
    s_model->setFilterRegExp(QRegExp(str,Qt::CaseInsensitive,QRegExp::FixedString));
    if(column==0)
        return;
    else
        s_model->setFilterKeyColumn(column);
}

void TableData::bookRent(QString ID){
    QString update="update b_info set ";
    update+="rent=rent-1 where id =" + ID + ";";
    model->setQuery(update);
}

void TableData::reutrnBook(QString ID){
    QString update="update b_info set ";
    update+="rent=rent+1 where id="+ ID + ";";
    model->setQuery(update);
}
