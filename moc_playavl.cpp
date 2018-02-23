/****************************************************************************
** Meta object code from reading C++ file 'playavl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playavl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playavl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayAVL_t {
    QByteArrayData data[13];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayAVL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayAVL_t qt_meta_stringdata_PlayAVL = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PlayAVL"
QT_MOC_LITERAL(1, 8, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "on_remove_clicked"
QT_MOC_LITERAL(4, 42, 16), // "on_inter_clicked"
QT_MOC_LITERAL(5, 59, 17), // "on_differ_clicked"
QT_MOC_LITERAL(6, 77, 16), // "on_union_clicked"
QT_MOC_LITERAL(7, 94, 16), // "on_reset_clicked"
QT_MOC_LITERAL(8, 111, 21), // "on_is_subtree_clicked"
QT_MOC_LITERAL(9, 133, 16), // "on_data_received"
QT_MOC_LITERAL(10, 150, 8), // "NodeAVL*"
QT_MOC_LITERAL(11, 159, 4), // "data"
QT_MOC_LITERAL(12, 164, 9) // "operation"

    },
    "PlayAVL\0on_add_clicked\0\0on_remove_clicked\0"
    "on_inter_clicked\0on_differ_clicked\0"
    "on_union_clicked\0on_reset_clicked\0"
    "on_is_subtree_clicked\0on_data_received\0"
    "NodeAVL*\0data\0operation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayAVL[] = {

 // content:
       7,       // revision
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
       9,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,

       0        // eod
};

void PlayAVL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayAVL *_t = static_cast<PlayAVL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_remove_clicked(); break;
        case 2: _t->on_inter_clicked(); break;
        case 3: _t->on_differ_clicked(); break;
        case 4: _t->on_union_clicked(); break;
        case 5: _t->on_reset_clicked(); break;
        case 6: _t->on_is_subtree_clicked(); break;
        case 7: _t->on_data_received((*reinterpret_cast< NodeAVL*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PlayAVL::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayAVL.data,
      qt_meta_data_PlayAVL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayAVL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayAVL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayAVL.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayAVL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
