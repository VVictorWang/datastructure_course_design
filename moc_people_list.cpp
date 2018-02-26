/****************************************************************************
** Meta object code from reading C++ file 'people_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "people_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'people_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_people_list_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_people_list_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_people_list_t qt_meta_stringdata_people_list = {
    {
QT_MOC_LITERAL(0, 0, 11), // "people_list"
QT_MOC_LITERAL(1, 12, 17), // "toPerson_Specific"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 48, 14), // "on_add_clicked"
QT_MOC_LITERAL(5, 63, 17), // "on_delete_clicked"
QT_MOC_LITERAL(6, 81, 20), // "on_Infodata_received"
QT_MOC_LITERAL(7, 102, 14), // "ListNode<Info>"
QT_MOC_LITERAL(8, 117, 4) // "info"

    },
    "people_list\0toPerson_Specific\0\0"
    "QListWidgetItem*\0on_add_clicked\0"
    "on_delete_clicked\0on_Infodata_received\0"
    "ListNode<Info>\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_people_list[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x0a /* Public */,
       5,    0,   38,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void people_list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        people_list *_t = static_cast<people_list *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toPerson_Specific((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_add_clicked(); break;
        case 2: _t->on_delete_clicked(); break;
        case 3: _t->on_Infodata_received((*reinterpret_cast< ListNode<Info>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject people_list::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_people_list.data,
      qt_meta_data_people_list,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *people_list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *people_list::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_people_list.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int people_list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
