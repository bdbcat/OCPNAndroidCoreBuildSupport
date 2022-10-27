/****************************************************************************
** Meta object code from reading C++ file 'qandroidinputcontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qtbase/src/plugins/platforms/android/qandroidinputcontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qandroidinputcontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAndroidInputContext_t {
    QByteArrayData data[19];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAndroidInputContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAndroidInputContext_t qt_meta_stringdata_QAndroidInputContext = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QAndroidInputContext"
QT_MOC_LITERAL(1, 21, 8), // "safeCall"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "std::function<void()>"
QT_MOC_LITERAL(4, 53, 4), // "func"
QT_MOC_LITERAL(5, 58, 18), // "Qt::ConnectionType"
QT_MOC_LITERAL(6, 77, 7), // "conType"
QT_MOC_LITERAL(7, 85, 20), // "updateCursorPosition"
QT_MOC_LITERAL(8, 106, 22), // "updateSelectionHandles"
QT_MOC_LITERAL(9, 129, 21), // "handleLocationChanged"
QT_MOC_LITERAL(10, 151, 8), // "handleId"
QT_MOC_LITERAL(11, 160, 1), // "x"
QT_MOC_LITERAL(12, 162, 1), // "y"
QT_MOC_LITERAL(13, 164, 9), // "touchDown"
QT_MOC_LITERAL(14, 174, 9), // "longPress"
QT_MOC_LITERAL(15, 184, 7), // "keyDown"
QT_MOC_LITERAL(16, 192, 20), // "hideSelectionHandles"
QT_MOC_LITERAL(17, 213, 19), // "showInputPanelLater"
QT_MOC_LITERAL(18, 233, 20) // "Qt::ApplicationState"

    },
    "QAndroidInputContext\0safeCall\0\0"
    "std::function<void()>\0func\0"
    "Qt::ConnectionType\0conType\0"
    "updateCursorPosition\0updateSelectionHandles\0"
    "handleLocationChanged\0handleId\0x\0y\0"
    "touchDown\0longPress\0keyDown\0"
    "hideSelectionHandles\0showInputPanelLater\0"
    "Qt::ApplicationState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAndroidInputContext[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       1,    1,   69,    2, 0x2a /* Public | MethodCloned */,
       7,    0,   72,    2, 0x0a /* Public */,
       8,    0,   73,    2, 0x0a /* Public */,
       9,    3,   74,    2, 0x0a /* Public */,
      13,    2,   81,    2, 0x0a /* Public */,
      14,    2,   86,    2, 0x0a /* Public */,
      15,    0,   91,    2, 0x0a /* Public */,
      16,    0,   92,    2, 0x0a /* Public */,
      17,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    2,

       0        // eod
};

void QAndroidInputContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAndroidInputContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->safeCall((*reinterpret_cast< const std::function<void()>(*)>(_a[1])),(*reinterpret_cast< Qt::ConnectionType(*)>(_a[2]))); break;
        case 1: _t->safeCall((*reinterpret_cast< const std::function<void()>(*)>(_a[1]))); break;
        case 2: _t->updateCursorPosition(); break;
        case 3: _t->updateSelectionHandles(); break;
        case 4: _t->handleLocationChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->touchDown((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->longPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->keyDown(); break;
        case 8: _t->hideSelectionHandles(); break;
        case 9: _t->showInputPanelLater((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QAndroidInputContext::staticMetaObject = { {
    &QPlatformInputContext::staticMetaObject,
    qt_meta_stringdata_QAndroidInputContext.data,
    qt_meta_data_QAndroidInputContext,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QAndroidInputContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAndroidInputContext::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAndroidInputContext.stringdata0))
        return static_cast<void*>(this);
    return QPlatformInputContext::qt_metacast(_clname);
}

int QAndroidInputContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformInputContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
