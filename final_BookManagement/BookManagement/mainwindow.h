#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "tabledata.h"
#include "adddialog.h"
#include "adminlogin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    addDialog *ad;
    adminLogin *am;
    TableData *tableData;
    void drow();

//Menu
private slots:
    void add();
    void login();

    void on_tableView_clicked(const QModelIndex &index);

private:
    void createActions();
    void connectMenus();

    QMenu *addMenu;
    QMenu *loginMenu;
    QAction *addAct;
    QAction *loginAct;
};

#endif // MAINWINDOW_H
