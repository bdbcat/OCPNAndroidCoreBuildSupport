/****************************************************************************
** Meta object code from reading C++ file 'qplatformsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/gui/kernel/qplatformsystemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsystemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPlatformSystemTrayIcon_t {
    QByteArrayData data[21];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformSystemTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformSystemTrayIcon_t qt_meta_stringdata_QPlatformSystemTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QPlatformSystemTrayIcon"
QT_MOC_LITERAL(1, 24, 9), // "activated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 41), // "QPlatformSystemTrayIcon::Acti..."
QT_MOC_LITERAL(4, 77, 6), // "reason"
QT_MOC_LITERAL(5, 84, 20), // "contextMenuRequested"
QT_MOC_LITERAL(6, 105, 9), // "globalPos"
QT_MOC_LITERAL(7, 115, 22), // "const QPlatformScreen*"
QT_MOC_LITERAL(8, 138, 6), // "screen"
QT_MOC_LITERAL(9, 145, 14), // "messageClicked"
QT_MOC_LITERAL(10, 160, 16), // "ActivationReason"
QT_MOC_LITERAL(11, 177, 7), // "Unknown"
QT_MOC_LITERAL(12, 185, 7), // "Context"
QT_MOC_LITERAL(13, 193, 11), // "DoubleClick"
QT_MOC_LITERAL(14, 205, 7), // "Trigger"
QT_MOC_LITERAL(15, 213, 11), // "MiddleClick"
QT_MOC_LITERAL(16, 225, 11), // "MessageIcon"
QT_MOC_LITERAL(17, 237, 6), // "NoIcon"
QT_MOC_LITERAL(18, 244, 11), // "Information"
QT_MOC_LITERAL(19, 256, 7), // "Warning"
QT_MOC_LITERAL(20, 264, 8) // "Critical"

    },
    "QPlatformSystemTrayIcon\0activated\0\0"
    "QPlatformSystemTrayIcon::ActivationReason\0"
    "reason\0contextMenuRequested\0globalPos\0"
    "const QPlatformScreen*\0screen\0"
    "messageClicked\0ActivationReason\0Unknown\0"
    "Context\0DoubleClick\0Trigger\0MiddleClick\0"
    "MessageIcon\0NoIcon\0Information\0Warning\0"
    "Critical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformSystemTrayIcon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,
       9,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    5,   48,
      16,   16, 0x0,    4,   58,

 // enum data: key, value
      11, uint(QPlatformSystemTrayIcon::Unknown),
      12, uint(QPlatformSystemTrayIcon::Context),
      13, uint(QPlatformSystemTrayIcon::DoubleClick),
      14, uint(QPlatformSystemTrayIcon::Trigger),
      15, uint(QPlatformSystemTrayIcon::MiddleClick),
      17, uint(QPlatformSystemTrayIcon::NoIcon),
      18, uint(QPlatformSystemTrayIcon::Information),
      19, uint(QPlatformSystemTrayIcon::Warning),
      20, uint(QPlatformSystemTrayIcon::Critical),

       0        // eod
};

void QPlatformSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPlatformSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< QPlatformSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< const QPlatformScreen*(*)>(_a[2]))); break;
        case 2: _t->messageClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPlatformSystemTrayIcon::*)(QPlatformSystemTrayIcon::ActivationReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlatformSystemTrayIcon::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPlatformSystemTrayIcon::*)(QPoint , const QPlatformScreen * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlatformSystemTrayIcon::contextMenuRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QPlatformSystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlatformSystemTrayIcon::messageClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPlatformSystemTrayIcon::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QPlatformSystemTrayIcon.data,
    qt_meta_data_QPlatformSystemTrayIcon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPlatformSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformSystemTrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QPlatformSystemTrayIcon::activated(QPlatformSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSystemTrayIcon::contextMenuRequested(QPoint _t1, const QPlatformScreen * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
