/****************************************************************************
** Meta object code from reading C++ file 'qsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/util/qsystemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsystemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSystemTrayIcon_t {
    QByteArrayData data[19];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSystemTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSystemTrayIcon_t qt_meta_stringdata_QSystemTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QSystemTrayIcon"
QT_MOC_LITERAL(1, 16, 9), // "activated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(4, 61, 6), // "reason"
QT_MOC_LITERAL(5, 68, 14), // "messageClicked"
QT_MOC_LITERAL(6, 83, 10), // "setVisible"
QT_MOC_LITERAL(7, 94, 7), // "visible"
QT_MOC_LITERAL(8, 102, 4), // "show"
QT_MOC_LITERAL(9, 107, 4), // "hide"
QT_MOC_LITERAL(10, 112, 11), // "showMessage"
QT_MOC_LITERAL(11, 124, 5), // "title"
QT_MOC_LITERAL(12, 130, 3), // "msg"
QT_MOC_LITERAL(13, 134, 4), // "icon"
QT_MOC_LITERAL(14, 139, 5), // "msecs"
QT_MOC_LITERAL(15, 145, 28), // "QSystemTrayIcon::MessageIcon"
QT_MOC_LITERAL(16, 174, 16), // "_q_emitActivated"
QT_MOC_LITERAL(17, 191, 41), // "QPlatformSystemTrayIcon::Acti..."
QT_MOC_LITERAL(18, 233, 7) // "toolTip"

    },
    "QSystemTrayIcon\0activated\0\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0messageClicked\0setVisible\0"
    "visible\0show\0hide\0showMessage\0title\0"
    "msg\0icon\0msecs\0QSystemTrayIcon::MessageIcon\0"
    "_q_emitActivated\0"
    "QPlatformSystemTrayIcon::ActivationReason\0"
    "toolTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSystemTrayIcon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    4,   78,    2, 0x0a /* Public */,
      10,    3,   87,    2, 0x2a /* Public | MethodCloned */,
      10,    4,   94,    2, 0x0a /* Public */,
      10,    3,  103,    2, 0x2a /* Public | MethodCloned */,
      10,    2,  110,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QIcon,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 15, QMetaType::Int,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 15,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 17,    2,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095103,
      13, QMetaType::QIcon, 0x00095103,
       7, QMetaType::Bool, 0x00094103,

       0        // eod
};

void QSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->messageClicked(); break;
        case 2: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->show(); break;
        case 4: _t->hide(); break;
        case 5: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QIcon(*)>(_a[3]))); break;
        case 7: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3]))); break;
        case 9: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->d_func()->_q_emitActivated((*reinterpret_cast< QPlatformSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSystemTrayIcon::*)(QSystemTrayIcon::ActivationReason );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSystemTrayIcon::activated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSystemTrayIcon::messageClicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->toolTip(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QSystemTrayIcon::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QSystemTrayIcon.data,
    qt_meta_data_QSystemTrayIcon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSystemTrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSystemTrayIcon::activated(QSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
