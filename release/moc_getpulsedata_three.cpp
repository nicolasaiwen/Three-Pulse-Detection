/****************************************************************************
** Meta object code from reading C++ file 'getpulsedata_three.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../getpulsedata_three.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getpulsedata_three.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GetPulseData_Three_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPulseData_Three_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPulseData_Three_t qt_meta_stringdata_GetPulseData_Three = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GetPulseData_Three"
QT_MOC_LITERAL(1, 19, 8), // "sendData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "data"
QT_MOC_LITERAL(4, 34, 19), // "sendshakehandsignal"
QT_MOC_LITERAL(5, 54, 9), // "sendError"
QT_MOC_LITERAL(6, 64, 5), // "error"
QT_MOC_LITERAL(7, 70, 13), // "readyReadSlot"
QT_MOC_LITERAL(8, 84, 13), // "handleCommand"
QT_MOC_LITERAL(9, 98, 7), // "command"
QT_MOC_LITERAL(10, 106, 9) // "ClosePort"

    },
    "GetPulseData_Three\0sendData\0\0data\0"
    "sendshakehandsignal\0sendError\0error\0"
    "readyReadSlot\0handleCommand\0command\0"
    "ClosePort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPulseData_Three[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void GetPulseData_Three::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetPulseData_Three *_t = static_cast<GetPulseData_Three *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->sendshakehandsignal(); break;
        case 2: _t->sendError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->readyReadSlot(); break;
        case 4: _t->handleCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ClosePort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GetPulseData_Three::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPulseData_Three::sendData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GetPulseData_Three::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPulseData_Three::sendshakehandsignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GetPulseData_Three::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GetPulseData_Three::sendError)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GetPulseData_Three::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GetPulseData_Three.data,
      qt_meta_data_GetPulseData_Three,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GetPulseData_Three::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPulseData_Three::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GetPulseData_Three.stringdata0))
        return static_cast<void*>(const_cast< GetPulseData_Three*>(this));
    return QObject::qt_metacast(_clname);
}

int GetPulseData_Three::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GetPulseData_Three::sendData(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GetPulseData_Three::sendshakehandsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GetPulseData_Three::sendError(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
