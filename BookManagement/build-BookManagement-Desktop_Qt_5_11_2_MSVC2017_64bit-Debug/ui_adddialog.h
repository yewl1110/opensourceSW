/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

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

class Ui_addDialog
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *titleEdit;
    QTextEdit *authorEdit;
    QTextEdit *publisherEdit;
    QDateEdit *createdEdit;
    QTextEdit *storedEdit;
    QTextEdit *rendEdit;
    QPushButton *insertButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QPushButton *updateButton;

    void setupUi(QDialog *addDialog)
    {
        if (addDialog->objectName().isEmpty())
            addDialog->setObjectName(QStringLiteral("addDialog"));
        addDialog->resize(521, 413);
        verticalLayoutWidget_2 = new QWidget(addDialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(140, 90, 331, 231));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        verticalLayoutWidget_2->setFont(font);
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleEdit = new QTextEdit(verticalLayoutWidget_2);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(12);
        titleEdit->setFont(font1);

        verticalLayout_3->addWidget(titleEdit);

        authorEdit = new QTextEdit(verticalLayoutWidget_2);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));
        authorEdit->setFont(font1);

        verticalLayout_3->addWidget(authorEdit);

        publisherEdit = new QTextEdit(verticalLayoutWidget_2);
        publisherEdit->setObjectName(QStringLiteral("publisherEdit"));
        publisherEdit->setFont(font1);

        verticalLayout_3->addWidget(publisherEdit);

        createdEdit = new QDateEdit(verticalLayoutWidget_2);
        createdEdit->setObjectName(QStringLiteral("createdEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font2.setPointSize(14);
        createdEdit->setFont(font2);

        verticalLayout_3->addWidget(createdEdit);

        storedEdit = new QTextEdit(verticalLayoutWidget_2);
        storedEdit->setObjectName(QStringLiteral("storedEdit"));
        storedEdit->setFont(font1);

        verticalLayout_3->addWidget(storedEdit);

        rendEdit = new QTextEdit(verticalLayoutWidget_2);
        rendEdit->setObjectName(QStringLiteral("rendEdit"));
        rendEdit->setFont(font1);

        verticalLayout_3->addWidget(rendEdit);

        insertButton = new QPushButton(addDialog);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(180, 350, 151, 31));
        insertButton->setFont(font1);
        verticalLayoutWidget = new QWidget(addDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 90, 101, 231));
        verticalLayoutWidget->setFont(font2);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        font3.setKerning(false);
        label->setFont(font3);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font4.setPointSize(14);
        font4.setItalic(false);
        font4.setUnderline(true);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        label_3->setFont(font4);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font4);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        updateButton = new QPushButton(addDialog);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(180, 350, 151, 31));
        updateButton->setFont(font1);

        retranslateUi(addDialog);

        QMetaObject::connectSlotsByName(addDialog);
    } // setupUi

    void retranslateUi(QDialog *addDialog)
    {
        addDialog->setWindowTitle(QApplication::translate("addDialog", "Dialog", nullptr));
        insertButton->setText(QApplication::translate("addDialog", "Insert to table", nullptr));
        label->setText(QApplication::translate("addDialog", "Title", nullptr));
        label_3->setText(QApplication::translate("addDialog", "Author", nullptr));
        label_4->setText(QApplication::translate("addDialog", "Publisher", nullptr));
        label_5->setText(QApplication::translate("addDialog", "Created", nullptr));
        label_6->setText(QApplication::translate("addDialog", "Stored", nullptr));
        label_2->setText(QApplication::translate("addDialog", "Rent", nullptr));
        updateButton->setText(QApplication::translate("addDialog", "Update to table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDialog: public Ui_addDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
