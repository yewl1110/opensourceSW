#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "tabledata.h"
#include "adddialog.h"
#include "adminlogin.h"
#include "b_infostruct.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int myRow;
    B_INFO *b_info;

private:
    Ui::MainWindow *ui;
    addDialog *ad;
    adminLogin *am;
    TableData *tableData;
    void drow();
    QObject *obj;

//Menu
private slots:
    void add();
    void login();

    void update();
    void mDelete();

#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif
    void on_tableView_pressed(const QModelIndex &index);

private:
    void createActions();
    void connectMenus();

    QMenu *addMenu;
    QMenu *loginMenu;
    QAction *addAct;
    QAction *loginAct;

    QAction *updateAct;
    QAction *mDeleteAct;

    bool eventFilter(QObject *obj,QEvent *event);
    //popup menu create
};

#endif // MAINWINDOW_H
