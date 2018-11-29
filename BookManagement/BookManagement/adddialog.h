#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent = nullptr);
    ~addDialog();
    Ui::addDialog *ui;
private slots:
    void on_pushButton_clicked();

};

#endif // ADDDIALOG_H
