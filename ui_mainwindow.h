/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *actionSSD;
    QAction *action_4;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 346);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/test/img/35863.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/test/img/cad88c50b159700240d99c4ea43225eb.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/test/img/1436706.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon2);
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        actionSSD = new QAction(MainWindow);
        actionSSD->setObjectName(QString::fromUtf8("actionSSD"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 760, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(action_5);
        menu_2->addAction(action_6);
        menu_2->addAction(action_7);
        menu_2->addAction(action_8);
        menu_2->addAction(action_9);
        menu_2->addAction(action_10);
        menu_2->addAction(actionSSD);
        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \321\201 \320\221\320\224", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\262\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\274\320\260\321\202\320\265\321\200\320\270\320\275\321\201\320\272\320\260\321\217 \320\277\320\273\320\260\321\202\320\260", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\321\200\320\277\321\203\321\201\320\260", nullptr));
        action_10->setText(QCoreApplication::translate("MainWindow", "\320\261\320\273\320\276\320\272 \320\277\320\270\321\202\320\260\320\275\320\270\321\217", nullptr));
        actionSSD->setText(QCoreApplication::translate("MainWindow", "SSD", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\274\320\265\320\275\321\216", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
