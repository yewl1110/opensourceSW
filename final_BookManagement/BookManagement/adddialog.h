#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QString>
#include "b_infostruct.h"

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    B_INFO *b_info;
    B_INFO *return_info;
    explicit addDialog(QWidget *parent = nullptr);
    ~addDialog();
    void setB_info(B_INFO *b_info);
    B_INFO * returnInfo();

private:
    Ui::addDialog *ui;
    void getInfo();
    bool checkData(B_INFO * b_info);

private slots:
    void on_updateButton_clicked();
    void on_insertButton_clicked();
};

#endif // ADDDIALOG_H
