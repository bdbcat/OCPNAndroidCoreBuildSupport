/****************************************************************************
** Meta object code from reading C++ file 'qnetworkinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/network/kernel/qnetworkinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNetworkInterface_t {
    QByteArrayData data[25];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkInterface_t qt_meta_stringdata_QNetworkInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QNetworkInterface"
QT_MOC_LITERAL(1, 18, 14), // "InterfaceFlags"
QT_MOC_LITERAL(2, 33, 13), // "InterfaceFlag"
QT_MOC_LITERAL(3, 47, 4), // "IsUp"
QT_MOC_LITERAL(4, 52, 9), // "IsRunning"
QT_MOC_LITERAL(5, 62, 12), // "CanBroadcast"
QT_MOC_LITERAL(6, 75, 10), // "IsLoopBack"
QT_MOC_LITERAL(7, 86, 14), // "IsPointToPoint"
QT_MOC_LITERAL(8, 101, 12), // "CanMulticast"
QT_MOC_LITERAL(9, 114, 13), // "InterfaceType"
QT_MOC_LITERAL(10, 128, 8), // "Loopback"
QT_MOC_LITERAL(11, 137, 7), // "Virtual"
QT_MOC_LITERAL(12, 145, 8), // "Ethernet"
QT_MOC_LITERAL(13, 154, 4), // "Slip"
QT_MOC_LITERAL(14, 159, 6), // "CanBus"
QT_MOC_LITERAL(15, 166, 3), // "Ppp"
QT_MOC_LITERAL(16, 170, 4), // "Fddi"
QT_MOC_LITERAL(17, 175, 4), // "Wifi"
QT_MOC_LITERAL(18, 180, 9), // "Ieee80211"
QT_MOC_LITERAL(19, 190, 6), // "Phonet"
QT_MOC_LITERAL(20, 197, 10), // "Ieee802154"
QT_MOC_LITERAL(21, 208, 9), // "SixLoWPAN"
QT_MOC_LITERAL(22, 218, 9), // "Ieee80216"
QT_MOC_LITERAL(23, 228, 8), // "Ieee1394"
QT_MOC_LITERAL(24, 237, 7) // "Unknown"

    },
    "QNetworkInterface\0InterfaceFlags\0"
    "InterfaceFlag\0IsUp\0IsRunning\0CanBroadcast\0"
    "IsLoopBack\0IsPointToPoint\0CanMulticast\0"
    "InterfaceType\0Loopback\0Virtual\0Ethernet\0"
    "Slip\0CanBus\0Ppp\0Fddi\0Wifi\0Ieee80211\0"
    "Phonet\0Ieee802154\0SixLoWPAN\0Ieee80216\0"
    "Ieee1394\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    2, 0x1,    6,   24,
       9,    9, 0x0,   15,   36,

 // enum data: key, value
       3, uint(QNetworkInterface::IsUp),
       4, uint(QNetworkInterface::IsRunning),
       5, uint(QNetworkInterface::CanBroadcast),
       6, uint(QNetworkInterface::IsLoopBack),
       7, uint(QNetworkInterface::IsPointToPoint),
       8, uint(QNetworkInterface::CanMulticast),
      10, uint(QNetworkInterface::Loopback),
      11, uint(QNetworkInterface::Virtual),
      12, uint(QNetworkInterface::Ethernet),
      13, uint(QNetworkInterface::Slip),
      14, uint(QNetworkInterface::CanBus),
      15, uint(QNetworkInterface::Ppp),
      16, uint(QNetworkInterface::Fddi),
      17, uint(QNetworkInterface::Wifi),
      18, uint(QNetworkInterface::Ieee80211),
      19, uint(QNetworkInterface::Phonet),
      20, uint(QNetworkInterface::Ieee802154),
      21, uint(QNetworkInterface::SixLoWPAN),
      22, uint(QNetworkInterface::Ieee80216),
      23, uint(QNetworkInterface::Ieee1394),
      24, uint(QNetworkInterface::Unknown),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject QNetworkInterface::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QNetworkInterface.data,
    qt_meta_data_QNetworkInterface,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
