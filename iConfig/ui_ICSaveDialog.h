/********************************************************************************
** Form generated from reading UI file 'ICSaveDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICSAVEDIALOG_H
#define UI_ICSAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ICSaveDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkDeviceInfo;
    QCheckBox *checkMidi;
    QCheckBox *checkMidiInfo;
    QCheckBox *checkMidiPortRouting;
    QLabel *label;
    QCheckBox *checkMidiFilters;
    QCheckBox *checkMidiRemap;
    QCheckBox *checkAudio;
    QCheckBox *checkAudioInfo;
    QCheckBox *checkAudioConnections;
    QCheckBox *checkAudioMixer;
    QCheckBox *checkAnalog;
    QCheckBox *checkAll;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *textEditFileName;
    QLineEdit *textEditDescription;
    QPushButton *buttonExportAsMidi;

    void setupUi(QDialog *ICSaveDialog)
    {
        if (ICSaveDialog->objectName().isEmpty())
            ICSaveDialog->setObjectName("ICSaveDialog");
        ICSaveDialog->resize(700, 380);
        buttonBox = new QDialogButtonBox(ICSaveDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(400, 350, 291, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkDeviceInfo = new QCheckBox(ICSaveDialog);
        checkDeviceInfo->setObjectName("checkDeviceInfo");
        checkDeviceInfo->setGeometry(QRect(10, 130, 681, 20));
        checkMidi = new QCheckBox(ICSaveDialog);
        checkMidi->setObjectName("checkMidi");
        checkMidi->setGeometry(QRect(10, 150, 681, 20));
        checkMidiInfo = new QCheckBox(ICSaveDialog);
        checkMidiInfo->setObjectName("checkMidiInfo");
        checkMidiInfo->setGeometry(QRect(30, 170, 661, 20));
        checkMidiPortRouting = new QCheckBox(ICSaveDialog);
        checkMidiPortRouting->setObjectName("checkMidiPortRouting");
        checkMidiPortRouting->setGeometry(QRect(30, 190, 661, 20));
        label = new QLabel(ICSaveDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 91, 16));
        checkMidiFilters = new QCheckBox(ICSaveDialog);
        checkMidiFilters->setObjectName("checkMidiFilters");
        checkMidiFilters->setGeometry(QRect(30, 210, 661, 20));
        checkMidiRemap = new QCheckBox(ICSaveDialog);
        checkMidiRemap->setObjectName("checkMidiRemap");
        checkMidiRemap->setGeometry(QRect(30, 230, 661, 20));
        checkAudio = new QCheckBox(ICSaveDialog);
        checkAudio->setObjectName("checkAudio");
        checkAudio->setGeometry(QRect(10, 250, 681, 20));
        checkAudioInfo = new QCheckBox(ICSaveDialog);
        checkAudioInfo->setObjectName("checkAudioInfo");
        checkAudioInfo->setGeometry(QRect(30, 270, 661, 20));
        checkAudioConnections = new QCheckBox(ICSaveDialog);
        checkAudioConnections->setObjectName("checkAudioConnections");
        checkAudioConnections->setGeometry(QRect(30, 290, 661, 20));
        checkAudioMixer = new QCheckBox(ICSaveDialog);
        checkAudioMixer->setObjectName("checkAudioMixer");
        checkAudioMixer->setGeometry(QRect(30, 310, 661, 20));
        checkAnalog = new QCheckBox(ICSaveDialog);
        checkAnalog->setObjectName("checkAnalog");
        checkAnalog->setGeometry(QRect(30, 330, 661, 20));
        checkAll = new QCheckBox(ICSaveDialog);
        checkAll->setObjectName("checkAll");
        checkAll->setGeometry(QRect(10, 110, 681, 20));
        QFont font;
        font.setBold(true);
        checkAll->setFont(font);
        gridLayoutWidget = new QWidget(ICSaveDialog);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 681, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        textEditFileName = new QLineEdit(gridLayoutWidget);
        textEditFileName->setObjectName("textEditFileName");

        gridLayout->addWidget(textEditFileName, 0, 1, 1, 1);

        textEditDescription = new QLineEdit(gridLayoutWidget);
        textEditDescription->setObjectName("textEditDescription");

        gridLayout->addWidget(textEditDescription, 1, 1, 1, 1);

        buttonExportAsMidi = new QPushButton(ICSaveDialog);
        buttonExportAsMidi->setObjectName("buttonExportAsMidi");
        buttonExportAsMidi->setGeometry(QRect(0, 350, 131, 31));
        QWidget::setTabOrder(textEditFileName, textEditDescription);
        QWidget::setTabOrder(textEditDescription, checkAll);
        QWidget::setTabOrder(checkAll, checkDeviceInfo);
        QWidget::setTabOrder(checkDeviceInfo, checkMidi);
        QWidget::setTabOrder(checkMidi, checkMidiInfo);
        QWidget::setTabOrder(checkMidiInfo, checkMidiPortRouting);
        QWidget::setTabOrder(checkMidiPortRouting, checkMidiFilters);
        QWidget::setTabOrder(checkMidiFilters, checkMidiRemap);
        QWidget::setTabOrder(checkMidiRemap, checkAudio);
        QWidget::setTabOrder(checkAudio, checkAudioInfo);
        QWidget::setTabOrder(checkAudioInfo, checkAudioConnections);
        QWidget::setTabOrder(checkAudioConnections, checkAudioMixer);
        QWidget::setTabOrder(checkAudioMixer, checkAnalog);

        retranslateUi(ICSaveDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ICSaveDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ICSaveDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonExportAsMidi, SIGNAL(clicked()), ICSaveDialog, SLOT(buttonExportAsMidi_triggered()));

        QMetaObject::connectSlotsByName(ICSaveDialog);
    } // setupUi

    void retranslateUi(QDialog *ICSaveDialog)
    {
        ICSaveDialog->setWindowTitle(QCoreApplication::translate("ICSaveDialog", "Save Preset", nullptr));
        checkDeviceInfo->setText(QCoreApplication::translate("ICSaveDialog", "Device Info", nullptr));
        checkMidi->setText(QCoreApplication::translate("ICSaveDialog", "MIDI", nullptr));
        checkMidiInfo->setText(QCoreApplication::translate("ICSaveDialog", "MIDI Info", nullptr));
        checkMidiPortRouting->setText(QCoreApplication::translate("ICSaveDialog", "MIDI Port Routing", nullptr));
        label->setText(QCoreApplication::translate("ICSaveDialog", "What to save?", nullptr));
        checkMidiFilters->setText(QCoreApplication::translate("ICSaveDialog", "MIDI Port/Controller Filters", nullptr));
        checkMidiRemap->setText(QCoreApplication::translate("ICSaveDialog", "MIDI Channel/Controller Remap", nullptr));
        checkAudio->setText(QCoreApplication::translate("ICSaveDialog", "AUDIO", nullptr));
        checkAudioInfo->setText(QCoreApplication::translate("ICSaveDialog", "Audio Info (Requires Reboot)", nullptr));
        checkAudioConnections->setText(QCoreApplication::translate("ICSaveDialog", "Audio Connections (Patchbay and Mixer Connections)", nullptr));
        checkAudioMixer->setText(QCoreApplication::translate("ICSaveDialog", "Audio Mixer Settings (Gains, Mute, Stereo Links, Balance, Solo, Inverts, PFLs, Mix Names)", nullptr));
        checkAnalog->setText(QCoreApplication::translate("ICSaveDialog", "Analog In/Out Settings (Phantom Power, Hi-Z, Gains, Mute, Stereo Links, Trim, Balance)", nullptr));
        checkAll->setText(QCoreApplication::translate("ICSaveDialog", "Check All", nullptr));
        label_3->setText(QCoreApplication::translate("ICSaveDialog", "Description:", nullptr));
        label_2->setText(QCoreApplication::translate("ICSaveDialog", "Preset Name:", nullptr));
        buttonExportAsMidi->setText(QCoreApplication::translate("ICSaveDialog", "Export as MIDI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ICSaveDialog: public Ui_ICSaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICSAVEDIALOG_H
