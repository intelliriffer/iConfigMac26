/********************************************************************************
** Form generated from reading UI file 'DeviceInformationDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEINFORMATIONDIALOG_H
#define UI_DEVICEINFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceInformationDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeviceInformationDialog)
    {
        if (DeviceInformationDialog->objectName().isEmpty())
            DeviceInformationDialog->setObjectName("DeviceInformationDialog");
        DeviceInformationDialog->setWindowModality(Qt::ApplicationModal);
        DeviceInformationDialog->resize(530, 623);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DeviceInformationDialog->sizePolicy().hasHeightForWidth());
        DeviceInformationDialog->setSizePolicy(sizePolicy);
        DeviceInformationDialog->setModal(true);
        layoutWidget = new QWidget(DeviceInformationDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 511, 611));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(false);

        horizontalLayout->addWidget(checkBox);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DeviceInformationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeviceInformationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeviceInformationDialog, qOverload<>(&QDialog::reject));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), DeviceInformationDialog, SLOT(checkBoxChecked(bool)));

        QMetaObject::connectSlotsByName(DeviceInformationDialog);
    } // setupUi

    void retranslateUi(QDialog *DeviceInformationDialog)
    {
        DeviceInformationDialog->setWindowTitle(QCoreApplication::translate("DeviceInformationDialog", "Information about your device", nullptr));
        checkBox->setText(QCoreApplication::translate("DeviceInformationDialog", "Don't show this again for this device", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceInformationDialog: public Ui_DeviceInformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEINFORMATIONDIALOG_H
