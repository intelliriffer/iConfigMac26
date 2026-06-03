/********************************************************************************
** Form generated from reading UI file 'MIDIInfoForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIDIINFOFORM_H
#define UI_MIDIINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MIDIInfoForm
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalTablesLayout;

    void setupUi(QWidget *MIDIInfoForm)
    {
        if (MIDIInfoForm->objectName().isEmpty())
            MIDIInfoForm->setObjectName("MIDIInfoForm");
        MIDIInfoForm->resize(1174, 554);
        MIDIInfoForm->setMinimumSize(QSize(476, 278));
        gridLayout = new QGridLayout(MIDIInfoForm);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(MIDIInfoForm);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setAutoFillBackground(true);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        treeWidget = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("Value"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("Information"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setFrameShape(QFrame::StyledPanel);
        treeWidget->setFrameShadow(QFrame::Plain);
        treeWidget->setLineWidth(1);
        treeWidget->setMidLineWidth(0);
        treeWidget->setAutoExpandDelay(10);
        treeWidget->setIndentation(15);
        treeWidget->setUniformRowHeights(false);
        treeWidget->setSortingEnabled(false);
        treeWidget->setAnimated(false);
        treeWidget->setColumnCount(2);
        splitter->addWidget(treeWidget);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setMinimumSectionSize(80);
        treeWidget->header()->setDefaultSectionSize(170);
        treeWidget->header()->setHighlightSections(false);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 16));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1146, 157));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalTablesLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalTablesLayout->setSpacing(-1);
#endif
        verticalTablesLayout->setObjectName("verticalTablesLayout");

        gridLayout_2->addLayout(verticalTablesLayout, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        splitter->addWidget(verticalLayoutWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);


        retranslateUi(MIDIInfoForm);

        QMetaObject::connectSlotsByName(MIDIInfoForm);
    } // setupUi

    void retranslateUi(QWidget *MIDIInfoForm)
    {
        MIDIInfoForm->setWindowTitle(QCoreApplication::translate("MIDIInfoForm", "Device Information", nullptr));
        label->setText(QCoreApplication::translate("MIDIInfoForm", "Port Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MIDIInfoForm: public Ui_MIDIInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIDIINFOFORM_H
