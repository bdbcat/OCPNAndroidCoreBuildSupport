/****************************************************************************
** Meta object code from reading C++ file 'qcombobox_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/widgets/qcombobox_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcombobox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QComboBoxListView_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBoxListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBoxListView_t qt_meta_stringdata_QComboBoxListView = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QComboBoxListView"

    },
    "QComboBoxListView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxListView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QComboBoxListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QComboBoxListView::staticMetaObject = { {
    &QListView::staticMetaObject,
    qt_meta_stringdata_QComboBoxListView.data,
    qt_meta_data_QComboBoxListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBoxListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int QComboBoxListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QComboBoxPrivateScroller_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBoxPrivateScroller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBoxPrivateScroller_t qt_meta_stringdata_QComboBoxPrivateScroller = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QComboBoxPrivateScroller"
QT_MOC_LITERAL(1, 25, 8), // "doScroll"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6) // "action"

    },
    "QComboBoxPrivateScroller\0doScroll\0\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxPrivateScroller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QComboBoxPrivateScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBoxPrivateScroller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QComboBoxPrivateScroller::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBoxPrivateScroller::doScroll)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QComboBoxPrivateScroller::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QComboBoxPrivateScroller.data,
    qt_meta_data_QComboBoxPrivateScroller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBoxPrivateScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxPrivateScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxPrivateScroller.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QComboBoxPrivateScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QComboBoxPrivateScroller::doScroll(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QComboBoxPrivateContainer_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBoxPrivateContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBoxPrivateContainer_t qt_meta_stringdata_QComboBoxPrivateContainer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QComboBoxPrivateContainer"
QT_MOC_LITERAL(1, 26, 12), // "itemSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 52, 11), // "resetButton"
QT_MOC_LITERAL(5, 64, 14), // "scrollItemView"
QT_MOC_LITERAL(6, 79, 6), // "action"
QT_MOC_LITERAL(7, 86, 13), // "hideScrollers"
QT_MOC_LITERAL(8, 100, 15), // "updateScrollers"
QT_MOC_LITERAL(9, 116, 13) // "viewDestroyed"

    },
    "QComboBoxPrivateContainer\0itemSelected\0"
    "\0QModelIndex\0resetButton\0scrollItemView\0"
    "action\0hideScrollers\0updateScrollers\0"
    "viewDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxPrivateContainer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QComboBoxPrivateContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBoxPrivateContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->resetButton(); break;
        case 2: _t->scrollItemView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hideScrollers(); break;
        case 4: _t->updateScrollers(); break;
        case 5: _t->viewDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QComboBoxPrivateContainer::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBoxPrivateContainer::itemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QComboBoxPrivateContainer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBoxPrivateContainer::resetButton)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QComboBoxPrivateContainer::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_QComboBoxPrivateContainer.data,
    qt_meta_data_QComboBoxPrivateContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBoxPrivateContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxPrivateContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxPrivateContainer.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QComboBoxPrivateContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QComboBoxPrivateContainer::itemSelected(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QComboBoxPrivateContainer::resetButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QComboMenuDelegate_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboMenuDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboMenuDelegate_t qt_meta_stringdata_QComboMenuDelegate = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QComboMenuDelegate"

    },
    "QComboMenuDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboMenuDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QComboMenuDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QComboMenuDelegate::staticMetaObject = { {
    &QAbstractItemDelegate::staticMetaObject,
    qt_meta_stringdata_QComboMenuDelegate.data,
    qt_meta_data_QComboMenuDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboMenuDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboMenuDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboMenuDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int QComboMenuDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QComboBoxDelegate_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBoxDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBoxDelegate_t qt_meta_stringdata_QComboBoxDelegate = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QComboBoxDelegate"

    },
    "QComboBoxDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QComboBoxDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QComboBoxDelegate::staticMetaObject = { {
    &QItemDelegate::staticMetaObject,
    qt_meta_stringdata_QComboBoxDelegate.data,
    qt_meta_data_QComboBoxDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBoxDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int QComboBoxDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
