/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessdebugpipebackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/network/access/qnetworkaccessdebugpipebackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessdebugpipebackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkAccessDebugPipeBackend_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkAccessDebugPipeBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkAccessDebugPipeBackend_t qt_meta_stringdata_QNetworkAccessDebugPipeBackend = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QNetworkAccessDebugPipeBackend"
QT_MOC_LITERAL(1, 31, 19), // "uploadReadyReadSlot"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 15), // "socketReadyRead"
QT_MOC_LITERAL(4, 68, 18), // "socketBytesWritten"
QT_MOC_LITERAL(5, 87, 5), // "bytes"
QT_MOC_LITERAL(6, 93, 11), // "socketError"
QT_MOC_LITERAL(7, 105, 18), // "socketDisconnected"
QT_MOC_LITERAL(8, 124, 15) // "socketConnected"

    },
    "QNetworkAccessDebugPipeBackend\0"
    "uploadReadyReadSlot\0\0socketReadyRead\0"
    "socketBytesWritten\0bytes\0socketError\0"
    "socketDisconnected\0socketConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkAccessDebugPipeBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNetworkAccessDebugPipeBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNetworkAccessDebugPipeBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uploadReadyReadSlot(); break;
        case 1: _t->socketReadyRead(); break;
        case 2: _t->socketBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->socketError(); break;
        case 4: _t->socketDisconnected(); break;
        case 5: _t->socketConnected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNetworkAccessDebugPipeBackend::staticMetaObject = { {
    &QNetworkAccessBackend::staticMetaObject,
    qt_meta_stringdata_QNetworkAccessDebugPipeBackend.data,
    qt_meta_data_QNetworkAccessDebugPipeBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNetworkAccessDebugPipeBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessDebugPipeBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessDebugPipeBackend.stringdata0))
        return static_cast<void*>(this);
    return QNetworkAccessBackend::qt_metacast(_clname);
}

int QNetworkAccessDebugPipeBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessBackend::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
