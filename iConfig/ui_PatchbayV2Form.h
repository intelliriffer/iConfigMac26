/********************************************************************************
** Form generated from reading UI file 'PatchbayV2Form.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHBAYV2FORM_H
#define UI_PATCHBAYV2FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatchbayV2Form
{
public:

    void setupUi(QWidget *PatchbayV2Form)
    {
        if (PatchbayV2Form->objectName().isEmpty())
            PatchbayV2Form->setObjectName("PatchbayV2Form");
        PatchbayV2Form->resize(400, 300);
        PatchbayV2Form->setMinimumSize(QSize(400, 300));

        retranslateUi(PatchbayV2Form);

        QMetaObject::connectSlotsByName(PatchbayV2Form);
    } // setupUi

    void retranslateUi(QWidget *PatchbayV2Form)
    {
        PatchbayV2Form->setWindowTitle(QCoreApplication::translate("PatchbayV2Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchbayV2Form: public Ui_PatchbayV2Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHBAYV2FORM_H
