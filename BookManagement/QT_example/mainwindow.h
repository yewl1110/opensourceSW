#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
};

#endif // MAINWINDOW_H
