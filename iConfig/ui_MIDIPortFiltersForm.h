/********************************************************************************
** Form generated from reading UI file 'MIDIPortFiltersForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIPORTFILTERSFORM_H
#define UI_MIDIPORTFILTERSFORM_H

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

class Ui_MIDIPortFiltersForm
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *filterTypeComboBox;
    QWidget *portSelectionContainer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *enabledIconLabel;
    QLabel *enabledTextLabel;
    QLabel *disabledIconLabel;
    QLabel *disabledTextLabel;
    QLabel *someIconLabel;
    QLabel *someTextLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MIDIPortFiltersForm)
    {
        if (MIDIPortFiltersForm->objectName().isEmpty())
            MIDIPortFiltersForm->setObjectName("MIDIPortFiltersForm");
        MIDIPortFiltersForm->resize(640, 496);
        MIDIPortFiltersForm->setMinimumSize(QSize(476, 278));
        gridLayout = new QGridLayout(MIDIPortFiltersForm);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(8, 8, 8, 8);
        splitter = new QSplitter(MIDIPortFiltersForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(12);
        splitter->setChildrenCollapsible(false);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(240, 16777215));

        verticalLayout_2->addWidget(label_2);

        filterTypeComboBox = new QComboBox(verticalLayoutWidget_2);
        filterTypeComboBox->setObjectName("filterTypeComboBox");
        filterTypeComboBox->setMinimumSize(QSize(0, 0));
        filterTypeComboBox->setMaximumSize(QSize(240, 16777215));

        verticalLayout_2->addWidget(filterTypeComboBox);

        portSelectionContainer = new QWidget(verticalLayoutWidget_2);
        portSelectionContainer->setObjectName("portSelectionContainer");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(portSelectionContainer->sizePolicy().hasHeightForWidth());
        portSelectionContainer->setSizePolicy(sizePolicy);
        portSelectionContainer->setMinimumSize(QSize(0, 0));
        portSelectionContainer->setMaximumSize(QSize(240, 16777215));

        verticalLayout_2->addWidget(portSelectionContainer);

        splitter->addWidget(verticalLayoutWidget_2);
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
        tableWidget->setDefaultDropAction(Qt::IgnoreAction);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(24);
        tableWidget->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        enabledIconLabel = new QLabel(verticalLayoutWidget);
        enabledIconLabel->setObjectName("enabledIconLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(enabledIconLabel->sizePolicy().hasHeightForWidth());
        enabledIconLabel->setSizePolicy(sizePolicy1);
        enabledIconLabel->setMinimumSize(QSize(16, 16));
        enabledIconLabel->setMaximumSize(QSize(16, 16));
        enabledIconLabel->setFrameShape(QFrame::Panel);
        enabledIconLabel->setFrameShadow(QFrame::Sunken);
        enabledIconLabel->setLineWidth(1);
        enabledIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/FullBlock.png")));

        horizontalLayout->addWidget(enabledIconLabel);

        enabledTextLabel = new QLabel(verticalLayoutWidget);
        enabledTextLabel->setObjectName("enabledTextLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(enabledTextLabel->sizePolicy().hasHeightForWidth());
        enabledTextLabel->setSizePolicy(sizePolicy2);
        enabledTextLabel->setMinimumSize(QSize(0, 24));
        enabledTextLabel->setMaximumSize(QSize(16777215, 24));
        enabledTextLabel->setMargin(4);

        horizontalLayout->addWidget(enabledTextLabel);

        disabledIconLabel = new QLabel(verticalLayoutWidget);
        disabledIconLabel->setObjectName("disabledIconLabel");
        sizePolicy1.setHeightForWidth(disabledIconLabel->sizePolicy().hasHeightForWidth());
        disabledIconLabel->setSizePolicy(sizePolicy1);
        disabledIconLabel->setMinimumSize(QSize(16, 16));
        disabledIconLabel->setMaximumSize(QSize(16, 16));
        disabledIconLabel->setAutoFillBackground(false);
        disabledIconLabel->setStyleSheet(QString::fromUtf8("background-color:white"));
        disabledIconLabel->setFrameShape(QFrame::Panel);
        disabledIconLabel->setFrameShadow(QFrame::Sunken);
        disabledIconLabel->setLineWidth(1);
        disabledIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/EmptyBlock.png")));

        horizontalLayout->addWidget(disabledIconLabel);

        disabledTextLabel = new QLabel(verticalLayoutWidget);
        disabledTextLabel->setObjectName("disabledTextLabel");
        sizePolicy2.setHeightForWidth(disabledTextLabel->sizePolicy().hasHeightForWidth());
        disabledTextLabel->setSizePolicy(sizePolicy2);
        disabledTextLabel->setMinimumSize(QSize(0, 24));
        disabledTextLabel->setMaximumSize(QSize(16777215, 24));
        disabledTextLabel->setMargin(4);

        horizontalLayout->addWidget(disabledTextLabel);

        someIconLabel = new QLabel(verticalLayoutWidget);
        someIconLabel->setObjectName("someIconLabel");
        sizePolicy1.setHeightForWidth(someIconLabel->sizePolicy().hasHeightForWidth());
        someIconLabel->setSizePolicy(sizePolicy1);
        someIconLabel->setMinimumSize(QSize(16, 16));
        someIconLabel->setMaximumSize(QSize(16, 16));
        someIconLabel->setAutoFillBackground(false);
        someIconLabel->setStyleSheet(QString::fromUtf8("background-color:white"));
        someIconLabel->setFrameShape(QFrame::Panel);
        someIconLabel->setFrameShadow(QFrame::Sunken);
        someIconLabel->setLineWidth(1);
        someIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/HalfBlock.png")));
        someIconLabel->setScaledContents(true);

        horizontalLayout->addWidget(someIconLabel);

        someTextLabel = new QLabel(verticalLayoutWidget);
        someTextLabel->setObjectName("someTextLabel");
        sizePolicy2.setHeightForWidth(someTextLabel->sizePolicy().hasHeightForWidth());
        someTextLabel->setSizePolicy(sizePolicy2);
        someTextLabel->setMinimumSize(QSize(0, 24));
        someTextLabel->setMaximumSize(QSize(16777215, 24));
        someTextLabel->setMargin(4);

        horizontalLayout->addWidget(someTextLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(filterTypeComboBox);
        label->setBuddy(tableWidget);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MIDIPortFiltersForm);

        QMetaObject::connectSlotsByName(MIDIPortFiltersForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIPortFiltersForm)
    {
        MIDIPortFiltersForm->setWindowTitle(QCoreApplication::translate("MIDIPortFiltersForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("MIDIPortFiltersForm", "Filter Type", nullptr));
        label->setText(QCoreApplication::translate("MIDIPortFiltersForm", "Filtered Ports", nullptr));
        enabledIconLabel->setText(QString());
        enabledTextLabel->setText(QCoreApplication::translate("MIDIPortFiltersForm", "Enabled", nullptr));
        disabledIconLabel->setText(QString());
        disabledTextLabel->setText(QCoreApplication::translate("MIDIPortFiltersForm", "Disabled", nullptr));
        someIconLabel->setText(QString());
        someTextLabel->setText(QCoreApplication::translate("MIDIPortFiltersForm", "Some", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIPortFiltersForm: public Ui_MIDIPortFiltersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIPORTFILTERSFORM_H
