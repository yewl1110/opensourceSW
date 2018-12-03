#ifndef RENTDIALOG_H
#define RENTDIALOG_H

#include <QDialog>
#include "rentstruct.h"

namespace Ui {
class rentDialog;
}

class rentDialog : public QDialog
{
    Q_OBJECT
    RENT * rent;
    QString ID;
public:
    explicit rentDialog(QString ID,QWidget *parent = nullptr);
    RENT * getRent();
    ~rentDialog();
private slots:
    void on_pushButton_clicked();

private:
    Ui::rentDialog *ui;
};

#endif // RENTDIALOG_H
