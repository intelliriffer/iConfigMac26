/****************************************************************************
** Meta object code from reading C++ file 'MIDIInfoForm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MIDIRelated/MIDIInfoForm.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MIDIInfoForm.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12MIDIInfoFormE_t {};
} // unnamed namespace

template <> constexpr inline auto MIDIInfoForm::qt_create_metaobjectdata<qt_meta_tag_ZN12MIDIInfoFormE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MIDIInfoForm",
        "informationAvailable",
        "",
        "updateMessage",
        "message",
        "timeout",
        "refreshAll",
        "buildInformation",
        "queryCompleted",
        "Screen",
        "screen",
        "CommandQList",
        "found",
        "updateNumberOfMultiPortUSB",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'informationAvailable'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateMessage'
        QtMocHelpers::SignalData<void(QString, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { QMetaType::Int, 5 },
        }}),
        // Signal 'refreshAll'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'buildInformation'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'queryCompleted'
        QtMocHelpers::SlotData<void(Screen, CommandQList)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'updateNumberOfMultiPortUSB'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MIDIInfoForm, qt_meta_tag_ZN12MIDIInfoFormE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MIDIInfoForm::staticMetaObject = { {
    QMetaObject::SuperData::link<RefreshObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MIDIInfoFormE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MIDIInfoFormE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12MIDIInfoFormE_t>.metaTypes,
    nullptr
} };

void MIDIInfoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MIDIInfoForm *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->informationAvailable(); break;
        case 1: _t->updateMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->refreshAll(); break;
        case 3: _t->buildInformation(); break;
        case 4: _t->queryCompleted((*reinterpret_cast<std::add_pointer_t<Screen>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<CommandQList>>(_a[2]))); break;
        case 5: _t->updateNumberOfMultiPortUSB((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MIDIInfoForm::*)()>(_a, &MIDIInfoForm::informationAvailable, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MIDIInfoForm::*)(QString , int )>(_a, &MIDIInfoForm::updateMessage, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MIDIInfoForm::*)()>(_a, &MIDIInfoForm::refreshAll, 2))
            return;
    }
}

const QMetaObject *MIDIInfoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MIDIInfoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12MIDIInfoFormE_t>.strings))
        return static_cast<void*>(this);
    return RefreshObject::qt_metacast(_clname);
}

int MIDIInfoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RefreshObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MIDIInfoForm::informationAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MIDIInfoForm::updateMessage(QString _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MIDIInfoForm::refreshAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
