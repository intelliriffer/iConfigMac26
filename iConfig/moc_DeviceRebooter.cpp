/****************************************************************************
** Meta object code from reading C++ file 'DeviceRebooter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DeviceRebooter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceRebooter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14DeviceRebooterE_t {};
} // unnamed namespace

template <> constexpr inline auto DeviceRebooter::qt_create_metaobjectdata<qt_meta_tag_ZN14DeviceRebooterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DeviceRebooter",
        "rebootComplete",
        "",
        "outPort",
        "resetSent",
        "error",
        "code",
        "reboot",
        "GeneSysLib::BootModeEnum",
        "bootMode",
        "startSearch",
        "timerTick",
        "cleanup"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'rebootComplete'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'resetSent'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'error'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'reboot'
        QtMocHelpers::SlotData<void(GeneSysLib::BootModeEnum)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'startSearch'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'timerTick'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanup'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeviceRebooter, qt_meta_tag_ZN14DeviceRebooterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DeviceRebooter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceRebooterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceRebooterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14DeviceRebooterE_t>.metaTypes,
    nullptr
} };

void DeviceRebooter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeviceRebooter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rebootComplete((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->resetSent(); break;
        case 2: _t->error((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->reboot((*reinterpret_cast<std::add_pointer_t<GeneSysLib::BootModeEnum>>(_a[1]))); break;
        case 4: _t->startSearch(); break;
        case 5: _t->timerTick(); break;
        case 6: _t->cleanup(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DeviceRebooter::*)(int )>(_a, &DeviceRebooter::rebootComplete, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DeviceRebooter::*)()>(_a, &DeviceRebooter::resetSent, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DeviceRebooter::*)(int )>(_a, &DeviceRebooter::error, 2))
            return;
    }
}

const QMetaObject *DeviceRebooter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceRebooter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceRebooterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceRebooter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DeviceRebooter::rebootComplete(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void DeviceRebooter::resetSent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceRebooter::error(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
