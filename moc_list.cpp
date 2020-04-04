/****************************************************************************
** Meta object code from reading C++ file 'list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../untitled8/list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_list_t {
    QByteArrayData data[10];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_list_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_list_t qt_meta_stringdata_list = {
    {
QT_MOC_LITERAL(0, 0, 4), // "list"
QT_MOC_LITERAL(1, 5, 22), // "on_listButton1_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "on_listButton2_clicked"
QT_MOC_LITERAL(4, 52, 22), // "on_listButton3_clicked"
QT_MOC_LITERAL(5, 75, 22), // "on_listButton4_clicked"
QT_MOC_LITERAL(6, 98, 22), // "on_listButton5_clicked"
QT_MOC_LITERAL(7, 121, 22), // "on_listButton6_clicked"
QT_MOC_LITERAL(8, 144, 22), // "on_listButton7_clicked"
QT_MOC_LITERAL(9, 167, 22) // "on_listButton8_clicked"

    },
    "list\0on_listButton1_clicked\0\0"
    "on_listButton2_clicked\0on_listButton3_clicked\0"
    "on_listButton4_clicked\0on_listButton5_clicked\0"
    "on_listButton6_clicked\0on_listButton7_clicked\0"
    "on_listButton8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_list[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<list *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listButton1_clicked(); break;
        case 1: _t->on_listButton2_clicked(); break;
        case 2: _t->on_listButton3_clicked(); break;
        case 3: _t->on_listButton4_clicked(); break;
        case 4: _t->on_listButton5_clicked(); break;
        case 5: _t->on_listButton6_clicked(); break;
        case 6: _t->on_listButton7_clicked(); break;
        case 7: _t->on_listButton8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject list::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_list.data,
    qt_meta_data_list,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *list::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_list.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
