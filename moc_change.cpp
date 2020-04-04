/****************************************************************************
** Meta object code from reading C++ file 'change.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled8/change.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'change.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_change_t {
    QByteArrayData data[13];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_change_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_change_t qt_meta_stringdata_change = {
    {
QT_MOC_LITERAL(0, 0, 6), // "change"
QT_MOC_LITERAL(1, 7, 28), // "on_pushButtonchange1_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 28), // "on_pushButtonchange2_clicked"
QT_MOC_LITERAL(4, 66, 28), // "on_pushButtonchange3_clicked"
QT_MOC_LITERAL(5, 95, 28), // "on_pushButtonchange4_clicked"
QT_MOC_LITERAL(6, 124, 28), // "on_pushButtonchange5_clicked"
QT_MOC_LITERAL(7, 153, 28), // "on_pushButtonchange6_clicked"
QT_MOC_LITERAL(8, 182, 28), // "on_pushButtonchange7_clicked"
QT_MOC_LITERAL(9, 211, 26), // "on_tableViewchange_clicked"
QT_MOC_LITERAL(10, 238, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 250, 5), // "index"
QT_MOC_LITERAL(12, 256, 28) // "on_pushButtonchange8_clicked"

    },
    "change\0on_pushButtonchange1_clicked\0"
    "\0on_pushButtonchange2_clicked\0"
    "on_pushButtonchange3_clicked\0"
    "on_pushButtonchange4_clicked\0"
    "on_pushButtonchange5_clicked\0"
    "on_pushButtonchange6_clicked\0"
    "on_pushButtonchange7_clicked\0"
    "on_tableViewchange_clicked\0QModelIndex\0"
    "index\0on_pushButtonchange8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_change[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void change::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<change *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonchange1_clicked(); break;
        case 1: _t->on_pushButtonchange2_clicked(); break;
        case 2: _t->on_pushButtonchange3_clicked(); break;
        case 3: _t->on_pushButtonchange4_clicked(); break;
        case 4: _t->on_pushButtonchange5_clicked(); break;
        case 5: _t->on_pushButtonchange6_clicked(); break;
        case 6: _t->on_pushButtonchange7_clicked(); break;
        case 7: _t->on_tableViewchange_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_pushButtonchange8_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject change::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_change.data,
    qt_meta_data_change,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *change::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *change::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_change.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int change::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
