/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_list
{
public:
    QPushButton *listButton1;
    QPushButton *listButton2;
    QPushButton *listButton3;
    QPushButton *listButton4;
    QPushButton *listButton5;
    QPushButton *listButton6;
    QPushButton *listButton7;
    QPushButton *listButton8;
    QTableView *tableView2;

    void setupUi(QWidget *list)
    {
        if (list->objectName().isEmpty())
            list->setObjectName(QString::fromUtf8("list"));
        list->resize(817, 395);
        listButton1 = new QPushButton(list);
        listButton1->setObjectName(QString::fromUtf8("listButton1"));
        listButton1->setGeometry(QRect(9, 48, 151, 31));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        listButton1->setFont(font);
        listButton2 = new QPushButton(list);
        listButton2->setObjectName(QString::fromUtf8("listButton2"));
        listButton2->setGeometry(QRect(10, 80, 151, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        listButton2->setFont(font1);
        listButton3 = new QPushButton(list);
        listButton3->setObjectName(QString::fromUtf8("listButton3"));
        listButton3->setGeometry(QRect(10, 110, 151, 31));
        listButton3->setFont(font1);
        listButton4 = new QPushButton(list);
        listButton4->setObjectName(QString::fromUtf8("listButton4"));
        listButton4->setGeometry(QRect(10, 140, 151, 31));
        listButton4->setFont(font1);
        listButton5 = new QPushButton(list);
        listButton5->setObjectName(QString::fromUtf8("listButton5"));
        listButton5->setGeometry(QRect(10, 170, 151, 31));
        listButton5->setFont(font1);
        listButton6 = new QPushButton(list);
        listButton6->setObjectName(QString::fromUtf8("listButton6"));
        listButton6->setGeometry(QRect(10, 200, 151, 31));
        listButton6->setFont(font1);
        listButton7 = new QPushButton(list);
        listButton7->setObjectName(QString::fromUtf8("listButton7"));
        listButton7->setGeometry(QRect(10, 230, 151, 31));
        listButton7->setFont(font1);
        listButton8 = new QPushButton(list);
        listButton8->setObjectName(QString::fromUtf8("listButton8"));
        listButton8->setGeometry(QRect(10, 260, 151, 31));
        listButton8->setFont(font1);
        tableView2 = new QTableView(list);
        tableView2->setObjectName(QString::fromUtf8("tableView2"));
        tableView2->setGeometry(QRect(160, 10, 651, 381));

        retranslateUi(list);

        QMetaObject::connectSlotsByName(list);
    } // setupUi

    void retranslateUi(QWidget *list)
    {
        list->setWindowTitle(QCoreApplication::translate("list", "Form", nullptr));
        listButton1->setText(QCoreApplication::translate("list", "\321\201\320\277\320\270\321\201\320\276\320\272 \320\272\320\276\320\274\320\277\320\273\320\265\320\272\321\202\321\203\321\216\321\211\320\270\321\205", nullptr));
        listButton2->setText(QCoreApplication::translate("list", "\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        listButton3->setText(QCoreApplication::translate("list", "\320\262\320\270\320\264\320\265\320\276\320\272\320\260\321\200\321\202\320\260", nullptr));
        listButton4->setText(QCoreApplication::translate("list", "\320\274\320\260\321\202\320\265\321\200\320\270\320\275\321\201\320\272\320\260\321\217 \320\277\320\273\320\260\321\202\320\260", nullptr));
        listButton5->setText(QCoreApplication::translate("list", "\320\276\320\277\320\265\321\200\320\260\321\202\320\270\320\262\320\275\320\260\321\217 \320\277\320\260\320\274\321\217\321\202\321\214", nullptr));
        listButton6->setText(QCoreApplication::translate("list", "\320\272\320\276\321\200\320\277\321\203\321\201\320\260", nullptr));
        listButton7->setText(QCoreApplication::translate("list", "\320\261\320\273\320\276\320\272 \320\277\320\270\321\202\320\260\320\275\320\270\321\217", nullptr));
        listButton8->setText(QCoreApplication::translate("list", "SSD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class list: public Ui_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
