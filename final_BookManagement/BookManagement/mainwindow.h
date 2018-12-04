#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "tabledata.h"
#include "adddialog.h"
#include "adminlogin.h"
#include "b_infostruct.h"
#include "rentdialog.h"
#include "rentdata.h"
#include "rentstruct.h"
#include "rentview.h"


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
    RENT * mRent;
private:
    Ui::MainWindow *ui;
    addDialog *ad;
    adminLogin *am;
    TableData *tableData;
    void drow();
    QObject *obj;
    Rentdata *rentData;
    RentView *rentview;

//Menu
private slots:
    void rent();
    void add();
    void login();

    void update();
    void mDelete();

#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QContextMenuEvent *event) override;
#endif
    void on_tableView_pressed(const QModelIndex &index);
    void on_pushButton_clicked();
    void on_textEdit_textChanged();
    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    void createActions();
    void connectMenus();

    QMenu *addMenu;
    QMenu *loginMenu;

    QAction *rentAct;
    QAction *addAct;
    QAction *loginAct;

    QAction *updateAct;
    QAction *mDeleteAct;

    bool eventFilter(QObject *obj,QEvent *event);
    //popup menu create
};

#endif // MAINWINDOW_H
