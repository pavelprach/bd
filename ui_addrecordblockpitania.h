/********************************************************************************
** Form generated from reading UI file 'addrecordblockpitania.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDBLOCKPITANIA_H
#define UI_ADDRECORDBLOCKPITANIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecordblockpitania
{
public:
    QTableView *tableViewdozabblockpitania;
    QLineEdit *lineEditdozabblockpitania1;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditdozabblockpitania2;
    QLabel *label_3;
    QLineEdit *lineEditdozabblockpitania3;
    QLabel *label_4;
    QLineEdit *lineEditdozabblockpitania4;
    QPushButton *pushButtondozabblockpitania;

    void setupUi(QWidget *addrecordblockpitania)
    {
        if (addrecordblockpitania->objectName().isEmpty())
            addrecordblockpitania->setObjectName(QString::fromUtf8("addrecordblockpitania"));
        addrecordblockpitania->resize(667, 364);
        tableViewdozabblockpitania = new QTableView(addrecordblockpitania);
        tableViewdozabblockpitania->setObjectName(QString::fromUtf8("tableViewdozabblockpitania"));
        tableViewdozabblockpitania->setGeometry(QRect(235, 1, 431, 361));
        QFont font;
        font.setPointSize(12);
        tableViewdozabblockpitania->setFont(font);
        lineEditdozabblockpitania1 = new QLineEdit(addrecordblockpitania);
        lineEditdozabblockpitania1->setObjectName(QString::fromUtf8("lineEditdozabblockpitania1"));
        lineEditdozabblockpitania1->setGeometry(QRect(10, 40, 181, 31));
        lineEditdozabblockpitania1->setFont(font);
        label = new QLabel(addrecordblockpitania);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 191, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addrecordblockpitania);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 221, 20));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        lineEditdozabblockpitania2 = new QLineEdit(addrecordblockpitania);
        lineEditdozabblockpitania2->setObjectName(QString::fromUtf8("lineEditdozabblockpitania2"));
        lineEditdozabblockpitania2->setGeometry(QRect(10, 120, 181, 31));
        lineEditdozabblockpitania2->setFont(font);
        label_3 = new QLabel(addrecordblockpitania);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 181, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        lineEditdozabblockpitania3 = new QLineEdit(addrecordblockpitania);
        lineEditdozabblockpitania3->setObjectName(QString::fromUtf8("lineEditdozabblockpitania3"));
        lineEditdozabblockpitania3->setGeometry(QRect(10, 189, 181, 31));
        lineEditdozabblockpitania3->setFont(font);
        label_4 = new QLabel(addrecordblockpitania);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 220, 181, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        lineEditdozabblockpitania4 = new QLineEdit(addrecordblockpitania);
        lineEditdozabblockpitania4->setObjectName(QString::fromUtf8("lineEditdozabblockpitania4"));
        lineEditdozabblockpitania4->setGeometry(QRect(10, 250, 181, 31));
        lineEditdozabblockpitania4->setFont(font);
        pushButtondozabblockpitania = new QPushButton(addrecordblockpitania);
        pushButtondozabblockpitania->setObjectName(QString::fromUtf8("pushButtondozabblockpitania"));
        pushButtondozabblockpitania->setGeometry(QRect(10, 290, 181, 31));
        pushButtondozabblockpitania->setFont(font1);

        retranslateUi(addrecordblockpitania);

        QMetaObject::connectSlotsByName(addrecordblockpitania);
    } // setupUi

    void retranslateUi(QWidget *addrecordblockpitania)
    {
        addrecordblockpitania->setWindowTitle(QCoreApplication::translate("addrecordblockpitania", "Form", nullptr));
        label->setText(QCoreApplication::translate("addrecordblockpitania", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addrecordblockpitania", "\320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\274\320\276\321\211\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("addrecordblockpitania", "\321\202\320\270\320\277 \320\221\320\237", nullptr));
        label_4->setText(QCoreApplication::translate("addrecordblockpitania", "\321\206\320\265\320\275\320\260", nullptr));
        pushButtondozabblockpitania->setText(QCoreApplication::translate("addrecordblockpitania", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecordblockpitania: public Ui_addrecordblockpitania {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDBLOCKPITANIA_H
