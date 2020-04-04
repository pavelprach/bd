/********************************************************************************
** Form generated from reading UI file 'addrecordozhy.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDOZHY_H
#define UI_ADDRECORDOZHY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecordozhy
{
public:
    QTableView *tableViewdozabozhy;
    QLabel *label;
    QLineEdit *lineEditdozabozhy1;
    QLabel *label_2;
    QLineEdit *lineEditdozabozhy2;
    QLabel *label_3;
    QLineEdit *lineEditdozabozhy3;
    QLabel *label_4;
    QLineEdit *lineEditdozabozhy4;
    QPushButton *pushButtondozabozhy;

    void setupUi(QWidget *addrecordozhy)
    {
        if (addrecordozhy->objectName().isEmpty())
            addrecordozhy->setObjectName(QString::fromUtf8("addrecordozhy"));
        addrecordozhy->resize(568, 329);
        tableViewdozabozhy = new QTableView(addrecordozhy);
        tableViewdozabozhy->setObjectName(QString::fromUtf8("tableViewdozabozhy"));
        tableViewdozabozhy->setGeometry(QRect(215, 1, 351, 321));
        label = new QLabel(addrecordozhy);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 9, 191, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        lineEditdozabozhy1 = new QLineEdit(addrecordozhy);
        lineEditdozabozhy1->setObjectName(QString::fromUtf8("lineEditdozabozhy1"));
        lineEditdozabozhy1->setGeometry(QRect(0, 40, 211, 31));
        QFont font1;
        font1.setPointSize(12);
        lineEditdozabozhy1->setFont(font1);
        label_2 = new QLabel(addrecordozhy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 201, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEditdozabozhy2 = new QLineEdit(addrecordozhy);
        lineEditdozabozhy2->setObjectName(QString::fromUtf8("lineEditdozabozhy2"));
        lineEditdozabozhy2->setGeometry(QRect(2, 110, 211, 31));
        lineEditdozabozhy2->setFont(font1);
        label_3 = new QLabel(addrecordozhy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(6, 150, 201, 21));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lineEditdozabozhy3 = new QLineEdit(addrecordozhy);
        lineEditdozabozhy3->setObjectName(QString::fromUtf8("lineEditdozabozhy3"));
        lineEditdozabozhy3->setGeometry(QRect(0, 180, 211, 31));
        lineEditdozabozhy3->setFont(font1);
        label_4 = new QLabel(addrecordozhy);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 220, 201, 31));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        lineEditdozabozhy4 = new QLineEdit(addrecordozhy);
        lineEditdozabozhy4->setObjectName(QString::fromUtf8("lineEditdozabozhy4"));
        lineEditdozabozhy4->setGeometry(QRect(0, 250, 211, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        lineEditdozabozhy4->setFont(font2);
        pushButtondozabozhy = new QPushButton(addrecordozhy);
        pushButtondozabozhy->setObjectName(QString::fromUtf8("pushButtondozabozhy"));
        pushButtondozabozhy->setGeometry(QRect(10, 290, 191, 31));
        pushButtondozabozhy->setFont(font);

        retranslateUi(addrecordozhy);

        QMetaObject::connectSlotsByName(addrecordozhy);
    } // setupUi

    void retranslateUi(QWidget *addrecordozhy)
    {
        addrecordozhy->setWindowTitle(QCoreApplication::translate("addrecordozhy", "Form", nullptr));
        label->setText(QCoreApplication::translate("addrecordozhy", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addrecordozhy", "\320\276\320\261\321\212\320\265\320\274 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("addrecordozhy", "\321\202\320\270\320\277", nullptr));
        label_4->setText(QCoreApplication::translate("addrecordozhy", "\321\206\320\265\320\275\320\260", nullptr));
        pushButtondozabozhy->setText(QCoreApplication::translate("addrecordozhy", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecordozhy: public Ui_addrecordozhy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDOZHY_H
