#ifndef RENTDATA_H
#define RENTDATA_H

#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQueryModel>
#include "rentstruct.h"
#include <QSortFilterProxyModel>

class Rentdata
{
    RENT * rent;
    QString ID;

public:
    Rentdata();
    QSqlDatabase *db;
    void getID(RENT * rent);
    RENT * returnID();
    QSqlQueryModel *model;
    QSortFilterProxyModel *s_model;
    void viewData(QString ID);
    void drow();
};

#endif // RENTDATA_H
