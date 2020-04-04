/********************************************************************************
** Form generated from reading UI file 'addrecordvideocard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDVIDEOCARD_H
#define UI_ADDRECORDVIDEOCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecordvideocard
{
public:
    QTableView *tableViewdozabvideocard;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditdozabvideocard1;
    QLineEdit *lineEditdozabvideocard2;
    QLabel *label_3;
    QLineEdit *lineEditdozabvideocard3;
    QPushButton *pushButtondozabvideocard;

    void setupUi(QWidget *addrecordvideocard)
    {
        if (addrecordvideocard->objectName().isEmpty())
            addrecordvideocard->setObjectName(QString::fromUtf8("addrecordvideocard"));
        addrecordvideocard->resize(590, 318);
        tableViewdozabvideocard = new QTableView(addrecordvideocard);
        tableViewdozabvideocard->setObjectName(QString::fromUtf8("tableViewdozabvideocard"));
        tableViewdozabvideocard->setGeometry(QRect(220, 0, 371, 311));
        label = new QLabel(addrecordvideocard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 201, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(addrecordvideocard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 101, 201, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEditdozabvideocard1 = new QLineEdit(addrecordvideocard);
        lineEditdozabvideocard1->setObjectName(QString::fromUtf8("lineEditdozabvideocard1"));
        lineEditdozabvideocard1->setGeometry(QRect(10, 49, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        lineEditdozabvideocard1->setFont(font1);
        lineEditdozabvideocard2 = new QLineEdit(addrecordvideocard);
        lineEditdozabvideocard2->setObjectName(QString::fromUtf8("lineEditdozabvideocard2"));
        lineEditdozabvideocard2->setGeometry(QRect(10, 139, 201, 31));
        label_3 = new QLabel(addrecordvideocard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 190, 191, 21));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lineEditdozabvideocard3 = new QLineEdit(addrecordvideocard);
        lineEditdozabvideocard3->setObjectName(QString::fromUtf8("lineEditdozabvideocard3"));
        lineEditdozabvideocard3->setGeometry(QRect(10, 230, 201, 31));
        lineEditdozabvideocard3->setFont(font1);
        pushButtondozabvideocard = new QPushButton(addrecordvideocard);
        pushButtondozabvideocard->setObjectName(QString::fromUtf8("pushButtondozabvideocard"));
        pushButtondozabvideocard->setGeometry(QRect(10, 280, 201, 31));
        pushButtondozabvideocard->setFont(font);

        retranslateUi(addrecordvideocard);

        QMetaObject::connectSlotsByName(addrecordvideocard);
    } // setupUi

    void retranslateUi(QWidget *addrecordvideocard)
    {
        addrecordvideocard->setWindowTitle(QCoreApplication::translate("addrecordvideocard", "Form", nullptr));
        label->setText(QCoreApplication::translate("addrecordvideocard", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("addrecordvideocard", "\320\276\320\261\321\212\320\265\320\274 \320\262\320\270\320\264\320\265\320\276\320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("addrecordvideocard", "\321\206\320\265\320\275\320\260", nullptr));
        pushButtondozabvideocard->setText(QCoreApplication::translate("addrecordvideocard", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecordvideocard: public Ui_addrecordvideocard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDVIDEOCARD_H
