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
    B_INFO b_info;
    explicit addDialog(QWidget *parent = nullptr);
    addDialog(const QString *str,B_INFO b_info);
    ~addDialog();

private:
    Ui::addDialog *ui;

private slots:
    void on_pushButton_clicked();

};

#endif // ADDDIALOG_H
