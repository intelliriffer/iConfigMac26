/********************************************************************************
** Form generated from reading UI file 'MIDIChannelRemapForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDICHANNELREMAPFORM_H
#define UI_MIDICHANNELREMAPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIChannelRemapForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *remapTypeComboBox;
    QWidget *portSelectionContainer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MIDIChannelRemapForm)
    {
        if (MIDIChannelRemapForm->objectName().isEmpty())
            MIDIChannelRemapForm->setObjectName("MIDIChannelRemapForm");
        MIDIChannelRemapForm->resize(612, 383);
        MIDIChannelRemapForm->setMinimumSize(QSize(476, 278));
        MIDIChannelRemapForm->setFocusPolicy(Qt::NoFocus);
        verticalLayout_3 = new QVBoxLayout(MIDIChannelRemapForm);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(8, 8, 8, 8);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(MIDIChannelRemapForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
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

        remapTypeComboBox = new QComboBox(verticalLayoutWidget_2);
        remapTypeComboBox->addItem(QString());
        remapTypeComboBox->addItem(QString());
        remapTypeComboBox->setObjectName("remapTypeComboBox");
        remapTypeComboBox->setMinimumSize(QSize(0, 0));
        remapTypeComboBox->setMaximumSize(QSize(240, 16777215));

        verticalLayout_2->addWidget(remapTypeComboBox);

        portSelectionContainer = new QWidget(verticalLayoutWidget_2);
        portSelectionContainer->setObjectName("portSelectionContainer");
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
        tableWidget->setMouseTracking(false);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(1);
        tableWidget->setMidLineWidth(0);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(16, 16));
        label_5->setMaximumSize(QSize(16, 16));
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QString::fromUtf8("background-color: white"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/FullBlock.png")));
        label_5->setScaledContents(true);

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(0, 24));
        label_6->setMaximumSize(QSize(16777215, 24));
        label_6->setMargin(4);

        horizontalLayout->addWidget(label_6);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(16, 16));
        label_3->setMaximumSize(QSize(16, 16));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("background-color: white"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Blocks/Images/EmptyBlock.png")));
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 24));
        label_4->setMaximumSize(QSize(16777215, 24));
        label_4->setMargin(4);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 32, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(remapTypeComboBox);
        label->setBuddy(tableWidget);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(remapTypeComboBox, tableWidget);

        retranslateUi(MIDIChannelRemapForm);

        QMetaObject::connectSlotsByName(MIDIChannelRemapForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIChannelRemapForm)
    {
        MIDIChannelRemapForm->setWindowTitle(QCoreApplication::translate("MIDIChannelRemapForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("MIDIChannelRemapForm", "Remap Type", nullptr));
        remapTypeComboBox->setItemText(0, QCoreApplication::translate("MIDIChannelRemapForm", "Input", nullptr));
        remapTypeComboBox->setItemText(1, QCoreApplication::translate("MIDIChannelRemapForm", "Output", nullptr));

        label->setText(QCoreApplication::translate("MIDIChannelRemapForm", "Remap Channels", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MIDIChannelRemapForm", "Enabled", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MIDIChannelRemapForm", "Disabled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIChannelRemapForm: public Ui_MIDIChannelRemapForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDICHANNELREMAPFORM_H
