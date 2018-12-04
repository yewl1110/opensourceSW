/********************************************************************************
** Form generated from reading UI file 'rentview.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTVIEW_H
#define UI_RENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_RentView
{
public:
    QTableView *tableView;

    void setupUi(QDialog *RentView)
    {
        if (RentView->objectName().isEmpty())
            RentView->setObjectName(QStringLiteral("RentView"));
        RentView->resize(623, 448);
        tableView = new QTableView(RentView);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 40, 541, 381));

        retranslateUi(RentView);

        QMetaObject::connectSlotsByName(RentView);
    } // setupUi

    void retranslateUi(QDialog *RentView)
    {
        RentView->setWindowTitle(QApplication::translate("RentView", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RentView: public Ui_RentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTVIEW_H
