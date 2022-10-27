/****************************************************************************
** Meta object code from reading C++ file 'qundostack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/util/qundostack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundostack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QUndoStack_t {
    QByteArrayData data[22];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QUndoStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QUndoStack_t qt_meta_stringdata_QUndoStack = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QUndoStack"
QT_MOC_LITERAL(1, 11, 12), // "indexChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "idx"
QT_MOC_LITERAL(4, 29, 12), // "cleanChanged"
QT_MOC_LITERAL(5, 42, 5), // "clean"
QT_MOC_LITERAL(6, 48, 14), // "canUndoChanged"
QT_MOC_LITERAL(7, 63, 7), // "canUndo"
QT_MOC_LITERAL(8, 71, 14), // "canRedoChanged"
QT_MOC_LITERAL(9, 86, 7), // "canRedo"
QT_MOC_LITERAL(10, 94, 15), // "undoTextChanged"
QT_MOC_LITERAL(11, 110, 8), // "undoText"
QT_MOC_LITERAL(12, 119, 15), // "redoTextChanged"
QT_MOC_LITERAL(13, 135, 8), // "redoText"
QT_MOC_LITERAL(14, 144, 8), // "setClean"
QT_MOC_LITERAL(15, 153, 10), // "resetClean"
QT_MOC_LITERAL(16, 164, 8), // "setIndex"
QT_MOC_LITERAL(17, 173, 4), // "undo"
QT_MOC_LITERAL(18, 178, 4), // "redo"
QT_MOC_LITERAL(19, 183, 9), // "setActive"
QT_MOC_LITERAL(20, 193, 6), // "active"
QT_MOC_LITERAL(21, 200, 9) // "undoLimit"

    },
    "QUndoStack\0indexChanged\0\0idx\0cleanChanged\0"
    "clean\0canUndoChanged\0canUndo\0"
    "canRedoChanged\0canRedo\0undoTextChanged\0"
    "undoText\0redoTextChanged\0redoText\0"
    "setClean\0resetClean\0setIndex\0undo\0"
    "redo\0setActive\0active\0undoLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QUndoStack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,
      10,    1,   91,    2, 0x06 /* Public */,
      12,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   97,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x0a /* Public */,
      16,    1,   99,    2, 0x0a /* Public */,
      17,    0,  102,    2, 0x0a /* Public */,
      18,    0,  103,    2, 0x0a /* Public */,
      19,    1,  104,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Int, 0x00095103,
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       2,
       3,
       4,
       5,
       1,

       0        // eod
};

void QUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QUndoStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setClean(); break;
        case 7: _t->resetClean(); break;
        case 8: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->undo(); break;
        case 10: _t->redo(); break;
        case 11: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QUndoStack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::cleanChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::canUndoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::canRedoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::undoTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QUndoStack::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QUndoStack::redoTextChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QUndoStack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->undoLimit(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canUndo(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canRedo(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->undoText(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->redoText(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isClean(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QUndoStack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUndoLimit(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QUndoStack::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QUndoStack.data,
    qt_meta_data_QUndoStack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoStack.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QUndoStack::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QUndoStack::cleanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QUndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QUndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QUndoStack::undoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QUndoStack::redoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
