/********************************************************************************
** Form generated from reading UI file 'rentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTDIALOG_H
#define UI_RENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rentDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *nameEdit;
    QDateEdit *borrowedEdit;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *rentDialog)
    {
        if (rentDialog->objectName().isEmpty())
            rentDialog->setObjectName(QStringLiteral("rentDialog"));
        rentDialog->resize(430, 300);
        verticalLayoutWidget = new QWidget(rentDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 60, 132, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(14);
        verticalLayoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        nameEdit = new QTextEdit(rentDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(180, 60, 211, 41));
        QFont font1;
        font1.setPointSize(12);
        nameEdit->setFont(font1);
        borrowedEdit = new QDateEdit(rentDialog);
        borrowedEdit->setObjectName(QStringLiteral("borrowedEdit"));
        borrowedEdit->setGeometry(QRect(180, 110, 211, 41));
        QFont font2;
        font2.setPointSize(18);
        borrowedEdit->setFont(font2);
        dateEdit_2 = new QDateEdit(rentDialog);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(180, 160, 211, 41));
        dateEdit_2->setFont(font2);
        pushButton = new QPushButton(rentDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 250, 121, 31));

        retranslateUi(rentDialog);

        QMetaObject::connectSlotsByName(rentDialog);
    } // setupUi

    void retranslateUi(QDialog *rentDialog)
    {
        rentDialog->setWindowTitle(QApplication::translate("rentDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("rentDialog", "Name", nullptr));
        label_2->setText(QApplication::translate("rentDialog", "Date Borrowed", nullptr));
        label_3->setText(QApplication::translate("rentDialog", "Return date", nullptr));
        pushButton->setText(QApplication::translate("rentDialog", "Rent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rentDialog: public Ui_rentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTDIALOG_H
