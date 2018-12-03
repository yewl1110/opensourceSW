#include "rentdata.h"

Rentdata::Rentdata()
{
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("rentlist");
    db.setUserName("root");
    db.setPassword("980809");
    if(db.open()){
        qDebug() << "rentlist open";
    }
    sql=new QSqlQueryModel();
}

void Rentdata::getID(RENT * rent){
    this->rent=rent;
    QString insert="insert into rentlist (id,name,rentdate,reutrndate) ";
    insert+="values ('"+this->rent->ID + "', '" + this->rent->name + "',";
    insert+="'" + this->rent->rentdate + "','" + this->rent->returndate + "');";
    sql->setQuery(insert);
}

RENT * Rentdata::returnID(){
    return this->rent;
}
