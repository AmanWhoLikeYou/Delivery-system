/********************************************************************************
** Form generated from reading UI file 'merchant.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHANT_H
#define UI_MERCHANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Merchant
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *dishTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *savebutton;

    void setupUi(QWidget *Merchant)
    {
        if (Merchant->objectName().isEmpty())
            Merchant->setObjectName(QString::fromUtf8("Merchant"));
        Merchant->resize(699, 469);
        verticalLayout_2 = new QVBoxLayout(Merchant);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Merchant);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        dishTable = new QTableWidget(Merchant);
        if (dishTable->columnCount() < 5)
            dishTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        dishTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        dishTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        dishTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        dishTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        dishTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        dishTable->setObjectName(QString::fromUtf8("dishTable"));

        verticalLayout->addWidget(dishTable);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(Merchant);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteButton = new QPushButton(Merchant);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        savebutton = new QPushButton(Merchant);
        savebutton->setObjectName(QString::fromUtf8("savebutton"));
        savebutton->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(savebutton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Merchant);

        QMetaObject::connectSlotsByName(Merchant);
    } // setupUi

    void retranslateUi(QWidget *Merchant)
    {
        Merchant->setWindowTitle(QCoreApplication::translate("Merchant", "Form", nullptr));
        label->setText(QCoreApplication::translate("Merchant", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">My Merchant</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = dishTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Merchant", "Dish", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = dishTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Merchant", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = dishTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Merchant", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = dishTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Merchant", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = dishTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Merchant", "Description", nullptr));
        addButton->setText(QCoreApplication::translate("Merchant", "Add Dish", nullptr));
        deleteButton->setText(QCoreApplication::translate("Merchant", "Delete Dish", nullptr));
        savebutton->setText(QCoreApplication::translate("Merchant", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Merchant: public Ui_Merchant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHANT_H
