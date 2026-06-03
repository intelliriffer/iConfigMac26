/********************************************************************************
** Form generated from reading UI file 'AudioPatchbayForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPATCHBAYFORM_H
#define UI_AUDIOPATCHBAYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioPatchbayForm
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *AudioPatchbayForm)
    {
        if (AudioPatchbayForm->objectName().isEmpty())
            AudioPatchbayForm->setObjectName("AudioPatchbayForm");
        AudioPatchbayForm->resize(807, 566);
        gridLayout = new QGridLayout(AudioPatchbayForm);
        gridLayout->setObjectName("gridLayout");
        treeWidget = new QTreeWidget(AudioPatchbayForm);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("Output Channels"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("Input Channels"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidget->setRootIsDecorated(true);
        treeWidget->setItemsExpandable(true);
        treeWidget->setHeaderHidden(false);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setDefaultSectionSize(360);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);


        retranslateUi(AudioPatchbayForm);

        QMetaObject::connectSlotsByName(AudioPatchbayForm);
    } // setupUi

    void retranslateUi(QWidget *AudioPatchbayForm)
    {
        AudioPatchbayForm->setWindowTitle(QCoreApplication::translate("AudioPatchbayForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioPatchbayForm: public Ui_AudioPatchbayForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPATCHBAYFORM_H
