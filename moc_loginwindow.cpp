/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginwindow_t {
    QByteArrayData data[6];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginwindow_t qt_meta_stringdata_loginwindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "loginwindow"
QT_MOC_LITERAL(1, 12, 12), // "toMainWindow"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "NodeAVL*"
QT_MOC_LITERAL(4, 35, 14), // "onLoginClicked"
QT_MOC_LITERAL(5, 50, 9) // "validUser"

    },
    "loginwindow\0toMainWindow\0\0NodeAVL*\0"
    "onLoginClicked\0validUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   34,    2, 0x08 /* Private */,
       5,    2,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void loginwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loginwindow *_t = static_cast<loginwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toMainWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< NodeAVL*(*)>(_a[2]))); break;
        case 1: _t->onLoginClicked(); break;
        case 2: { bool _r = _t->validUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (loginwindow::*_t)(int , NodeAVL * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loginwindow::toMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject loginwindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_loginwindow.data,
      qt_meta_data_loginwindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *loginwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginwindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int loginwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void loginwindow::toMainWindow(int _t1, NodeAVL * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
