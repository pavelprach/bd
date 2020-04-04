/********************************************************************************
** Form generated from reading UI file 'addrecordkorpus.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDKORPUS_H
#define UI_ADDRECORDKORPUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecordkorpus
{
public:
    QTableView *tableViewdozabkorpus;
    QLineEdit *lineEditdozabkorpus1;
    QLineEdit *lineEditdozabkorpus2;
    QLineEdit *lineEditdozabkorpus3;
    QPushButton *pushButtondozabkorpus;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *addrecordkorpus)
    {
        if (addrecordkorpus->objectName().isEmpty())
            addrecordkorpus->setObjectName(QString::fromUtf8("addrecordkorpus"));
        addrecordkorpus->resize(522, 329);
        tableViewdozabkorpus = new QTableView(addrecordkorpus);
        tableViewdozabkorpus->setObjectName(QString::fromUtf8("tableViewdozabkorpus"));
        tableViewdozabkorpus->setGeometry(QRect(190, 1, 331, 331));
        lineEditdozabkorpus1 = new QLineEdit(addrecordkorpus);
        lineEditdozabkorpus1->setObjectName(QString::fromUtf8("lineEditdozabkorpus1"));
        lineEditdozabkorpus1->setGeometry(QRect(10, 39, 171, 31));
        QFont font;
        font.setPointSize(12);
        lineEditdozabkorpus1->setFont(font);
        lineEditdozabkorpus2 = new QLineEdit(addrecordkorpus);
        lineEditdozabkorpus2->setObjectName(QString::fromUtf8("lineEditdozabkorpus2"));
        lineEditdozabkorpus2->setGeometry(QRect(10, 100, 171, 31));
        lineEditdozabkorpus2->setFont(font);
        lineEditdozabkorpus3 = new QLineEdit(addrecordkorpus);
        lineEditdozabkorpus3->setObjectName(QString::fromUtf8("lineEditdozabkorpus3"));
        lineEditdozabkorpus3->setGeometry(QRect(10, 160, 171, 31));
        lineEditdozabkorpus3->setFont(font);
        pushButtondozabkorpus = new QPushButton(addrecordkorpus);
        pushButtondozabkorpus->setObjectName(QString::fromUtf8("pushButtondozabkorpus"));
        pushButtondozabkorpus->setGeometry(QRect(10, 210, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtondozabkorpus->setFont(font1);
        label = new QLabel(addrecordkorpus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 21));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addrecordkorpus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 69, 171, 31));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(addrecordkorpus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 129, 161, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(addrecordkorpus);

        QMetaObject::connectSlotsByName(addrecordkorpus);
    } // setupUi

    void retranslateUi(QWidget *addrecordkorpus)
    {
        addrecordkorpus->setWindowTitle(QCoreApplication::translate("addrecordkorpus", "Form", nullptr));
        pushButtondozabkorpus->setText(QCoreApplication::translate("addrecordkorpus", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("addrecordkorpus", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addrecordkorpus", "\321\204\320\276\321\200\320\274-\321\204\320\260\320\272\321\202\320\276\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("addrecordkorpus", "\321\206\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecordkorpus: public Ui_addrecordkorpus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDKORPUS_H
