/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminLogin
{
public:
    QFrame *signinFrame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *IDEdit;
    QTextEdit *PWEdit;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QFrame *changeFrame;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *oldEdit;
    QTextEdit *newEdit;
    QTextEdit *checkEdit;
    QPushButton *changeButton;
    QPushButton *cancleButton;

    void setupUi(QDialog *adminLogin)
    {
        if (adminLogin->objectName().isEmpty())
            adminLogin->setObjectName(QStringLiteral("adminLogin"));
        adminLogin->resize(400, 300);
        signinFrame = new QFrame(adminLogin);
        signinFrame->setObjectName(QStringLiteral("signinFrame"));
        signinFrame->setGeometry(QRect(40, 50, 311, 221));
        signinFrame->setFrameShape(QFrame::StyledPanel);
        signinFrame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(signinFrame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 86, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font.setPointSize(14);
        verticalLayoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(signinFrame);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(120, 30, 160, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\353\247\221\354\235\200 \352\263\240\353\224\225"));
        font1.setPointSize(12);
        verticalLayoutWidget_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        IDEdit = new QTextEdit(verticalLayoutWidget_2);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));
        IDEdit->setFont(font1);

        verticalLayout_2->addWidget(IDEdit);

        PWEdit = new QTextEdit(verticalLayoutWidget_2);
        PWEdit->setObjectName(QStringLiteral("PWEdit"));
        PWEdit->setFont(font1);

        verticalLayout_2->addWidget(PWEdit);

        loginButton = new QPushButton(signinFrame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(10, 180, 131, 41));
        QFont font2;
        font2.setPointSize(12);
        loginButton->setFont(font2);
        pushButton = new QPushButton(signinFrame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 180, 121, 41));
        QFont font3;
        font3.setPointSize(9);
        pushButton->setFont(font3);
        changeFrame = new QFrame(adminLogin);
        changeFrame->setObjectName(QStringLiteral("changeFrame"));
        changeFrame->setGeometry(QRect(30, 10, 341, 271));
        changeFrame->setFrameShape(QFrame::StyledPanel);
        changeFrame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_3 = new QWidget(changeFrame);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 50, 128, 141));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        verticalLayoutWidget_4 = new QWidget(changeFrame);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(130, 50, 191, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        oldEdit = new QTextEdit(verticalLayoutWidget_4);
        oldEdit->setObjectName(QStringLiteral("oldEdit"));
        oldEdit->setFont(font1);

        verticalLayout_4->addWidget(oldEdit);

        newEdit = new QTextEdit(verticalLayoutWidget_4);
        newEdit->setObjectName(QStringLiteral("newEdit"));
        newEdit->setFont(font1);

        verticalLayout_4->addWidget(newEdit);

        checkEdit = new QTextEdit(verticalLayoutWidget_4);
        checkEdit->setObjectName(QStringLiteral("checkEdit"));
        checkEdit->setFont(font1);

        verticalLayout_4->addWidget(checkEdit);

        changeButton = new QPushButton(changeFrame);
        changeButton->setObjectName(QStringLiteral("changeButton"));
        changeButton->setGeometry(QRect(20, 220, 131, 41));
        changeButton->setFont(font2);
        cancleButton = new QPushButton(changeFrame);
        cancleButton->setObjectName(QStringLiteral("cancleButton"));
        cancleButton->setGeometry(QRect(180, 220, 121, 41));
        cancleButton->setFont(font2);

        retranslateUi(adminLogin);

        QMetaObject::connectSlotsByName(adminLogin);
    } // setupUi

    void retranslateUi(QDialog *adminLogin)
    {
        adminLogin->setWindowTitle(QApplication::translate("adminLogin", "Sign in", nullptr));
        label_2->setText(QApplication::translate("adminLogin", "ID", nullptr));
        label->setText(QApplication::translate("adminLogin", "Password", nullptr));
        loginButton->setText(QApplication::translate("adminLogin", "Sign in", nullptr));
        pushButton->setText(QApplication::translate("adminLogin", "Change password", nullptr));
        label_3->setText(QApplication::translate("adminLogin", "Old Password", nullptr));
        label_4->setText(QApplication::translate("adminLogin", "New Password", nullptr));
        label_5->setText(QApplication::translate("adminLogin", "Check", nullptr));
        changeButton->setText(QApplication::translate("adminLogin", "Change", nullptr));
        cancleButton->setText(QApplication::translate("adminLogin", "Cancle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminLogin: public Ui_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
