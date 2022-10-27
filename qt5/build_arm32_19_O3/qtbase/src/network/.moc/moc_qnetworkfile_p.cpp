/****************************************************************************
** Meta object code from reading C++ file 'qnetworkfile_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/network/access/qnetworkfile_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkfile_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkFile_t {
    QByteArrayData data[13];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkFile_t qt_meta_stringdata_QNetworkFile = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QNetworkFile"
QT_MOC_LITERAL(1, 13, 8), // "finished"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "ok"
QT_MOC_LITERAL(4, 26, 10), // "headerRead"
QT_MOC_LITERAL(5, 37, 29), // "QNetworkRequest::KnownHeaders"
QT_MOC_LITERAL(6, 67, 6), // "header"
QT_MOC_LITERAL(7, 74, 5), // "value"
QT_MOC_LITERAL(8, 80, 5), // "error"
QT_MOC_LITERAL(9, 86, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 114, 7), // "message"
QT_MOC_LITERAL(11, 122, 4), // "open"
QT_MOC_LITERAL(12, 127, 5) // "close"

    },
    "QNetworkFile\0finished\0\0ok\0headerRead\0"
    "QNetworkRequest::KnownHeaders\0header\0"
    "value\0error\0QNetworkReply::NetworkError\0"
    "message\0open\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkFile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       8,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   52,    2, 0x0a /* Public */,
      12,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QVariant,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,    8,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNetworkFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNetworkFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->headerRead((*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->open(); break;
        case 4: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QNetworkFile::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkFile::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNetworkFile::*)(QNetworkRequest::KnownHeaders , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkFile::headerRead)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QNetworkFile::*)(QNetworkReply::NetworkError , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkFile::error)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNetworkFile::staticMetaObject = { {
    &QFile::staticMetaObject,
    qt_meta_stringdata_QNetworkFile.data,
    qt_meta_data_QNetworkFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNetworkFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkFile.stringdata0))
        return static_cast<void*>(this);
    return QFile::qt_metacast(_clname);
}

int QNetworkFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFile::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QNetworkFile::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkFile::headerRead(QNetworkRequest::KnownHeaders _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkFile::error(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
