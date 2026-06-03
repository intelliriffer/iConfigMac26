/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "refreshAll",
        "",
        "refreshAudio",
        "refreshMeters",
        "closeAll",
        "doReset",
        "doResetForOpen",
        "doResetBootloader",
        "doneAudioRefresh",
        "doneMetersRefresh",
        "on_actionClose_triggered",
        "on_actionCommit_Changes_to_FLASH_triggered",
        "on_actionRestore_from_FLASH_triggered",
        "on_actionRestore_to_Factory_Defaults_triggered",
        "on_actionReset_triggered",
        "on_actionReset_to_Bootloader_Mode_triggered",
        "on_actionSave_triggered",
        "on_actionOpen_triggered",
        "on_actionFirmwareConfig_triggered",
        "on_actionOpenPresetsFolder_triggered",
        "on_actionReread_Settings_triggered",
        "deviceInfo_triggered",
        "midiInfo_triggered",
        "portRouting_triggered",
        "portFilter_triggered",
        "channelRemap_triggered",
        "ccFilter_triggered",
        "ccRemap_triggered",
        "audioInfo_triggered",
        "audioPatchbay_triggered",
        "audioMixerControl_triggered",
        "audioControl_triggered",
        "queryCompleted",
        "Screen",
        "screen",
        "CommandQList",
        "foundItems",
        "requestRefresh",
        "rereadAudioControls",
        "rereadMeters",
        "enableDevInfoAction",
        "enableMidiInfoAction",
        "enablePortRoutingAction",
        "enablePortFilterAction",
        "enableChannelRemapAction",
        "enableCCFilterAction",
        "enableCCRemapAction",
        "enableAudioInfoAction",
        "enableAudioPatchbayAction",
        "enableAudioMixerAction",
        "enableAudioControlAction",
        "updateFileMenu",
        "updateDeviceMenu",
        "writingStarted",
        "max",
        "writingProgress",
        "value",
        "writingCompleted",
        "onTimeout",
        "closeEvent",
        "QCloseEvent*",
        "event",
        "on_actionAbout_triggered",
        "closeAllInTime",
        "on_actionIConnectivity_Website_triggered",
        "on_actionSoftware_Manual_triggered",
        "on_actionRegister_triggered",
        "on_actionUpgrade_Firmware_triggered",
        "on_actionUpgrade_Firmware_From_Local_Drive_triggered"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'refreshAll'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'refreshAudio'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'refreshMeters'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeAll'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doReset'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doResetForOpen'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doResetBootloader'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doneAudioRefresh'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doneMetersRefresh'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_actionClose_triggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCommit_Changes_to_FLASH_triggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRestore_from_FLASH_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRestore_to_Factory_Defaults_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReset_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReset_to_Bootloader_Mode_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFirmwareConfig_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenPresetsFolder_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReread_Settings_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deviceInfo_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'midiInfo_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'portRouting_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'portFilter_triggered'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'channelRemap_triggered'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ccFilter_triggered'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'ccRemap_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioInfo_triggered'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioPatchbay_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioMixerControl_triggered'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioControl_triggered'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'queryCompleted'
        QtMocHelpers::SlotData<void(Screen, CommandQList)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 }, { 0x80000000 | 36, 37 },
        }}),
        // Slot 'requestRefresh'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rereadAudioControls'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'rereadMeters'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableDevInfoAction'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableMidiInfoAction'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enablePortRoutingAction'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enablePortFilterAction'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableChannelRemapAction'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableCCFilterAction'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableCCRemapAction'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableAudioInfoAction'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableAudioPatchbayAction'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableAudioMixerAction'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableAudioControlAction'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateFileMenu'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateDeviceMenu'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'writingStarted'
        QtMocHelpers::SlotData<void(int)>(54, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 55 },
        }}),
        // Slot 'writingProgress'
        QtMocHelpers::SlotData<void(int)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 57 },
        }}),
        // Slot 'writingCompleted'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTimeout'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeEvent'
        QtMocHelpers::SlotData<void(QCloseEvent *)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 61, 62 },
        }}),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'closeAllInTime'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionIConnectivity_Website_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSoftware_Manual_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRegister_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUpgrade_Firmware_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUpgrade_Firmware_From_Local_Drive_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->refreshAll(); break;
        case 1: _t->refreshAudio(); break;
        case 2: _t->refreshMeters(); break;
        case 3: _t->closeAll(); break;
        case 4: _t->doReset(); break;
        case 5: _t->doResetForOpen(); break;
        case 6: _t->doResetBootloader(); break;
        case 7: _t->doneAudioRefresh(); break;
        case 8: _t->doneMetersRefresh(); break;
        case 9: _t->on_actionClose_triggered(); break;
        case 10: _t->on_actionCommit_Changes_to_FLASH_triggered(); break;
        case 11: _t->on_actionRestore_from_FLASH_triggered(); break;
        case 12: _t->on_actionRestore_to_Factory_Defaults_triggered(); break;
        case 13: _t->on_actionReset_triggered(); break;
        case 14: _t->on_actionReset_to_Bootloader_Mode_triggered(); break;
        case 15: _t->on_actionSave_triggered(); break;
        case 16: _t->on_actionOpen_triggered(); break;
        case 17: _t->on_actionFirmwareConfig_triggered(); break;
        case 18: _t->on_actionOpenPresetsFolder_triggered(); break;
        case 19: _t->on_actionReread_Settings_triggered(); break;
        case 20: _t->deviceInfo_triggered(); break;
        case 21: _t->midiInfo_triggered(); break;
        case 22: _t->portRouting_triggered(); break;
        case 23: _t->portFilter_triggered(); break;
        case 24: _t->channelRemap_triggered(); break;
        case 25: _t->ccFilter_triggered(); break;
        case 26: _t->ccRemap_triggered(); break;
        case 27: _t->audioInfo_triggered(); break;
        case 28: _t->audioPatchbay_triggered(); break;
        case 29: _t->audioMixerControl_triggered(); break;
        case 30: _t->audioControl_triggered(); break;
        case 31: _t->queryCompleted((*reinterpret_cast<std::add_pointer_t<Screen>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<CommandQList>>(_a[2]))); break;
        case 32: _t->requestRefresh(); break;
        case 33: _t->rereadAudioControls(); break;
        case 34: _t->rereadMeters(); break;
        case 35: _t->enableDevInfoAction(); break;
        case 36: _t->enableMidiInfoAction(); break;
        case 37: _t->enablePortRoutingAction(); break;
        case 38: _t->enablePortFilterAction(); break;
        case 39: _t->enableChannelRemapAction(); break;
        case 40: _t->enableCCFilterAction(); break;
        case 41: _t->enableCCRemapAction(); break;
        case 42: _t->enableAudioInfoAction(); break;
        case 43: _t->enableAudioPatchbayAction(); break;
        case 44: _t->enableAudioMixerAction(); break;
        case 45: _t->enableAudioControlAction(); break;
        case 46: _t->updateFileMenu(); break;
        case 47: _t->updateDeviceMenu(); break;
        case 48: _t->writingStarted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 49: _t->writingProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->writingCompleted(); break;
        case 51: _t->onTimeout(); break;
        case 52: _t->closeEvent((*reinterpret_cast<std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 53: _t->on_actionAbout_triggered(); break;
        case 54: _t->closeAllInTime(); break;
        case 55: _t->on_actionIConnectivity_Website_triggered(); break;
        case 56: _t->on_actionSoftware_Manual_triggered(); break;
        case 57: _t->on_actionRegister_triggered(); break;
        case 58: _t->on_actionUpgrade_Firmware_triggered(); break;
        case 59: _t->on_actionUpgrade_Firmware_From_Local_Drive_triggered(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::refreshAll, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::refreshAudio, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::refreshMeters, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::closeAll, 3))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 60;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::refreshAll()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::refreshAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::refreshMeters()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::closeAll()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
