/****************************************************************************
** Meta object code from reading C++ file 'DeviceInfoForm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DeviceInfoForm.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceInfoForm.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14DeviceInfoFormE_t {};
} // unnamed namespace

template <> constexpr inline auto DeviceInfoForm::qt_create_metaobjectdata<qt_meta_tag_ZN14DeviceInfoFormE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DeviceInfoForm",
        "informationAvailable",
        "",
        "updateMessage",
        "message",
        "timeout",
        "setupSideBar",
        "buildInformation",
        "queryCompleted",
        "Screen",
        "screen",
        "CommandQList",
        "found"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'informationAvailable'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateMessage'
        QtMocHelpers::SignalData<void(QString, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'setupSideBar'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildInformation'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'queryCompleted'
        QtMocHelpers::SlotData<void(Screen, CommandQList)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DeviceInfoForm, qt_meta_tag_ZN14DeviceInfoFormE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DeviceInfoForm::staticMetaObject = { {
    QMetaObject::SuperData::link<RefreshObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceInfoFormE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceInfoFormE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14DeviceInfoFormE_t>.metaTypes,
    nullptr
} };

void DeviceInfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DeviceInfoForm *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->informationAvailable(); break;
        case 1: _t->updateMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->setupSideBar(); break;
        case 3: _t->buildInformation(); break;
        case 4: _t->queryCompleted((*reinterpret_cast<std::add_pointer_t<Screen>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<CommandQList>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DeviceInfoForm::*)()>(_a, &DeviceInfoForm::informationAvailable, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DeviceInfoForm::*)(QString , int )>(_a, &DeviceInfoForm::updateMessage, 1))
            return;
    }
}

const QMetaObject *DeviceInfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DeviceInfoFormE_t>.strings))
        return static_cast<void*>(this);
    return RefreshObject::qt_metacast(_clname);
}

int DeviceInfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RefreshObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DeviceInfoForm::informationAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceInfoForm::updateMessage(QString _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
