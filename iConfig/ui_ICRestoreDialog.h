/********************************************************************************
** Form generated from reading UI file 'ICRestoreDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICRESTOREDIALOG_H
#define UI_ICRESTOREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICRestoreDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textEditDescription;
    QDialogButtonBox *buttonBox;
    QListWidget *listFiles;

    void setupUi(QDialog *ICRestoreDialog)
    {
        if (ICRestoreDialog->objectName().isEmpty())
            ICRestoreDialog->setObjectName("ICRestoreDialog");
        ICRestoreDialog->resize(700, 380);
        horizontalLayoutWidget = new QWidget(ICRestoreDialog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 320, 681, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        textEditDescription = new QLineEdit(horizontalLayoutWidget);
        textEditDescription->setObjectName("textEditDescription");
        textEditDescription->setReadOnly(true);

        horizontalLayout->addWidget(textEditDescription);

        buttonBox = new QDialogButtonBox(ICRestoreDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 350, 681, 31));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listFiles = new QListWidget(ICRestoreDialog);
        listFiles->setObjectName("listFiles");
        listFiles->setGeometry(QRect(10, 10, 681, 301));

        retranslateUi(ICRestoreDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ICRestoreDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ICRestoreDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ICRestoreDialog);
    } // setupUi

    void retranslateUi(QDialog *ICRestoreDialog)
    {
        ICRestoreDialog->setWindowTitle(QCoreApplication::translate("ICRestoreDialog", "Restore from Presets", nullptr));
        label->setText(QCoreApplication::translate("ICRestoreDialog", "Description:", nullptr));
        textEditDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ICRestoreDialog: public Ui_ICRestoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICRESTOREDIALOG_H
