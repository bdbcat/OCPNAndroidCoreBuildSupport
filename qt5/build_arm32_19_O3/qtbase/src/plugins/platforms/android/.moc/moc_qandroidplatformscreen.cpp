/****************************************************************************
** Meta object code from reading C++ file 'qandroidplatformscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qtbase/src/plugins/platforms/android/qandroidplatformscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qandroidplatformscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAndroidPlatformScreen_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAndroidPlatformScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAndroidPlatformScreen_t qt_meta_stringdata_QAndroidPlatformScreen = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QAndroidPlatformScreen"
QT_MOC_LITERAL(1, 23, 8), // "setDirty"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "rect"
QT_MOC_LITERAL(4, 38, 15), // "setPhysicalSize"
QT_MOC_LITERAL(5, 54, 4), // "size"
QT_MOC_LITERAL(6, 59, 20), // "setAvailableGeometry"
QT_MOC_LITERAL(7, 80, 7), // "setSize"
QT_MOC_LITERAL(8, 88, 8) // "doRedraw"

    },
    "QAndroidPlatformScreen\0setDirty\0\0rect\0"
    "setPhysicalSize\0size\0setAvailableGeometry\0"
    "setSize\0doRedraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAndroidPlatformScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void,

       0        // eod
};

void QAndroidPlatformScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAndroidPlatformScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDirty((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->setPhysicalSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->setAvailableGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->setSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 4: _t->doRedraw(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QAndroidPlatformScreen::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QAndroidPlatformScreen.data,
    qt_meta_data_QAndroidPlatformScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QAndroidPlatformScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAndroidPlatformScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAndroidPlatformScreen.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QPlatformScreen"))
        return static_cast< QPlatformScreen*>(this);
    if (!strcmp(_clname, "AndroidSurfaceClient"))
        return static_cast< AndroidSurfaceClient*>(this);
    return QObject::qt_metacast(_clname);
}

int QAndroidPlatformScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
