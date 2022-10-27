/****************************************************************************
** Meta object code from reading C++ file 'qcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/widgets/qcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QComboBox_t {
    QByteArrayData data[66];
    char stringdata0[983];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QComboBox_t qt_meta_stringdata_QComboBox = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QComboBox"
QT_MOC_LITERAL(1, 10, 15), // "editTextChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "activated"
QT_MOC_LITERAL(4, 37, 5), // "index"
QT_MOC_LITERAL(5, 43, 11), // "highlighted"
QT_MOC_LITERAL(6, 55, 19), // "currentIndexChanged"
QT_MOC_LITERAL(7, 75, 18), // "currentTextChanged"
QT_MOC_LITERAL(8, 94, 5), // "clear"
QT_MOC_LITERAL(9, 100, 13), // "clearEditText"
QT_MOC_LITERAL(10, 114, 11), // "setEditText"
QT_MOC_LITERAL(11, 126, 4), // "text"
QT_MOC_LITERAL(12, 131, 15), // "setCurrentIndex"
QT_MOC_LITERAL(13, 147, 14), // "setCurrentText"
QT_MOC_LITERAL(14, 162, 15), // "_q_itemSelected"
QT_MOC_LITERAL(15, 178, 11), // "QModelIndex"
QT_MOC_LITERAL(16, 190, 4), // "item"
QT_MOC_LITERAL(17, 195, 18), // "_q_emitHighlighted"
QT_MOC_LITERAL(18, 214, 26), // "_q_emitCurrentIndexChanged"
QT_MOC_LITERAL(19, 241, 18), // "_q_editingFinished"
QT_MOC_LITERAL(20, 260, 16), // "_q_returnPressed"
QT_MOC_LITERAL(21, 277, 14), // "_q_resetButton"
QT_MOC_LITERAL(22, 292, 14), // "_q_dataChanged"
QT_MOC_LITERAL(23, 307, 26), // "_q_updateIndexBeforeChange"
QT_MOC_LITERAL(24, 334, 15), // "_q_rowsInserted"
QT_MOC_LITERAL(25, 350, 6), // "parent"
QT_MOC_LITERAL(26, 357, 5), // "start"
QT_MOC_LITERAL(27, 363, 3), // "end"
QT_MOC_LITERAL(28, 367, 14), // "_q_rowsRemoved"
QT_MOC_LITERAL(29, 382, 17), // "_q_modelDestroyed"
QT_MOC_LITERAL(30, 400, 13), // "_q_modelReset"
QT_MOC_LITERAL(31, 414, 21), // "_q_completerActivated"
QT_MOC_LITERAL(32, 436, 16), // "inputMethodQuery"
QT_MOC_LITERAL(33, 453, 20), // "Qt::InputMethodQuery"
QT_MOC_LITERAL(34, 474, 5), // "query"
QT_MOC_LITERAL(35, 480, 8), // "argument"
QT_MOC_LITERAL(36, 489, 8), // "editable"
QT_MOC_LITERAL(37, 498, 5), // "count"
QT_MOC_LITERAL(38, 504, 11), // "currentText"
QT_MOC_LITERAL(39, 516, 12), // "currentIndex"
QT_MOC_LITERAL(40, 529, 11), // "currentData"
QT_MOC_LITERAL(41, 541, 15), // "maxVisibleItems"
QT_MOC_LITERAL(42, 557, 8), // "maxCount"
QT_MOC_LITERAL(43, 566, 12), // "insertPolicy"
QT_MOC_LITERAL(44, 579, 12), // "InsertPolicy"
QT_MOC_LITERAL(45, 592, 16), // "sizeAdjustPolicy"
QT_MOC_LITERAL(46, 609, 16), // "SizeAdjustPolicy"
QT_MOC_LITERAL(47, 626, 21), // "minimumContentsLength"
QT_MOC_LITERAL(48, 648, 8), // "iconSize"
QT_MOC_LITERAL(49, 657, 14), // "autoCompletion"
QT_MOC_LITERAL(50, 672, 29), // "autoCompletionCaseSensitivity"
QT_MOC_LITERAL(51, 702, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(52, 722, 17), // "duplicatesEnabled"
QT_MOC_LITERAL(53, 740, 5), // "frame"
QT_MOC_LITERAL(54, 746, 11), // "modelColumn"
QT_MOC_LITERAL(55, 758, 8), // "NoInsert"
QT_MOC_LITERAL(56, 767, 11), // "InsertAtTop"
QT_MOC_LITERAL(57, 779, 15), // "InsertAtCurrent"
QT_MOC_LITERAL(58, 795, 14), // "InsertAtBottom"
QT_MOC_LITERAL(59, 810, 18), // "InsertAfterCurrent"
QT_MOC_LITERAL(60, 829, 19), // "InsertBeforeCurrent"
QT_MOC_LITERAL(61, 849, 20), // "InsertAlphabetically"
QT_MOC_LITERAL(62, 870, 16), // "AdjustToContents"
QT_MOC_LITERAL(63, 887, 27), // "AdjustToContentsOnFirstShow"
QT_MOC_LITERAL(64, 915, 29), // "AdjustToMinimumContentsLength"
QT_MOC_LITERAL(65, 945, 37) // "AdjustToMinimumContentsLength..."

    },
    "QComboBox\0editTextChanged\0\0activated\0"
    "index\0highlighted\0currentIndexChanged\0"
    "currentTextChanged\0clear\0clearEditText\0"
    "setEditText\0text\0setCurrentIndex\0"
    "setCurrentText\0_q_itemSelected\0"
    "QModelIndex\0item\0_q_emitHighlighted\0"
    "_q_emitCurrentIndexChanged\0"
    "_q_editingFinished\0_q_returnPressed\0"
    "_q_resetButton\0_q_dataChanged\0"
    "_q_updateIndexBeforeChange\0_q_rowsInserted\0"
    "parent\0start\0end\0_q_rowsRemoved\0"
    "_q_modelDestroyed\0_q_modelReset\0"
    "_q_completerActivated\0inputMethodQuery\0"
    "Qt::InputMethodQuery\0query\0argument\0"
    "editable\0count\0currentText\0currentIndex\0"
    "currentData\0maxVisibleItems\0maxCount\0"
    "insertPolicy\0InsertPolicy\0sizeAdjustPolicy\0"
    "SizeAdjustPolicy\0minimumContentsLength\0"
    "iconSize\0autoCompletion\0"
    "autoCompletionCaseSensitivity\0"
    "Qt::CaseSensitivity\0duplicatesEnabled\0"
    "frame\0modelColumn\0NoInsert\0InsertAtTop\0"
    "InsertAtCurrent\0InsertAtBottom\0"
    "InsertAfterCurrent\0InsertBeforeCurrent\0"
    "InsertAlphabetically\0AdjustToContents\0"
    "AdjustToContentsOnFirstShow\0"
    "AdjustToMinimumContentsLength\0"
    "AdjustToMinimumContentsLengthWithIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
      16,  226, // properties
       2,  290, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       3,    1,  152,    2, 0x06 /* Public */,
       3,    1,  155,    2, 0x06 /* Public */,
       5,    1,  158,    2, 0x06 /* Public */,
       5,    1,  161,    2, 0x06 /* Public */,
       6,    1,  164,    2, 0x06 /* Public */,
       6,    1,  167,    2, 0x06 /* Public */,
       7,    1,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  173,    2, 0x0a /* Public */,
       9,    0,  174,    2, 0x0a /* Public */,
      10,    1,  175,    2, 0x0a /* Public */,
      12,    1,  178,    2, 0x0a /* Public */,
      13,    1,  181,    2, 0x0a /* Public */,
      14,    1,  184,    2, 0x08 /* Private */,
      17,    1,  187,    2, 0x08 /* Private */,
      18,    1,  190,    2, 0x08 /* Private */,
      19,    0,  193,    2, 0x08 /* Private */,
      20,    0,  194,    2, 0x08 /* Private */,
      21,    0,  195,    2, 0x08 /* Private */,
      22,    2,  196,    2, 0x08 /* Private */,
      23,    0,  201,    2, 0x08 /* Private */,
      24,    3,  202,    2, 0x08 /* Private */,
      28,    3,  209,    2, 0x08 /* Private */,
      29,    0,  216,    2, 0x08 /* Private */,
      30,    0,  217,    2, 0x08 /* Private */,
      31,    1,  218,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      32,    2,  221,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int, QMetaType::Int,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Int, QMetaType::Int,   25,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    4,

 // methods: parameters
    QMetaType::QVariant, 0x80000000 | 33, QMetaType::QVariant,   34,   35,

 // properties: name, type, flags
      36, QMetaType::Bool, 0x00095103,
      37, QMetaType::Int, 0x00095001,
      38, QMetaType::QString, 0x00595103,
      39, QMetaType::Int, 0x00495103,
      40, QMetaType::QVariant, 0x00095001,
      41, QMetaType::Int, 0x00095103,
      42, QMetaType::Int, 0x00095103,
      43, 0x80000000 | 44, 0x0009510b,
      45, 0x80000000 | 46, 0x0009510b,
      47, QMetaType::Int, 0x00095103,
      48, QMetaType::QSize, 0x00095103,
      49, QMetaType::Bool, 0x00094103,
      50, 0x80000000 | 51, 0x0009410b,
      52, QMetaType::Bool, 0x00095103,
      53, QMetaType::Bool, 0x00095103,
      54, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       7,
       5,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    7,  300,
      46,   46, 0x0,    4,  314,

 // enum data: key, value
      55, uint(QComboBox::NoInsert),
      56, uint(QComboBox::InsertAtTop),
      57, uint(QComboBox::InsertAtCurrent),
      58, uint(QComboBox::InsertAtBottom),
      59, uint(QComboBox::InsertAfterCurrent),
      60, uint(QComboBox::InsertBeforeCurrent),
      61, uint(QComboBox::InsertAlphabetically),
      62, uint(QComboBox::AdjustToContents),
      63, uint(QComboBox::AdjustToContentsOnFirstShow),
      64, uint(QComboBox::AdjustToMinimumContentsLength),
      65, uint(QComboBox::AdjustToMinimumContentsLengthWithIcon),

       0        // eod
};

void QComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->clearEditText(); break;
        case 10: _t->setEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setCurrentText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_emitHighlighted((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 15: _t->d_func()->_q_emitCurrentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->d_func()->_q_editingFinished(); break;
        case 17: _t->d_func()->_q_returnPressed(); break;
        case 18: _t->d_func()->_q_resetButton(); break;
        case 19: _t->d_func()->_q_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 20: _t->d_func()->_q_updateIndexBeforeChange(); break;
        case 21: _t->d_func()->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->d_func()->_q_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->d_func()->_q_modelDestroyed(); break;
        case 24: _t->d_func()->_q_modelReset(); break;
        case 25: _t->d_func()->_q_completerActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::editTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::activated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::highlighted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::highlighted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::currentIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::currentIndexChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QComboBox::currentTextChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->currentText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->currentData(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->maxVisibleItems(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->maxCount(); break;
        case 7: *reinterpret_cast< InsertPolicy*>(_v) = _t->insertPolicy(); break;
        case 8: *reinterpret_cast< SizeAdjustPolicy*>(_v) = _t->sizeAdjustPolicy(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->minimumContentsLength(); break;
        case 10: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->autoCompletion(); break;
        case 12: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->autoCompletionCaseSensitivity(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->duplicatesEnabled(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->hasFrame(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->modelColumn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEditable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCurrentText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMaxVisibleItems(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMaxCount(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setInsertPolicy(*reinterpret_cast< InsertPolicy*>(_v)); break;
        case 8: _t->setSizeAdjustPolicy(*reinterpret_cast< SizeAdjustPolicy*>(_v)); break;
        case 9: _t->setMinimumContentsLength(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 11: _t->setAutoCompletion(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setAutoCompletionCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 13: _t->setDuplicatesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setModelColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QComboBox::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QComboBox.data,
    qt_meta_data_QComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QComboBox::editTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QComboBox::activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QComboBox::activated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QComboBox::highlighted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QComboBox::highlighted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QComboBox::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QComboBox::currentIndexChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QComboBox::currentTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
