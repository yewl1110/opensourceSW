#include "rentdata.h"

Rentdata::Rentdata()
{
    db=new QSqlDatabase();
    *db=QSqlDatabase::addDatabase("QMYSQL","RentList");
    db->setHostName("localhost");
    db->setDatabaseName("book_management");
    db->setUserName("root");
    db->setPassword("980809");
    if(db->open()){
        qDebug() << "rentlist open";
    }
    drow();
}

void Rentdata::getID(RENT * rent){
    this->rent=rent;
    QString insert="insert into rentlist (id,name,rentdate,returndate) ";
    insert+="values ('"+this->rent->ID + "', '" + this->rent->name + "',";
    insert+="'" + this->rent->rentdate + "','" + this->rent->returndate + "');";
    model->setQuery(insert);
}

RENT * Rentdata::returnID(){
    return this->rent;
}

void Rentdata::viewData(QString ID){
    this->ID=ID;
    model->setQuery("select * from rentlist where id=" + ID);
    drow();
}

void Rentdata::drow(){
    model=new QSqlQueryModel();
    model->setQuery("select * from rentlist where id=" + ID);

    s_model=new QSortFilterProxyModel();
    s_model->setDynamicSortFilter(true);
    s_model->setSourceModel(model);
}
