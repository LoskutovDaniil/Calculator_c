/****************************************************************************
** Meta object code from reading C++ file 'deposit_calc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../my_calc/deposit_calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deposit_calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Deposit_calc_t {
    const uint offsetsAndSize[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Deposit_calc_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Deposit_calc_t qt_meta_stringdata_Deposit_calc = {
    {
QT_MOC_LITERAL(0, 12), // "Deposit_calc"
QT_MOC_LITERAL(13, 30), // "on_pushButton_calc_dep_clicked"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(71, 31), // "on_pushButton_clear_dep_clicked"
QT_MOC_LITERAL(103, 31) // "on_pushButton_close_dep_clicked"

    },
    "Deposit_calc\0on_pushButton_calc_dep_clicked\0"
    "\0on_pushButton_add_clicked\0"
    "on_pushButton_clear_dep_clicked\0"
    "on_pushButton_close_dep_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Deposit_calc[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Deposit_calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Deposit_calc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_calc_dep_clicked(); break;
        case 1: _t->on_pushButton_add_clicked(); break;
        case 2: _t->on_pushButton_clear_dep_clicked(); break;
        case 3: _t->on_pushButton_close_dep_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Deposit_calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Deposit_calc.offsetsAndSize,
    qt_meta_data_Deposit_calc,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Deposit_calc_t
, QtPrivate::TypeAndForceComplete<Deposit_calc, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Deposit_calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Deposit_calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Deposit_calc.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Deposit_calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
