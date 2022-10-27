/****************************************************************************
** Meta object code from reading C++ file 'qandroidplatformdialoghelpers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qtbase/src/plugins/platforms/android/qandroidplatformdialoghelpers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qandroidplatformdialoghelpers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper_t {
    QByteArrayData data[4];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper_t qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 59), // "QtAndroidDialogHelpers::QAndr..."
QT_MOC_LITERAL(1, 60, 12), // "dialogResult"
QT_MOC_LITERAL(2, 73, 0), // ""
QT_MOC_LITERAL(3, 74, 8) // "buttonID"

    },
    "QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper\0"
    "dialogResult\0\0buttonID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAndroidPlatformMessageDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialogResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper::staticMetaObject = { {
    &QPlatformMessageDialogHelper::staticMetaObject,
    qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper.data,
    qt_meta_data_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAndroidDialogHelpers__QAndroidPlatformMessageDialogHelper.stringdata0))
        return static_cast<void*>(this);
    return QPlatformMessageDialogHelper::qt_metacast(_clname);
}

int QtAndroidDialogHelpers::QAndroidPlatformMessageDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMessageDialogHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
