/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuLogin;
    QMenu *menuAdd;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1124, 742);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 50, 691, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial Narrow"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(930, 50, 121, 41));
        pushButton->setFont(font);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 120, 1041, 551));
        QFont font1;
        font1.setPointSize(12);
        tableView->setFont(font1);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 1124, 25));
        menuBar->setDefaultUp(false);
        menuLogin = new QMenu(menuBar);
        menuLogin->setObjectName(QStringLiteral("menuLogin"));
        menuLogin->setTearOffEnabled(true);
        menuLogin->setToolTipsVisible(true);
        menuAdd = new QMenu(menuBar);
        menuAdd->setObjectName(QStringLiteral("menuAdd"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLogin->menuAction());
        menuBar->addAction(menuAdd->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        menuLogin->setTitle(QApplication::translate("MainWindow", "Login", nullptr));
        menuAdd->setTitle(QApplication::translate("MainWindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
