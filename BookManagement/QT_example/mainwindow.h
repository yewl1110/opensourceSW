#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QTextEdit>
#include <QPushButton>
#include <QSortFilterProxyModel>

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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;

    QTextEdit *textEdit;
public:
    QSqlQueryModel *model;
    QSortFilterProxyModel *m;

};

#endif // MAINWINDOW_H
