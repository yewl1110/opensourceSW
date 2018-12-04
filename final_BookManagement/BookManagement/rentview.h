#ifndef RENTVIEW_H
#define RENTVIEW_H

#include <QDialog>
#include "rentdata.h"

namespace Ui {
class RentView;
}

class RentView : public QDialog
{
    Q_OBJECT

public:
    explicit RentView(QSortFilterProxyModel * model,QWidget *parent = nullptr);
    ~RentView();
    void drow();
    QSortFilterProxyModel * model;
    //void setModel(QSortFilterProxyModel * model);

private:
    Ui::RentView *ui;
    void contextMenuEvent(QContextMenuEvent *event);
    bool eventFilter(QObject *obj,QEvent *event);
    QObject *obj;

    QAction *returnAct;
private slots:
    void returnBook();
};

#endif // RENTVIEW_H
