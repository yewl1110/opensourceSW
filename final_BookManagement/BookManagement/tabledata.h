#ifndef TABLEDATA_H
#define TABLEDATA_H

#include "header.h"
#include "b_infostruct.h"

class TableData
{
public:
    TableData();
    QSqlQueryModel *model;
    QSortFilterProxyModel *s_model;
    void drow();

private:
    QSqlDatabase *db;

    //manage data
    void viewData();
    bool insertData(B_INFO b_info);
    bool updateData(B_INFO b_info);
    bool deleteData(B_INFO b_info);
};

#endif // TABLEDATA_H
