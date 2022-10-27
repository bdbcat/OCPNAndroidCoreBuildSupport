/****************************************************************************
** Meta object code from reading C++ file 'qnetworkproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/network/kernel/qnetworkproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkProxyQuery_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkProxyQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkProxyQuery_t qt_meta_stringdata_QNetworkProxyQuery = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QNetworkProxyQuery"
QT_MOC_LITERAL(1, 19, 9), // "QueryType"
QT_MOC_LITERAL(2, 29, 9), // "TcpSocket"
QT_MOC_LITERAL(3, 39, 9), // "UdpSocket"
QT_MOC_LITERAL(4, 49, 10), // "SctpSocket"
QT_MOC_LITERAL(5, 60, 9), // "TcpServer"
QT_MOC_LITERAL(6, 70, 10), // "UrlRequest"
QT_MOC_LITERAL(7, 81, 10) // "SctpServer"

    },
    "QNetworkProxyQuery\0QueryType\0TcpSocket\0"
    "UdpSocket\0SctpSocket\0TcpServer\0"
    "UrlRequest\0SctpServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkProxyQuery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    6,   19,

 // enum data: key, value
       2, uint(QNetworkProxyQuery::TcpSocket),
       3, uint(QNetworkProxyQuery::UdpSocket),
       4, uint(QNetworkProxyQuery::SctpSocket),
       5, uint(QNetworkProxyQuery::TcpServer),
       6, uint(QNetworkProxyQuery::UrlRequest),
       7, uint(QNetworkProxyQuery::SctpServer),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject QNetworkProxyQuery::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QNetworkProxyQuery.data,
    qt_meta_data_QNetworkProxyQuery,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
