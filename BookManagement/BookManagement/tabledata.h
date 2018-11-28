#ifndef TABLEDATA_H
#define TABLEDATA_H

#include "header.h"


class TableData
{
public:
    TableData();
private:
    QSqlDatabase *db;
public:
    QSqlQueryModel *model;
    QSortFilterProxyModel *s_model;
    void drow();

};

#endif // TABLEDATA_H
