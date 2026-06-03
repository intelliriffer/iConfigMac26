/********************************************************************************
** Form generated from reading UI file 'MIDIControllerRemapForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDICONTROLLERREMAPFORM_H
#define UI_MIDICONTROLLERREMAPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIControllerRemapForm
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *remapTypeComboBox;
    QWidget *portSelectionContainer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MIDIControllerRemapForm)
    {
        if (MIDIControllerRemapForm->objectName().isEmpty())
            MIDIControllerRemapForm->setObjectName("MIDIControllerRemapForm");
        MIDIControllerRemapForm->resize(856, 526);
        MIDIControllerRemapForm->setMinimumSize(QSize(476, 278));
        MIDIControllerRemapForm->setMouseTracking(true);
        gridLayout = new QGridLayout(MIDIControllerRemapForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(MIDIControllerRemapForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(12);
        splitter->setChildrenCollapsible(false);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(240, 16777215));
        label->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(label);

        remapTypeComboBox = new QComboBox(verticalLayoutWidget);
        remapTypeComboBox->addItem(QString());
        remapTypeComboBox->addItem(QString());
        remapTypeComboBox->setObjectName("remapTypeComboBox");
        remapTypeComboBox->setMinimumSize(QSize(0, 0));
        remapTypeComboBox->setMaximumSize(QSize(240, 16777215));
        remapTypeComboBox->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(remapTypeComboBox);

        portSelectionContainer = new QWidget(verticalLayoutWidget);
        portSelectionContainer->setObjectName("portSelectionContainer");
        portSelectionContainer->setMinimumSize(QSize(0, 0));
        portSelectionContainer->setMaximumSize(QSize(240, 16777215));
        portSelectionContainer->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(portSelectionContainer);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        tableWidget = new QTableWidget(verticalLayoutWidget_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setFocusPolicy(Qt::StrongFocus);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->setMidLineWidth(0);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(24);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(16, 16));
        label_3->setMaximumSize(QSize(16, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/FullBlock.png")));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 24));
        label_4->setMaximumSize(QSize(16777215, 24));
        label_4->setMargin(4);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(16, 16));
        label_5->setMaximumSize(QSize(16, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/EmptyBlock.png")));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(0, 24));
        label_6->setMaximumSize(QSize(16777215, 24));
        label_6->setMargin(4);

        horizontalLayout->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(verticalLayoutWidget_2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(remapTypeComboBox);
        label_2->setBuddy(tableWidget);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MIDIControllerRemapForm);

        QMetaObject::connectSlotsByName(MIDIControllerRemapForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIControllerRemapForm)
    {
        MIDIControllerRemapForm->setWindowTitle(QCoreApplication::translate("MIDIControllerRemapForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("MIDIControllerRemapForm", "Remap Type", nullptr));
        remapTypeComboBox->setItemText(0, QCoreApplication::translate("MIDIControllerRemapForm", "Input", nullptr));
        remapTypeComboBox->setItemText(1, QCoreApplication::translate("MIDIControllerRemapForm", "Output", nullptr));

        label_2->setText(QCoreApplication::translate("MIDIControllerRemapForm", "Controller Remap", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MIDIControllerRemapForm", "Enabled", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MIDIControllerRemapForm", "Disabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIControllerRemapForm: public Ui_MIDIControllerRemapForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDICONTROLLERREMAPFORM_H
