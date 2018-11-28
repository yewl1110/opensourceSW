#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include "tabledata.h"
#include "adddialog.h"

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

    TableData *tableData;
    void drow();
//Menu
private slots:
    void add_clicked();
    void login_clikced();

    void on_tableView_clicked(const QModelIndex &index);

private:
    QAction clicked();

};

#endif // MAINWINDOW_H
