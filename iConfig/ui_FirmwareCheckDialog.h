/********************************************************************************
** Form generated from reading UI file 'FirmwareCheckDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMWARECHECKDIALOG_H
#define UI_FIRMWARECHECKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirmwareCheckDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioEveryLoad;
    QRadioButton *radioEveryWeek;
    QRadioButton *radioEveryMonth;
    QRadioButton *radioNever;
    QPushButton *okButton;

    void setupUi(QDialog *FirmwareCheckDialog)
    {
        if (FirmwareCheckDialog->objectName().isEmpty())
            FirmwareCheckDialog->setObjectName("FirmwareCheckDialog");
        FirmwareCheckDialog->resize(400, 153);
        layoutWidget = new QWidget(FirmwareCheckDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 16, 371, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioEveryLoad = new QRadioButton(layoutWidget);
        radioEveryLoad->setObjectName("radioEveryLoad");

        verticalLayout->addWidget(radioEveryLoad);

        radioEveryWeek = new QRadioButton(layoutWidget);
        radioEveryWeek->setObjectName("radioEveryWeek");

        verticalLayout->addWidget(radioEveryWeek);

        radioEveryMonth = new QRadioButton(layoutWidget);
        radioEveryMonth->setObjectName("radioEveryMonth");

        verticalLayout->addWidget(radioEveryMonth);

        radioNever = new QRadioButton(layoutWidget);
        radioNever->setObjectName("radioNever");

        verticalLayout->addWidget(radioNever);

        okButton = new QPushButton(FirmwareCheckDialog);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(314, 120, 81, 32));
        QWidget::setTabOrder(radioEveryLoad, radioEveryWeek);
        QWidget::setTabOrder(radioEveryWeek, radioEveryMonth);
        QWidget::setTabOrder(radioEveryMonth, radioNever);

        retranslateUi(FirmwareCheckDialog);
        QObject::connect(okButton, &QPushButton::clicked, FirmwareCheckDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(FirmwareCheckDialog);
    } // setupUi

    void retranslateUi(QDialog *FirmwareCheckDialog)
    {
        FirmwareCheckDialog->setWindowTitle(QCoreApplication::translate("FirmwareCheckDialog", "Firmware Check Frequency", nullptr));
        radioEveryLoad->setText(QCoreApplication::translate("FirmwareCheckDialog", "On each connection", nullptr));
        radioEveryWeek->setText(QCoreApplication::translate("FirmwareCheckDialog", "Once per week", nullptr));
        radioEveryMonth->setText(QCoreApplication::translate("FirmwareCheckDialog", "Once per month", nullptr));
        radioNever->setText(QCoreApplication::translate("FirmwareCheckDialog", "Never automatically", nullptr));
        okButton->setText(QCoreApplication::translate("FirmwareCheckDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirmwareCheckDialog: public Ui_FirmwareCheckDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMWARECHECKDIALOG_H
