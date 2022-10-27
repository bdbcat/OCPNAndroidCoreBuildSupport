/****************************************************************************
** Meta object code from reading C++ file 'qspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/widgets/qspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSpinBox_t {
    QByteArrayData data[15];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpinBox_t qt_meta_stringdata_QSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QSpinBox"
QT_MOC_LITERAL(1, 9, 12), // "valueChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "setValue"
QT_MOC_LITERAL(4, 32, 3), // "val"
QT_MOC_LITERAL(5, 36, 6), // "suffix"
QT_MOC_LITERAL(6, 43, 6), // "prefix"
QT_MOC_LITERAL(7, 50, 9), // "cleanText"
QT_MOC_LITERAL(8, 60, 7), // "minimum"
QT_MOC_LITERAL(9, 68, 7), // "maximum"
QT_MOC_LITERAL(10, 76, 10), // "singleStep"
QT_MOC_LITERAL(11, 87, 8), // "stepType"
QT_MOC_LITERAL(12, 96, 8), // "StepType"
QT_MOC_LITERAL(13, 105, 5), // "value"
QT_MOC_LITERAL(14, 111, 18) // "displayIntegerBase"

    },
    "QSpinBox\0valueChanged\0\0setValue\0val\0"
    "suffix\0prefix\0cleanText\0minimum\0maximum\0"
    "singleStep\0stepType\0StepType\0value\0"
    "displayIntegerBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       1,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::Int, 0x00595103,
      14, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSpinBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSpinBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSpinBox::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 6: *reinterpret_cast< StepType*>(_v) = _t->stepType(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->displayIntegerBase(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setStepType(*reinterpret_cast< StepType*>(_v)); break;
        case 7: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setDisplayIntegerBase(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QSpinBox::staticMetaObject = { {
    &QAbstractSpinBox::staticMetaObject,
    qt_meta_stringdata_QSpinBox.data,
    qt_meta_data_QSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSpinBox::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QDoubleSpinBox_t {
    QByteArrayData data[15];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSpinBox_t qt_meta_stringdata_QDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QDoubleSpinBox"
QT_MOC_LITERAL(1, 15, 12), // "valueChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "setValue"
QT_MOC_LITERAL(4, 38, 3), // "val"
QT_MOC_LITERAL(5, 42, 6), // "prefix"
QT_MOC_LITERAL(6, 49, 6), // "suffix"
QT_MOC_LITERAL(7, 56, 9), // "cleanText"
QT_MOC_LITERAL(8, 66, 8), // "decimals"
QT_MOC_LITERAL(9, 75, 7), // "minimum"
QT_MOC_LITERAL(10, 83, 7), // "maximum"
QT_MOC_LITERAL(11, 91, 10), // "singleStep"
QT_MOC_LITERAL(12, 102, 8), // "stepType"
QT_MOC_LITERAL(13, 111, 8), // "StepType"
QT_MOC_LITERAL(14, 120, 5) // "value"

    },
    "QDoubleSpinBox\0valueChanged\0\0setValue\0"
    "val\0prefix\0suffix\0cleanText\0decimals\0"
    "minimum\0maximum\0singleStep\0stepType\0"
    "StepType\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       1,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Double, 0x00595103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDoubleSpinBox::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDoubleSpinBox::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QDoubleSpinBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDoubleSpinBox::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 7: *reinterpret_cast< StepType*>(_v) = _t->stepType(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setStepType(*reinterpret_cast< StepType*>(_v)); break;
        case 8: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QDoubleSpinBox::staticMetaObject = { {
    &QAbstractSpinBox::staticMetaObject,
    qt_meta_stringdata_QDoubleSpinBox.data,
    qt_meta_data_QDoubleSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDoubleSpinBox::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
