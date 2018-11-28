#include "tabledata.h"
#include "header.h"

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
