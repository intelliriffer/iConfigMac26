/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FirmwareRelated/FirmwareUpgradeDialog.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21FirmwareUpgradeDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto FirmwareUpgradeDialog::qt_create_metaobjectdata<qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FirmwareUpgradeDialog",
        "firmwareUpToDate",
        "",
        "version",
        "firmwareUpdateRequired",
        "url",
        "checkComplete",
        "sendNext",
        "redirectDownloadURL",
        "firmwareUpdateTimeOut",
        "finishedRequest",
        "QNetworkReply*",
        "reply",
        "downloadFirmware",
        "rebootComplete",
        "messagePump",
        "reQueryDownloadSite",
        "fileUpdateTimeOut"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'firmwareUpToDate'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'firmwareUpdateRequired'
        QtMocHelpers::SignalData<void(QString, QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'checkComplete'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sendNext'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'redirectDownloadURL'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'firmwareUpdateTimeOut'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'finishedRequest'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'downloadFirmware'
        QtMocHelpers::SlotData<void(QString, QString)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'rebootComplete'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'messagePump'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reQueryDownloadSite'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fileUpdateTimeOut'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FirmwareUpgradeDialog, qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FirmwareUpgradeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>.metaTypes,
    nullptr
} };

void FirmwareUpgradeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FirmwareUpgradeDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->firmwareUpToDate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->firmwareUpdateRequired((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->checkComplete(); break;
        case 3: _t->sendNext(); break;
        case 4: _t->redirectDownloadURL(); break;
        case 5: _t->firmwareUpdateTimeOut(); break;
        case 6: _t->finishedRequest((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->downloadFirmware((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->rebootComplete(); break;
        case 9: _t->messagePump(); break;
        case 10: _t->reQueryDownloadSite(); break;
        case 11: _t->fileUpdateTimeOut(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)(QString )>(_a, &FirmwareUpgradeDialog::firmwareUpToDate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)(QString , QString )>(_a, &FirmwareUpgradeDialog::firmwareUpdateRequired, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)()>(_a, &FirmwareUpgradeDialog::checkComplete, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)()>(_a, &FirmwareUpgradeDialog::sendNext, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)()>(_a, &FirmwareUpgradeDialog::redirectDownloadURL, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (FirmwareUpgradeDialog::*)()>(_a, &FirmwareUpgradeDialog::firmwareUpdateTimeOut, 5))
            return;
    }
}

const QMetaObject *FirmwareUpgradeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21FirmwareUpgradeDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FirmwareUpgradeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FirmwareUpgradeDialog::firmwareUpToDate(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FirmwareUpgradeDialog::firmwareUpdateRequired(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void FirmwareUpgradeDialog::checkComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FirmwareUpgradeDialog::sendNext()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FirmwareUpgradeDialog::redirectDownloadURL()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FirmwareUpgradeDialog::firmwareUpdateTimeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
