/********************************************************************************
** Form generated from reading UI file 'MIDIPortRoutingForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIPORTROUTINGFORM_H
#define UI_MIDIPORTROUTINGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIPortRoutingForm
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *portSelectionContainer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *enabledIconLabel;
    QLabel *enabledTextLabel;
    QLabel *disabledIconLabel;
    QLabel *disabledTextLabel;
    QLabel *someIconLabel;
    QLabel *someTextLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MIDIPortRoutingForm)
    {
        if (MIDIPortRoutingForm->objectName().isEmpty())
            MIDIPortRoutingForm->setObjectName("MIDIPortRoutingForm");
        MIDIPortRoutingForm->resize(810, 379);
        MIDIPortRoutingForm->setMinimumSize(QSize(476, 278));
        horizontalLayout = new QHBoxLayout(MIDIPortRoutingForm);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(8, 8, 8, 8);
        splitter = new QSplitter(MIDIPortRoutingForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(12);
        splitter->setChildrenCollapsible(false);
        portSelectionContainer = new QWidget(splitter);
        portSelectionContainer->setObjectName("portSelectionContainer");
        portSelectionContainer->setMinimumSize(QSize(0, 0));
        portSelectionContainer->setMaximumSize(QSize(240, 16777215));
        portSelectionContainer->setBaseSize(QSize(0, 0));
        splitter->addWidget(portSelectionContainer);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMouseTracking(true);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->setMidLineWidth(0);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        enabledIconLabel = new QLabel(verticalLayoutWidget);
        enabledIconLabel->setObjectName("enabledIconLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enabledIconLabel->sizePolicy().hasHeightForWidth());
        enabledIconLabel->setSizePolicy(sizePolicy);
        enabledIconLabel->setMinimumSize(QSize(16, 16));
        enabledIconLabel->setMaximumSize(QSize(16, 16));
        enabledIconLabel->setStyleSheet(QString::fromUtf8("background-color:white"));
        enabledIconLabel->setFrameShape(QFrame::Panel);
        enabledIconLabel->setFrameShadow(QFrame::Sunken);
        enabledIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/FullBlock.png")));
        enabledIconLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(enabledIconLabel);

        enabledTextLabel = new QLabel(verticalLayoutWidget);
        enabledTextLabel->setObjectName("enabledTextLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enabledTextLabel->sizePolicy().hasHeightForWidth());
        enabledTextLabel->setSizePolicy(sizePolicy1);
        enabledTextLabel->setMinimumSize(QSize(0, 27));
        enabledTextLabel->setMaximumSize(QSize(16777215, 27));
        enabledTextLabel->setMargin(4);

        horizontalLayout_2->addWidget(enabledTextLabel);

        disabledIconLabel = new QLabel(verticalLayoutWidget);
        disabledIconLabel->setObjectName("disabledIconLabel");
        sizePolicy.setHeightForWidth(disabledIconLabel->sizePolicy().hasHeightForWidth());
        disabledIconLabel->setSizePolicy(sizePolicy);
        disabledIconLabel->setMinimumSize(QSize(16, 16));
        disabledIconLabel->setMaximumSize(QSize(16, 16));
        disabledIconLabel->setStyleSheet(QString::fromUtf8("background-color:white"));
        disabledIconLabel->setFrameShape(QFrame::Panel);
        disabledIconLabel->setFrameShadow(QFrame::Sunken);
        disabledIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/EmptyBlock.png")));
        disabledIconLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(disabledIconLabel);

        disabledTextLabel = new QLabel(verticalLayoutWidget);
        disabledTextLabel->setObjectName("disabledTextLabel");
        sizePolicy1.setHeightForWidth(disabledTextLabel->sizePolicy().hasHeightForWidth());
        disabledTextLabel->setSizePolicy(sizePolicy1);
        disabledTextLabel->setMinimumSize(QSize(0, 27));
        disabledTextLabel->setMaximumSize(QSize(16777215, 27));
        disabledTextLabel->setMargin(4);

        horizontalLayout_2->addWidget(disabledTextLabel);

        someIconLabel = new QLabel(verticalLayoutWidget);
        someIconLabel->setObjectName("someIconLabel");
        sizePolicy.setHeightForWidth(someIconLabel->sizePolicy().hasHeightForWidth());
        someIconLabel->setSizePolicy(sizePolicy);
        someIconLabel->setMinimumSize(QSize(16, 16));
        someIconLabel->setMaximumSize(QSize(16, 16));
        someIconLabel->setStyleSheet(QString::fromUtf8("background-color:white"));
        someIconLabel->setFrameShape(QFrame::Panel);
        someIconLabel->setFrameShadow(QFrame::Sunken);
        someIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/HalfBlock.png")));
        someIconLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(someIconLabel);

        someTextLabel = new QLabel(verticalLayoutWidget);
        someTextLabel->setObjectName("someTextLabel");
        sizePolicy1.setHeightForWidth(someTextLabel->sizePolicy().hasHeightForWidth());
        someTextLabel->setSizePolicy(sizePolicy1);
        someTextLabel->setMinimumSize(QSize(0, 27));
        someTextLabel->setMaximumSize(QSize(16777215, 27));
        someTextLabel->setMargin(4);

        horizontalLayout_2->addWidget(someTextLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        splitter->addWidget(verticalLayoutWidget);

        horizontalLayout->addWidget(splitter);

#if QT_CONFIG(shortcut)
        label->setBuddy(tableWidget);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MIDIPortRoutingForm);

        QMetaObject::connectSlotsByName(MIDIPortRoutingForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIPortRoutingForm)
    {
        MIDIPortRoutingForm->setWindowTitle(QCoreApplication::translate("MIDIPortRoutingForm", "Port Routing", nullptr));
        label->setText(QCoreApplication::translate("MIDIPortRoutingForm", "Port Routes (Destinations)", nullptr));
        enabledIconLabel->setText(QString());
        enabledTextLabel->setText(QCoreApplication::translate("MIDIPortRoutingForm", "Enabled", nullptr));
        disabledIconLabel->setText(QString());
        disabledTextLabel->setText(QCoreApplication::translate("MIDIPortRoutingForm", "Disabled", nullptr));
        someIconLabel->setText(QString());
        someTextLabel->setText(QCoreApplication::translate("MIDIPortRoutingForm", "Some", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIPortRoutingForm: public Ui_MIDIPortRoutingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIPORTROUTINGFORM_H
