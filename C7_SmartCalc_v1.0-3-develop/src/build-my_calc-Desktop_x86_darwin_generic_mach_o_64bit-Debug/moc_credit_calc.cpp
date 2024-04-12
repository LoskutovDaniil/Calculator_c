/****************************************************************************
** Meta object code from reading C++ file 'credit_calc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../my_calc/credit_calc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'credit_calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Credit_calc_t {
    const uint offsetsAndSize[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Credit_calc_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Credit_calc_t qt_meta_stringdata_Credit_calc = {
    {
QT_MOC_LITERAL(0, 11), // "Credit_calc"
QT_MOC_LITERAL(12, 30), // "on_pushButton_calc_res_clicked"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 34), // "on_pushButton_clear_window_cl..."
QT_MOC_LITERAL(79, 41) // "on_pushButton_close_credit_wi..."

    },
    "Credit_calc\0on_pushButton_calc_res_clicked\0"
    "\0on_pushButton_clear_window_clicked\0"
    "on_pushButton_close_credit_window_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Credit_calc[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Credit_calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Credit_calc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_calc_res_clicked(); break;
        case 1: _t->on_pushButton_clear_window_clicked(); break;
        case 2: _t->on_pushButton_close_credit_window_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Credit_calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Credit_calc.offsetsAndSize,
    qt_meta_data_Credit_calc,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Credit_calc_t
, QtPrivate::TypeAndForceComplete<Credit_calc, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Credit_calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Credit_calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Credit_calc.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Credit_calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
