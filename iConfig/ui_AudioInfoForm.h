/********************************************************************************
** Form generated from reading UI file 'AudioInfoForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOINFOFORM_H
#define UI_AUDIOINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioInfoForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalTablesLayout;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AudioInfoForm)
    {
        if (AudioInfoForm->objectName().isEmpty())
            AudioInfoForm->setObjectName("AudioInfoForm");
        AudioInfoForm->resize(820, 610);
        AudioInfoForm->setMinimumSize(QSize(476, 278));
        AudioInfoForm->setFocusPolicy(Qt::NoFocus);
        verticalLayout_2 = new QVBoxLayout(AudioInfoForm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        splitter = new QSplitter(AudioInfoForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
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
        treeWidget->setRootIsDecorated(true);
        treeWidget->setUniformRowHeights(false);
        treeWidget->setItemsExpandable(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setAnimated(false);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->setWordWrap(true);
        treeWidget->setColumnCount(2);
        splitter->addWidget(treeWidget);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setMinimumSectionSize(80);
        treeWidget->header()->setDefaultSectionSize(170);
        treeWidget->header()->setHighlightSections(false);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 340));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 6, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 794, 308));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(6, 6, 6, 6);
        verticalTablesLayout = new QVBoxLayout();
        verticalTablesLayout->setObjectName("verticalTablesLayout");

        verticalLayout_6->addLayout(verticalTablesLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);

        frame = new QFrame(AudioInfoForm);
        frame->setObjectName("frame");
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("QFrame{background-color: rgb(255, 255, 102); border-width: 2}"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(2);
        frame->setMidLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(12, 4, 4, 4);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(158, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(158, 32));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addWidget(frame);

        QWidget::setTabOrder(treeWidget, pushButton);

        retranslateUi(AudioInfoForm);

        QMetaObject::connectSlotsByName(AudioInfoForm);
    } // setupUi

    void retranslateUi(QWidget *AudioInfoForm)
    {
        AudioInfoForm->setWindowTitle(QCoreApplication::translate("AudioInfoForm", "Device Information", nullptr));
        label_2->setText(QCoreApplication::translate("AudioInfoForm", "Port Information", nullptr));
        label->setText(QCoreApplication::translate("AudioInfoForm", "For changes to take effect perform a \"Commit & Reset\".", nullptr));
        pushButton->setText(QCoreApplication::translate("AudioInfoForm", "Commit && Reset", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AudioInfoForm", "Abandon Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioInfoForm: public Ui_AudioInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOINFOFORM_H
