/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionCommit_Changes_to_FLASH;
    QAction *actionRestore_from_FLASH;
    QAction *actionRestore_to_Factory_Defaults;
    QAction *actionReset;
    QAction *actionReset_to_Bootloader_Mode;
    QAction *actionReread_Settings;
    QAction *actionAbout;
    QAction *actionIConnectivity_Website;
    QAction *actionSoftware_Manual;
    QAction *actionRegister;
    QAction *actionUpgrade_Firmware;
    QAction *actionOpenPresetsFolder;
    QAction *actionFirmwareConfig;
    QAction *actionUpgrade_Firmware_From_Local_Drive;
    QWidget *centralWidget;
    QGridLayout *gridLayout_;
    QMenuBar *menuBar;
    QMenu *menuDevice;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(880, 561);
        MainWindow->setMinimumSize(QSize(476, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon/Icons.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::VerticalTabs);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionCommit_Changes_to_FLASH = new QAction(MainWindow);
        actionCommit_Changes_to_FLASH->setObjectName("actionCommit_Changes_to_FLASH");
        actionRestore_from_FLASH = new QAction(MainWindow);
        actionRestore_from_FLASH->setObjectName("actionRestore_from_FLASH");
        actionRestore_to_Factory_Defaults = new QAction(MainWindow);
        actionRestore_to_Factory_Defaults->setObjectName("actionRestore_to_Factory_Defaults");
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        actionReset_to_Bootloader_Mode = new QAction(MainWindow);
        actionReset_to_Bootloader_Mode->setObjectName("actionReset_to_Bootloader_Mode");
        actionReread_Settings = new QAction(MainWindow);
        actionReread_Settings->setObjectName("actionReread_Settings");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionIConnectivity_Website = new QAction(MainWindow);
        actionIConnectivity_Website->setObjectName("actionIConnectivity_Website");
        actionSoftware_Manual = new QAction(MainWindow);
        actionSoftware_Manual->setObjectName("actionSoftware_Manual");
        actionRegister = new QAction(MainWindow);
        actionRegister->setObjectName("actionRegister");
        actionUpgrade_Firmware = new QAction(MainWindow);
        actionUpgrade_Firmware->setObjectName("actionUpgrade_Firmware");
        actionOpenPresetsFolder = new QAction(MainWindow);
        actionOpenPresetsFolder->setObjectName("actionOpenPresetsFolder");
        actionFirmwareConfig = new QAction(MainWindow);
        actionFirmwareConfig->setObjectName("actionFirmwareConfig");
        actionUpgrade_Firmware_From_Local_Drive = new QAction(MainWindow);
        actionUpgrade_Firmware_From_Local_Drive->setObjectName("actionUpgrade_Firmware_From_Local_Drive");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setAutoFillBackground(false);
        gridLayout_ = new QGridLayout(centralWidget);
        gridLayout_->setSpacing(6);
        gridLayout_->setContentsMargins(11, 11, 11, 11);
        gridLayout_->setObjectName("gridLayout_");
        gridLayout_->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 880, 22));
        menuDevice = new QMenu(menuBar);
        menuDevice->setObjectName("menuDevice");
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextOnly);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuDevice->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuDevice->addAction(actionClose);
        menuDevice->addSeparator();
        menuDevice->addAction(actionCommit_Changes_to_FLASH);
        menuDevice->addAction(actionRestore_from_FLASH);
        menuDevice->addAction(actionRestore_to_Factory_Defaults);
        menuDevice->addSeparator();
        menuDevice->addAction(actionReset);
        menuDevice->addAction(actionReset_to_Bootloader_Mode);
        menuDevice->addSeparator();
        menuDevice->addAction(actionFirmwareConfig);
        menuDevice->addAction(actionUpgrade_Firmware);
        menuDevice->addAction(actionUpgrade_Firmware_From_Local_Drive);
        menuDevice->addSeparator();
        menuDevice->addAction(actionReread_Settings);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpenPresetsFolder);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuHelp->addAction(actionIConnectivity_Website);
        menuHelp->addSeparator();
        menuHelp->addAction(actionSoftware_Manual);
        menuHelp->addAction(actionRegister);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "iConnectivity iConfig", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Switch Devices", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open Preset", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save Preset", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionCommit_Changes_to_FLASH->setText(QCoreApplication::translate("MainWindow", "Save Current Settings", nullptr));
        actionRestore_from_FLASH->setText(QCoreApplication::translate("MainWindow", "Restore Settings from Memory", nullptr));
        actionRestore_to_Factory_Defaults->setText(QCoreApplication::translate("MainWindow", "Restore to Factory Defaults", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        actionReset_to_Bootloader_Mode->setText(QCoreApplication::translate("MainWindow", "Reset to Bootloader Mode", nullptr));
        actionReread_Settings->setText(QCoreApplication::translate("MainWindow", "Reread Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionIConnectivity_Website->setText(QCoreApplication::translate("MainWindow", "iConnectivity Website", nullptr));
        actionSoftware_Manual->setText(QCoreApplication::translate("MainWindow", "Online Help", nullptr));
        actionRegister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        actionUpgrade_Firmware->setText(QCoreApplication::translate("MainWindow", "Upgrade Firmware", nullptr));
        actionOpenPresetsFolder->setText(QCoreApplication::translate("MainWindow", "Open Presets Folder", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenPresetsFolder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFirmwareConfig->setText(QCoreApplication::translate("MainWindow", "Firmware Check Frequency", nullptr));
        actionUpgrade_Firmware_From_Local_Drive->setText(QCoreApplication::translate("MainWindow", "Load Firmware From Local Drive", nullptr));
        menuDevice->setTitle(QCoreApplication::translate("MainWindow", "Device", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
