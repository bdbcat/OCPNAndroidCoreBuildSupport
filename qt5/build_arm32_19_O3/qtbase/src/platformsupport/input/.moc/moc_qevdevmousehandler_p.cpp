/****************************************************************************
** Meta object code from reading C++ file 'qevdevmousehandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../qtbase/src/platformsupport/input/evdevmouse/qevdevmousehandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevmousehandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QEvdevMouseHandler_t {
    QByteArrayData data[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevMouseHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevMouseHandler_t qt_meta_stringdata_QEvdevMouseHandler = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEvdevMouseHandler"
QT_MOC_LITERAL(1, 19, 16), // "handleMouseEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "x"
QT_MOC_LITERAL(4, 39, 1), // "y"
QT_MOC_LITERAL(5, 41, 3), // "abs"
QT_MOC_LITERAL(6, 45, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(7, 62, 7), // "buttons"
QT_MOC_LITERAL(8, 70, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(9, 86, 6), // "button"
QT_MOC_LITERAL(10, 93, 12), // "QEvent::Type"
QT_MOC_LITERAL(11, 106, 4), // "type"
QT_MOC_LITERAL(12, 111, 16), // "handleWheelEvent"
QT_MOC_LITERAL(13, 128, 5) // "delta"

    },
    "QEvdevMouseHandler\0handleMouseEvent\0"
    "\0x\0y\0abs\0Qt::MouseButtons\0buttons\0"
    "Qt::MouseButton\0button\0QEvent::Type\0"
    "type\0handleWheelEvent\0delta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevMouseHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   24,    2, 0x06 /* Public */,
      12,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10,    3,    4,    5,    7,    9,   11,
    QMetaType::Void, QMetaType::QPoint,   13,

       0        // eod
};

void QEvdevMouseHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QEvdevMouseHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[5])),(*reinterpret_cast< QEvent::Type(*)>(_a[6]))); break;
        case 1: _t->handleWheelEvent((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QEvdevMouseHandler::*)(int , int , bool , Qt::MouseButtons , Qt::MouseButton , QEvent::Type );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QEvdevMouseHandler::handleMouseEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QEvdevMouseHandler::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QEvdevMouseHandler::handleWheelEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QEvdevMouseHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QEvdevMouseHandler.data,
    qt_meta_data_QEvdevMouseHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QEvdevMouseHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevMouseHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevMouseHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QEvdevMouseHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QEvdevMouseHandler::handleMouseEvent(int _t1, int _t2, bool _t3, Qt::MouseButtons _t4, Qt::MouseButton _t5, QEvent::Type _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEvdevMouseHandler::handleWheelEvent(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
