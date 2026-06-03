/********************************************************************************
** Form generated from reading UI file 'DeviceInfoForm.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEINFOFORM_H
#define UI_DEVICEINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceInfoForm {
public:
    QGridLayout* gridLayout;
    QSplitter* splitter;
    QWidget* widget;
    QVBoxLayout* verticalLayout;
    QLabel* accessoryLabel;
    QLabel* deviceNameLabel;
    QLabel* pictureLabel;
    QSpacerItem* verticalSpacer_2;
    QLabel* urlLabel;
    QTreeWidget* treeWidget;

    void setupUi(QWidget* DeviceInfoForm)
    {
        if (DeviceInfoForm->objectName().isEmpty())
            DeviceInfoForm->setObjectName("DeviceInfoForm");
        DeviceInfoForm->setWindowModality(Qt::NonModal);
        DeviceInfoForm->resize(1174, 587);
        DeviceInfoForm->setMinimumSize(QSize(476, 278));
        DeviceInfoForm->setBaseSize(QSize(600, 300));
        DeviceInfoForm->setFocusPolicy(Qt::ClickFocus);
        gridLayout = new QGridLayout(DeviceInfoForm);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 8, 8, 8);
        splitter = new QSplitter(DeviceInfoForm);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(12);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(240, 255));
        widget->setMaximumSize(QSize(350, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        accessoryLabel = new QLabel(widget);
        accessoryLabel->setObjectName("accessoryLabel");
        accessoryLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        accessoryLabel->setFont(font);
        accessoryLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(accessoryLabel);

        deviceNameLabel = new QLabel(widget);
        deviceNameLabel->setObjectName("deviceNameLabel");
        deviceNameLabel->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        deviceNameLabel->setFont(font1);
        deviceNameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(deviceNameLabel);

        pictureLabel = new QLabel(widget);
        pictureLabel->setObjectName("pictureLabel");
        pictureLabel->setMinimumSize(QSize(0, 0));
        pictureLabel->setMaximumSize(QSize(16777215, 16777215));
        pictureLabel->setFrameShape(QFrame::NoFrame);
        pictureLabel->setFrameShadow(QFrame::Plain);
        pictureLabel->setScaledContents(false);
        pictureLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pictureLabel);

        verticalSpacer_2 = new QSpacerItem(20, 140, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        urlLabel = new QLabel(widget);
        urlLabel->setObjectName("urlLabel");
        urlLabel->setAlignment(Qt::AlignCenter);
        urlLabel->setWordWrap(true);
        urlLabel->setOpenExternalLinks(true);

        verticalLayout->addWidget(urlLabel);

        splitter->addWidget(widget);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setStyleSheet("QTreeWidget { font-size: 14pt; }");

        QTreeWidgetItem* __qtreewidgetitem = new QTreeWidgetItem();
        QFont fontH = __qtreewidgetitem->font(0);
        QFont fontV = __qtreewidgetitem->font(1);
        fontH.setPointSize(14);
        fontH.setBold(true);
        fontV.setPointSize(16);
        __qtreewidgetitem->setFont(0, fontH);
        __qtreewidgetitem->setFont(1, fontH);
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

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        retranslateUi(DeviceInfoForm);

        QMetaObject::connectSlotsByName(DeviceInfoForm);
    } // setupUi

    void retranslateUi(QWidget* DeviceInfoForm)
    {
        DeviceInfoForm->setWindowTitle(QCoreApplication::translate("DeviceInfoForm", "Device Information", nullptr));
        accessoryLabel->setText(QString());
        deviceNameLabel->setText(QString());
        pictureLabel->setText(QString());
        urlLabel->setText(QCoreApplication::translate("DeviceInfoForm", "<html><head/><body><p>Visit <a href=\"http://www.iconnectivity.com\"><span style=\" text-decoration: underline; color:#0000ff;\">iConnectivity</span></a> for product information.</p></body></html>", nullptr));
    } // retranslateUi
};

namespace Ui {
class DeviceInfoForm : public Ui_DeviceInfoForm { };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEINFOFORM_H
