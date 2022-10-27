/****************************************************************************
** Meta object code from reading C++ file 'qcompleter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/util/qcompleter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcompleter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCompleter_t {
    QByteArrayData data[31];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCompleter_t qt_meta_stringdata_QCompleter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QCompleter"
QT_MOC_LITERAL(1, 11, 9), // "activated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "text"
QT_MOC_LITERAL(4, 27, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 39, 5), // "index"
QT_MOC_LITERAL(6, 45, 11), // "highlighted"
QT_MOC_LITERAL(7, 57, 19), // "setCompletionPrefix"
QT_MOC_LITERAL(8, 77, 6), // "prefix"
QT_MOC_LITERAL(9, 84, 8), // "complete"
QT_MOC_LITERAL(10, 93, 4), // "rect"
QT_MOC_LITERAL(11, 98, 13), // "setWrapAround"
QT_MOC_LITERAL(12, 112, 4), // "wrap"
QT_MOC_LITERAL(13, 117, 11), // "_q_complete"
QT_MOC_LITERAL(14, 129, 21), // "_q_completionSelected"
QT_MOC_LITERAL(15, 151, 14), // "QItemSelection"
QT_MOC_LITERAL(16, 166, 18), // "_q_autoResizePopup"
QT_MOC_LITERAL(17, 185, 33), // "_q_fileSystemModelDirectoryLo..."
QT_MOC_LITERAL(18, 219, 16), // "completionPrefix"
QT_MOC_LITERAL(19, 236, 12), // "modelSorting"
QT_MOC_LITERAL(20, 249, 12), // "ModelSorting"
QT_MOC_LITERAL(21, 262, 10), // "filterMode"
QT_MOC_LITERAL(22, 273, 14), // "Qt::MatchFlags"
QT_MOC_LITERAL(23, 288, 14), // "completionMode"
QT_MOC_LITERAL(24, 303, 14), // "CompletionMode"
QT_MOC_LITERAL(25, 318, 16), // "completionColumn"
QT_MOC_LITERAL(26, 335, 14), // "completionRole"
QT_MOC_LITERAL(27, 350, 15), // "maxVisibleItems"
QT_MOC_LITERAL(28, 366, 15), // "caseSensitivity"
QT_MOC_LITERAL(29, 382, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(30, 402, 10) // "wrapAround"

    },
    "QCompleter\0activated\0\0text\0QModelIndex\0"
    "index\0highlighted\0setCompletionPrefix\0"
    "prefix\0complete\0rect\0setWrapAround\0"
    "wrap\0_q_complete\0_q_completionSelected\0"
    "QItemSelection\0_q_autoResizePopup\0"
    "_q_fileSystemModelDirectoryLoaded\0"
    "completionPrefix\0modelSorting\0"
    "ModelSorting\0filterMode\0Qt::MatchFlags\0"
    "completionMode\0CompletionMode\0"
    "completionColumn\0completionRole\0"
    "maxVisibleItems\0caseSensitivity\0"
    "Qt::CaseSensitivity\0wrapAround"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCompleter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       1,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   86,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   93,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,
      21, 0x80000000 | 22, 0x0009510b,
      23, 0x80000000 | 24, 0x0009510b,
      25, QMetaType::Int, 0x00095103,
      26, QMetaType::Int, 0x00095103,
      27, QMetaType::Int, 0x00095103,
      28, 0x80000000 | 29, 0x0009510b,
      30, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCompleter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->setCompletionPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->complete((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 6: _t->complete(); break;
        case 7: _t->setWrapAround((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_complete((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 9: _t->d_func()->_q_completionSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 10: _t->d_func()->_q_autoResizePopup(); break;
        case 11: _t->d_func()->_q_fileSystemModelDirectoryLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCompleter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCompleter::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCompleter::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCompleter::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCompleter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCompleter::highlighted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCompleter::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCompleter::highlighted)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCompleter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->completionPrefix(); break;
        case 1: *reinterpret_cast< ModelSorting*>(_v) = _t->modelSorting(); break;
        case 2: *reinterpret_cast< Qt::MatchFlags*>(_v) = _t->filterMode(); break;
        case 3: *reinterpret_cast< CompletionMode*>(_v) = _t->completionMode(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->completionColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->completionRole(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->maxVisibleItems(); break;
        case 7: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->caseSensitivity(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->wrapAround(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCompleter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCompletionPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setModelSorting(*reinterpret_cast< ModelSorting*>(_v)); break;
        case 2: _t->setFilterMode(*reinterpret_cast< Qt::MatchFlags*>(_v)); break;
        case 3: _t->setCompletionMode(*reinterpret_cast< CompletionMode*>(_v)); break;
        case 4: _t->setCompletionColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCompletionRole(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMaxVisibleItems(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 8: _t->setWrapAround(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QCompleter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QCompleter.data,
    qt_meta_data_QCompleter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCompleter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void QCompleter::activated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCompleter::activated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCompleter::highlighted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCompleter::highlighted(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
