/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/network/access/qnetworkreply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkReply_t {
    QByteArrayData data[51];
    char stringdata0[972];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkReply_t qt_meta_stringdata_QNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QNetworkReply"
QT_MOC_LITERAL(1, 14, 15), // "metaDataChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "finished"
QT_MOC_LITERAL(4, 40, 5), // "error"
QT_MOC_LITERAL(5, 46, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 74, 10), // "redirected"
QT_MOC_LITERAL(7, 85, 3), // "url"
QT_MOC_LITERAL(8, 89, 15), // "redirectAllowed"
QT_MOC_LITERAL(9, 105, 14), // "uploadProgress"
QT_MOC_LITERAL(10, 120, 9), // "bytesSent"
QT_MOC_LITERAL(11, 130, 10), // "bytesTotal"
QT_MOC_LITERAL(12, 141, 16), // "downloadProgress"
QT_MOC_LITERAL(13, 158, 13), // "bytesReceived"
QT_MOC_LITERAL(14, 172, 5), // "abort"
QT_MOC_LITERAL(15, 178, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(16, 194, 12), // "NetworkError"
QT_MOC_LITERAL(17, 207, 7), // "NoError"
QT_MOC_LITERAL(18, 215, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(19, 238, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(20, 260, 17), // "HostNotFoundError"
QT_MOC_LITERAL(21, 278, 12), // "TimeoutError"
QT_MOC_LITERAL(22, 291, 22), // "OperationCanceledError"
QT_MOC_LITERAL(23, 314, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(24, 338, 28), // "TemporaryNetworkFailureError"
QT_MOC_LITERAL(25, 367, 25), // "NetworkSessionFailedError"
QT_MOC_LITERAL(26, 393, 32), // "BackgroundRequestNotAllowedError"
QT_MOC_LITERAL(27, 426, 21), // "TooManyRedirectsError"
QT_MOC_LITERAL(28, 448, 21), // "InsecureRedirectError"
QT_MOC_LITERAL(29, 470, 19), // "UnknownNetworkError"
QT_MOC_LITERAL(30, 490, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(31, 518, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(32, 545, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(33, 564, 17), // "ProxyTimeoutError"
QT_MOC_LITERAL(34, 582, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(35, 615, 17), // "UnknownProxyError"
QT_MOC_LITERAL(36, 633, 19), // "ContentAccessDenied"
QT_MOC_LITERAL(37, 653, 33), // "ContentOperationNotPermittedE..."
QT_MOC_LITERAL(38, 687, 20), // "ContentNotFoundError"
QT_MOC_LITERAL(39, 708, 27), // "AuthenticationRequiredError"
QT_MOC_LITERAL(40, 736, 18), // "ContentReSendError"
QT_MOC_LITERAL(41, 755, 20), // "ContentConflictError"
QT_MOC_LITERAL(42, 776, 16), // "ContentGoneError"
QT_MOC_LITERAL(43, 793, 19), // "UnknownContentError"
QT_MOC_LITERAL(44, 813, 20), // "ProtocolUnknownError"
QT_MOC_LITERAL(45, 834, 29), // "ProtocolInvalidOperationError"
QT_MOC_LITERAL(46, 864, 15), // "ProtocolFailure"
QT_MOC_LITERAL(47, 880, 19), // "InternalServerError"
QT_MOC_LITERAL(48, 900, 28), // "OperationNotImplementedError"
QT_MOC_LITERAL(49, 929, 23), // "ServiceUnavailableError"
QT_MOC_LITERAL(50, 953, 18) // "UnknownServerError"

    },
    "QNetworkReply\0metaDataChanged\0\0finished\0"
    "error\0QNetworkReply::NetworkError\0"
    "redirected\0url\0redirectAllowed\0"
    "uploadProgress\0bytesSent\0bytesTotal\0"
    "downloadProgress\0bytesReceived\0abort\0"
    "ignoreSslErrors\0NetworkError\0NoError\0"
    "ConnectionRefusedError\0RemoteHostClosedError\0"
    "HostNotFoundError\0TimeoutError\0"
    "OperationCanceledError\0SslHandshakeFailedError\0"
    "TemporaryNetworkFailureError\0"
    "NetworkSessionFailedError\0"
    "BackgroundRequestNotAllowedError\0"
    "TooManyRedirectsError\0InsecureRedirectError\0"
    "UnknownNetworkError\0ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyNotFoundError\0ProxyTimeoutError\0"
    "ProxyAuthenticationRequiredError\0"
    "UnknownProxyError\0ContentAccessDenied\0"
    "ContentOperationNotPermittedError\0"
    "ContentNotFoundError\0AuthenticationRequiredError\0"
    "ContentReSendError\0ContentConflictError\0"
    "ContentGoneError\0UnknownContentError\0"
    "ProtocolUnknownError\0ProtocolInvalidOperationError\0"
    "ProtocolFailure\0InternalServerError\0"
    "OperationNotImplementedError\0"
    "ServiceUnavailableError\0UnknownServerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkReply[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,
       9,    2,   68,    2, 0x06 /* Public */,
      12,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   78,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   10,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   13,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,   34,   85,

 // enum data: key, value
      17, uint(QNetworkReply::NoError),
      18, uint(QNetworkReply::ConnectionRefusedError),
      19, uint(QNetworkReply::RemoteHostClosedError),
      20, uint(QNetworkReply::HostNotFoundError),
      21, uint(QNetworkReply::TimeoutError),
      22, uint(QNetworkReply::OperationCanceledError),
      23, uint(QNetworkReply::SslHandshakeFailedError),
      24, uint(QNetworkReply::TemporaryNetworkFailureError),
      25, uint(QNetworkReply::NetworkSessionFailedError),
      26, uint(QNetworkReply::BackgroundRequestNotAllowedError),
      27, uint(QNetworkReply::TooManyRedirectsError),
      28, uint(QNetworkReply::InsecureRedirectError),
      29, uint(QNetworkReply::UnknownNetworkError),
      30, uint(QNetworkReply::ProxyConnectionRefusedError),
      31, uint(QNetworkReply::ProxyConnectionClosedError),
      32, uint(QNetworkReply::ProxyNotFoundError),
      33, uint(QNetworkReply::ProxyTimeoutError),
      34, uint(QNetworkReply::ProxyAuthenticationRequiredError),
      35, uint(QNetworkReply::UnknownProxyError),
      36, uint(QNetworkReply::ContentAccessDenied),
      37, uint(QNetworkReply::ContentOperationNotPermittedError),
      38, uint(QNetworkReply::ContentNotFoundError),
      39, uint(QNetworkReply::AuthenticationRequiredError),
      40, uint(QNetworkReply::ContentReSendError),
      41, uint(QNetworkReply::ContentConflictError),
      42, uint(QNetworkReply::ContentGoneError),
      43, uint(QNetworkReply::UnknownContentError),
      44, uint(QNetworkReply::ProtocolUnknownError),
      45, uint(QNetworkReply::ProtocolInvalidOperationError),
      46, uint(QNetworkReply::ProtocolFailure),
      47, uint(QNetworkReply::InternalServerError),
      48, uint(QNetworkReply::OperationNotImplementedError),
      49, uint(QNetworkReply::ServiceUnavailableError),
      50, uint(QNetworkReply::UnknownServerError),

       0        // eod
};

void QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNetworkReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaDataChanged(); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 3: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->redirectAllowed(); break;
        case 5: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->abort(); break;
        case 8: _t->ignoreSslErrors(); break;
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
            using _t = void (QNetworkReply::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::metaDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::redirected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::redirectAllowed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::uploadProgress)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QNetworkReply::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNetworkReply::downloadProgress)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNetworkReply::staticMetaObject = { {
    &QIODevice::staticMetaObject,
    qt_meta_stringdata_QNetworkReply.data,
    qt_meta_data_QNetworkReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReply.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QNetworkReply::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNetworkReply::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkReply::redirected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkReply::redirectAllowed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QNetworkReply::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QNetworkReply::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
