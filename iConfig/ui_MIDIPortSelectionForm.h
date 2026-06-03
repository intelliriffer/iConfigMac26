/********************************************************************************
** Form generated from reading UI file 'MIDIPortSelectionForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIPORTSELECTIONFORM_H
#define UI_MIDIPORTSELECTIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIPortSelectionForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *portLabel;
    QTreeWidget *portTreeWidget;

    void setupUi(QWidget *MIDIPortSelectionForm)
    {
        if (MIDIPortSelectionForm->objectName().isEmpty())
            MIDIPortSelectionForm->setObjectName("MIDIPortSelectionForm");
        MIDIPortSelectionForm->resize(144, 410);
        MIDIPortSelectionForm->setMinimumSize(QSize(144, 0));
        MIDIPortSelectionForm->setMaximumSize(QSize(240, 16777215));
        MIDIPortSelectionForm->setFocusPolicy(Qt::WheelFocus);
        verticalLayout = new QVBoxLayout(MIDIPortSelectionForm);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName("verticalLayout");
        portLabel = new QLabel(MIDIPortSelectionForm);
        portLabel->setObjectName("portLabel");
        portLabel->setMaximumSize(QSize(260, 16777215));
        portLabel->setFocusPolicy(Qt::WheelFocus);

        verticalLayout->addWidget(portLabel);

        portTreeWidget = new QTreeWidget(MIDIPortSelectionForm);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        portTreeWidget->setHeaderItem(__qtreewidgetitem);
        portTreeWidget->setObjectName("portTreeWidget");
        portTreeWidget->setMaximumSize(QSize(260, 16777215));
        portTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        portTreeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        portTreeWidget->header()->setVisible(false);

        verticalLayout->addWidget(portTreeWidget);

#if QT_CONFIG(shortcut)
        portLabel->setBuddy(portTreeWidget);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MIDIPortSelectionForm);

        QMetaObject::connectSlotsByName(MIDIPortSelectionForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIPortSelectionForm)
    {
        MIDIPortSelectionForm->setWindowTitle(QCoreApplication::translate("MIDIPortSelectionForm", "Port Selection", nullptr));
        portLabel->setText(QCoreApplication::translate("MIDIPortSelectionForm", "Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIPortSelectionForm: public Ui_MIDIPortSelectionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIPORTSELECTIONFORM_H
