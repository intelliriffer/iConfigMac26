/********************************************************************************
** Form generated from reading UI file 'FirmwareUpgradeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMWAREUPGRADEDIALOG_H
#define UI_FIRMWAREUPGRADEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirmwareUpgradeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_root;
    QVBoxLayout *verticalLayout_top;
    QLabel *statusLabel;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_bottom;
    QHBoxLayout *horizontalLayout_left;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QProgressBar *timeoutBar;

    void setupUi(QDialog *FirmwareUpgradeDialog)
    {
        if (FirmwareUpgradeDialog->objectName().isEmpty())
            FirmwareUpgradeDialog->setObjectName("FirmwareUpgradeDialog");
        FirmwareUpgradeDialog->setWindowModality(Qt::WindowModal);
        FirmwareUpgradeDialog->resize(450, 160);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirmwareUpgradeDialog->sizePolicy().hasHeightForWidth());
        FirmwareUpgradeDialog->setSizePolicy(sizePolicy);
        FirmwareUpgradeDialog->setMinimumSize(QSize(450, 160));
        FirmwareUpgradeDialog->setMaximumSize(QSize(450, 160));
        FirmwareUpgradeDialog->setContextMenuPolicy(Qt::NoContextMenu);
        FirmwareUpgradeDialog->setAutoFillBackground(false);
        FirmwareUpgradeDialog->setModal(true);
        verticalLayout = new QVBoxLayout(FirmwareUpgradeDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 6, -1, 16);
        verticalLayout_root = new QVBoxLayout();
        verticalLayout_root->setSpacing(0);
        verticalLayout_root->setObjectName("verticalLayout_root");
        verticalLayout_top = new QVBoxLayout();
        verticalLayout_top->setObjectName("verticalLayout_top");
        statusLabel = new QLabel(FirmwareUpgradeDialog);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setMaximumSize(QSize(426, 32));
        statusLabel->setScaledContents(false);
        statusLabel->setWordWrap(true);

        verticalLayout_top->addWidget(statusLabel);

        progressBar = new QProgressBar(FirmwareUpgradeDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout_top->addWidget(progressBar);


        verticalLayout_root->addLayout(verticalLayout_top);

        verticalLayout_bottom = new QVBoxLayout();
        verticalLayout_bottom->setObjectName("verticalLayout_bottom");
        horizontalLayout_left = new QHBoxLayout();
        horizontalLayout_left->setObjectName("horizontalLayout_left");
        cancelButton = new QPushButton(FirmwareUpgradeDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMaximumSize(QSize(120, 40));

        horizontalLayout_left->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_left->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(FirmwareUpgradeDialog);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        timeoutBar = new QProgressBar(FirmwareUpgradeDialog);
        timeoutBar->setObjectName("timeoutBar");
        timeoutBar->setValue(24);

        verticalLayout_2->addWidget(timeoutBar);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_left->addLayout(horizontalLayout);


        verticalLayout_bottom->addLayout(horizontalLayout_left);


        verticalLayout_root->addLayout(verticalLayout_bottom);


        verticalLayout->addLayout(verticalLayout_root);


        retranslateUi(FirmwareUpgradeDialog);
        QObject::connect(cancelButton, &QPushButton::clicked, FirmwareUpgradeDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(FirmwareUpgradeDialog);
    } // setupUi

    void retranslateUi(QDialog *FirmwareUpgradeDialog)
    {
        FirmwareUpgradeDialog->setWindowTitle(QCoreApplication::translate("FirmwareUpgradeDialog", "Firmware Upgrader", nullptr));
        statusLabel->setText(QCoreApplication::translate("FirmwareUpgradeDialog", "Downloading latest firmware.", nullptr));
        cancelButton->setText(QCoreApplication::translate("FirmwareUpgradeDialog", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("FirmwareUpgradeDialog", "Timeout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirmwareUpgradeDialog: public Ui_FirmwareUpgradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMWAREUPGRADEDIALOG_H
