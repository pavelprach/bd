/********************************************************************************
** Form generated from reading UI file 'addrecordprocessor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDPROCESSOR_H
#define UI_ADDRECORDPROCESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addrecordprocessor
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEditdobzabprocessor4;
    QLabel *label_2;
    QTableView *tableViewdozabprocessor;
    QLabel *label_4;
    QLineEdit *lineEditdobzabprocessor2;
    QLineEdit *lineEditdobzabprocessor3;
    QLineEdit *lineEditdobzabprocessor1;
    QPushButton *pushButtondobzabprocessor;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEditdobzabprocessor5;
    QLabel *label_5;

    void setupUi(QWidget *addrecordprocessor)
    {
        if (addrecordprocessor->objectName().isEmpty())
            addrecordprocessor->setObjectName(QString::fromUtf8("addrecordprocessor"));
        addrecordprocessor->resize(675, 331);
        gridLayout = new QGridLayout(addrecordprocessor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditdobzabprocessor4 = new QLineEdit(addrecordprocessor);
        lineEditdobzabprocessor4->setObjectName(QString::fromUtf8("lineEditdobzabprocessor4"));
        QFont font;
        font.setPointSize(12);
        lineEditdobzabprocessor4->setFont(font);

        gridLayout->addWidget(lineEditdobzabprocessor4, 7, 0, 1, 1);

        label_2 = new QLabel(addrecordprocessor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        tableViewdozabprocessor = new QTableView(addrecordprocessor);
        tableViewdozabprocessor->setObjectName(QString::fromUtf8("tableViewdozabprocessor"));

        gridLayout->addWidget(tableViewdozabprocessor, 0, 1, 11, 1);

        label_4 = new QLabel(addrecordprocessor);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        lineEditdobzabprocessor2 = new QLineEdit(addrecordprocessor);
        lineEditdobzabprocessor2->setObjectName(QString::fromUtf8("lineEditdobzabprocessor2"));
        lineEditdobzabprocessor2->setFont(font);

        gridLayout->addWidget(lineEditdobzabprocessor2, 3, 0, 1, 1);

        lineEditdobzabprocessor3 = new QLineEdit(addrecordprocessor);
        lineEditdobzabprocessor3->setObjectName(QString::fromUtf8("lineEditdobzabprocessor3"));
        lineEditdobzabprocessor3->setFont(font);

        gridLayout->addWidget(lineEditdobzabprocessor3, 5, 0, 1, 1);

        lineEditdobzabprocessor1 = new QLineEdit(addrecordprocessor);
        lineEditdobzabprocessor1->setObjectName(QString::fromUtf8("lineEditdobzabprocessor1"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        lineEditdobzabprocessor1->setFont(font2);

        gridLayout->addWidget(lineEditdobzabprocessor1, 1, 0, 1, 1);

        pushButtondobzabprocessor = new QPushButton(addrecordprocessor);
        pushButtondobzabprocessor->setObjectName(QString::fromUtf8("pushButtondobzabprocessor"));
        pushButtondobzabprocessor->setFont(font1);

        gridLayout->addWidget(pushButtondobzabprocessor, 10, 0, 1, 1);

        label_3 = new QLabel(addrecordprocessor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(addrecordprocessor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditdobzabprocessor5 = new QLineEdit(addrecordprocessor);
        lineEditdobzabprocessor5->setObjectName(QString::fromUtf8("lineEditdobzabprocessor5"));
        lineEditdobzabprocessor5->setFont(font);

        gridLayout->addWidget(lineEditdobzabprocessor5, 9, 0, 1, 1);

        label_5 = new QLabel(addrecordprocessor);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);


        retranslateUi(addrecordprocessor);

        QMetaObject::connectSlotsByName(addrecordprocessor);
    } // setupUi

    void retranslateUi(QWidget *addrecordprocessor)
    {
        addrecordprocessor->setWindowTitle(QCoreApplication::translate("addrecordprocessor", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("addrecordprocessor", "\321\207\320\260\321\201\321\202\320\276\321\202\320\260(\320\223\320\223\320\246)", nullptr));
        label_4->setText(QCoreApplication::translate("addrecordprocessor", "\321\202\320\270\320\277 \321\201\320\276\320\272\320\265\321\202\320\260", nullptr));
        lineEditdobzabprocessor1->setText(QString());
        pushButtondobzabprocessor->setText(QCoreApplication::translate("addrecordprocessor", "\320\264\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addrecordprocessor", "\320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\217\320\264\320\265\321\200", nullptr));
        label->setText(QCoreApplication::translate("addrecordprocessor", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("addrecordprocessor", "\321\206\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addrecordprocessor: public Ui_addrecordprocessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDPROCESSOR_H
