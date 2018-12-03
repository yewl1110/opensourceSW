#ifndef RENTDATA_H
#define RENTDATA_H

#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQueryModel>
#include "rentstruct.h"

class Rentdata
{
    RENT * rent;
    //QString *ID;
    QSqlQueryModel *sql;
public:
    Rentdata();
    QSqlDatabase db;
    void getID(RENT * rent);
    RENT * returnID();
};

#endif // RENTDATA_H
