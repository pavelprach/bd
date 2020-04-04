/********************************************************************************
** Form generated from reading UI file 'zhapros.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHAPROS_H
#define UI_ZHAPROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhapros
{
public:
    QPushButton *zhaprosButton;
    QLineEdit *zhaproslineEdit;
    QTableView *zhaprostableView;

    void setupUi(QWidget *zhapros)
    {
        if (zhapros->objectName().isEmpty())
            zhapros->setObjectName(QString::fromUtf8("zhapros"));
        zhapros->resize(698, 440);
        zhaprosButton = new QPushButton(zhapros);
        zhaprosButton->setObjectName(QString::fromUtf8("zhaprosButton"));
        zhaprosButton->setGeometry(QRect(190, 410, 341, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        zhaprosButton->setFont(font);
        zhaproslineEdit = new QLineEdit(zhapros);
        zhaproslineEdit->setObjectName(QString::fromUtf8("zhaproslineEdit"));
        zhaproslineEdit->setGeometry(QRect(0, 379, 691, 31));
        zhaproslineEdit->setFont(font);
        zhaprostableView = new QTableView(zhapros);
        zhaprostableView->setObjectName(QString::fromUtf8("zhaprostableView"));
        zhaprostableView->setGeometry(QRect(5, 1, 691, 371));

        retranslateUi(zhapros);

        QMetaObject::connectSlotsByName(zhapros);
    } // setupUi

    void retranslateUi(QWidget *zhapros)
    {
        zhapros->setWindowTitle(QCoreApplication::translate("zhapros", "Form", nullptr));
        zhaprosButton->setText(QCoreApplication::translate("zhapros", "\321\201\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class zhapros: public Ui_zhapros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHAPROS_H
