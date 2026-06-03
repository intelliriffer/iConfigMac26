/****************************************************************************
** Meta object code from reading C++ file 'MIDIPortRoutingForm.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MIDIRelated/MIDIPortRoutingForm.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MIDIPortRoutingForm.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19MIDIPortRoutingFormE_t {};
} // unnamed namespace

template <> constexpr inline auto MIDIPortRoutingForm::qt_create_metaobjectdata<qt_meta_tag_ZN19MIDIPortRoutingFormE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MIDIPortRoutingForm",
        "selectedPortIDsChanged",
        "",
        "PortIDVector",
        "portIDs",
        "cellChanged",
        "row",
        "col",
        "BlockState::Enum",
        "state",
        "updateRouting",
        "sendUpdate",
        "refreshWidget"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectedPortIDsChanged'
        QtMocHelpers::SlotData<void(PortIDVector)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'cellChanged'
        QtMocHelpers::SlotData<void(int, int, BlockState::Enum)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'updateRouting'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendUpdate'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'refreshWidget'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MIDIPortRoutingForm, qt_meta_tag_ZN19MIDIPortRoutingFormE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MIDIPortRoutingForm::staticMetaObject = { {
    QMetaObject::SuperData::link<RefreshObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MIDIPortRoutingFormE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MIDIPortRoutingFormE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19MIDIPortRoutingFormE_t>.metaTypes,
    nullptr
} };

void MIDIPortRoutingForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MIDIPortRoutingForm *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectedPortIDsChanged((*reinterpret_cast<std::add_pointer_t<PortIDVector>>(_a[1]))); break;
        case 1: _t->cellChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BlockState::Enum>>(_a[3]))); break;
        case 2: _t->updateRouting(); break;
        case 3: _t->sendUpdate(); break;
        case 4: _t->refreshWidget(); break;
        default: ;
        }
    }
}

const QMetaObject *MIDIPortRoutingForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MIDIPortRoutingForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MIDIPortRoutingFormE_t>.strings))
        return static_cast<void*>(this);
    return RefreshObject::qt_metacast(_clname);
}

int MIDIPortRoutingForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
