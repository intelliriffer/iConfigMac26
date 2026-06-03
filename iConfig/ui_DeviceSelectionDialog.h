/********************************************************************************
** Form generated from reading UI file 'DeviceSelectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESELECTIONDIALOG_H
#define UI_DEVICESELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeviceSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *refreshPushButton;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *waitHorizontalLayout;
    QProgressBar *progressBar;
    QLabel *waitLabel;

    void setupUi(QDialog *DeviceSelectionDialog)
    {
        if (DeviceSelectionDialog->objectName().isEmpty())
            DeviceSelectionDialog->setObjectName("DeviceSelectionDialog");
        DeviceSelectionDialog->resize(268, 174);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon/Icons.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DeviceSelectionDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DeviceSelectionDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(12, 12, 12, 6);
        listWidget = new QListWidget(DeviceSelectionDialog);
        listWidget->setObjectName("listWidget");
        listWidget->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_2->setSpacing(-1);
#endif
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        refreshPushButton = new QPushButton(DeviceSelectionDialog);
        refreshPushButton->setObjectName("refreshPushButton");

        horizontalLayout_2->addWidget(refreshPushButton);

        buttonBox = new QDialogButtonBox(DeviceSelectionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        waitHorizontalLayout = new QHBoxLayout();
        waitHorizontalLayout->setSpacing(10);
        waitHorizontalLayout->setObjectName("waitHorizontalLayout");
        progressBar = new QProgressBar(DeviceSelectionDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        waitHorizontalLayout->addWidget(progressBar);

        waitLabel = new QLabel(DeviceSelectionDialog);
        waitLabel->setObjectName("waitLabel");

        waitHorizontalLayout->addWidget(waitLabel);


        verticalLayout->addLayout(waitHorizontalLayout);

        QWidget::setTabOrder(listWidget, refreshPushButton);

        retranslateUi(DeviceSelectionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DeviceSelectionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DeviceSelectionDialog, qOverload<>(&QDialog::reject));

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(DeviceSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *DeviceSelectionDialog)
    {
        DeviceSelectionDialog->setWindowTitle(QCoreApplication::translate("DeviceSelectionDialog", "Device Selection", nullptr));
        refreshPushButton->setText(QCoreApplication::translate("DeviceSelectionDialog", "Refresh", nullptr));
        progressBar->setFormat(QString());
        waitLabel->setText(QCoreApplication::translate("DeviceSelectionDialog", "Please wait...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceSelectionDialog: public Ui_DeviceSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESELECTIONDIALOG_H
