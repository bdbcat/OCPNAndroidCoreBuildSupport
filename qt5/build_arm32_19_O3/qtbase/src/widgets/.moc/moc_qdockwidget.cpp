/****************************************************************************
** Meta object code from reading C++ file 'qdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/widgets/qdockwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDockWidget_t {
    QByteArrayData data[29];
    char stringdata0[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDockWidget_t qt_meta_stringdata_QDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QDockWidget"
QT_MOC_LITERAL(1, 12, 15), // "featuresChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 31), // "QDockWidget::DockWidgetFeatures"
QT_MOC_LITERAL(4, 61, 8), // "features"
QT_MOC_LITERAL(5, 70, 15), // "topLevelChanged"
QT_MOC_LITERAL(6, 86, 8), // "topLevel"
QT_MOC_LITERAL(7, 95, 19), // "allowedAreasChanged"
QT_MOC_LITERAL(8, 115, 19), // "Qt::DockWidgetAreas"
QT_MOC_LITERAL(9, 135, 12), // "allowedAreas"
QT_MOC_LITERAL(10, 148, 17), // "visibilityChanged"
QT_MOC_LITERAL(11, 166, 7), // "visible"
QT_MOC_LITERAL(12, 174, 19), // "dockLocationChanged"
QT_MOC_LITERAL(13, 194, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(14, 213, 4), // "area"
QT_MOC_LITERAL(15, 218, 13), // "_q_toggleView"
QT_MOC_LITERAL(16, 232, 17), // "_q_toggleTopLevel"
QT_MOC_LITERAL(17, 250, 8), // "floating"
QT_MOC_LITERAL(18, 259, 18), // "DockWidgetFeatures"
QT_MOC_LITERAL(19, 278, 11), // "windowTitle"
QT_MOC_LITERAL(20, 290, 17), // "DockWidgetFeature"
QT_MOC_LITERAL(21, 308, 18), // "DockWidgetClosable"
QT_MOC_LITERAL(22, 327, 17), // "DockWidgetMovable"
QT_MOC_LITERAL(23, 345, 19), // "DockWidgetFloatable"
QT_MOC_LITERAL(24, 365, 26), // "DockWidgetVerticalTitleBar"
QT_MOC_LITERAL(25, 392, 21), // "DockWidgetFeatureMask"
QT_MOC_LITERAL(26, 414, 21), // "AllDockWidgetFeatures"
QT_MOC_LITERAL(27, 436, 20), // "NoDockWidgetFeatures"
QT_MOC_LITERAL(28, 457, 8) // "Reserved"

    },
    "QDockWidget\0featuresChanged\0\0"
    "QDockWidget::DockWidgetFeatures\0"
    "features\0topLevelChanged\0topLevel\0"
    "allowedAreasChanged\0Qt::DockWidgetAreas\0"
    "allowedAreas\0visibilityChanged\0visible\0"
    "dockLocationChanged\0Qt::DockWidgetArea\0"
    "area\0_q_toggleView\0_q_toggleTopLevel\0"
    "floating\0DockWidgetFeatures\0windowTitle\0"
    "DockWidgetFeature\0DockWidgetClosable\0"
    "DockWidgetMovable\0DockWidgetFloatable\0"
    "DockWidgetVerticalTitleBar\0"
    "DockWidgetFeatureMask\0AllDockWidgetFeatures\0"
    "NoDockWidgetFeatures\0Reserved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   68, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      12,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   64,    2, 0x08 /* Private */,
      16,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095103,
       4, 0x80000000 | 18, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      19, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       2,
       0,

 // enums: name, alias, flags, count, data
      18,   20, 0x1,    8,   89,

 // enum data: key, value
      21, uint(QDockWidget::DockWidgetClosable),
      22, uint(QDockWidget::DockWidgetMovable),
      23, uint(QDockWidget::DockWidgetFloatable),
      24, uint(QDockWidget::DockWidgetVerticalTitleBar),
      25, uint(QDockWidget::DockWidgetFeatureMask),
      26, uint(QDockWidget::AllDockWidgetFeatures),
      27, uint(QDockWidget::NoDockWidgetFeatures),
      28, uint(QDockWidget::Reserved),

       0        // eod
};

void QDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->featuresChanged((*reinterpret_cast< QDockWidget::DockWidgetFeatures(*)>(_a[1]))); break;
        case 1: _t->topLevelChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->allowedAreasChanged((*reinterpret_cast< Qt::DockWidgetAreas(*)>(_a[1]))); break;
        case 3: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_toggleView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_toggleTopLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDockWidget::*)(QDockWidget::DockWidgetFeatures );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDockWidget::featuresChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDockWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDockWidget::topLevelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QDockWidget::*)(Qt::DockWidgetAreas );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDockWidget::allowedAreasChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QDockWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDockWidget::visibilityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QDockWidget::*)(Qt::DockWidgetArea );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDockWidget::dockLocationChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDockWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isFloating(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->features()); break;
        case 2: *reinterpret_cast< Qt::DockWidgetAreas*>(_v) = _t->allowedAreas(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDockWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFloating(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFeatures(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setAllowedAreas(*reinterpret_cast< Qt::DockWidgetAreas*>(_v)); break;
        case 3: _t->setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QDockWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QDockWidget.data,
    qt_meta_data_QDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDockWidget::topLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDockWidget::dockLocationChanged(Qt::DockWidgetArea _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
