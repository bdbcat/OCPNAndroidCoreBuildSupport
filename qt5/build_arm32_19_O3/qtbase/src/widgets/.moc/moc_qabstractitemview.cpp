/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/widgets/itemviews/qabstractitemview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractItemView_t {
    QByteArrayData data[117];
    char stringdata0[1649];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractItemView_t qt_meta_stringdata_QAbstractItemView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QAbstractItemView"
QT_MOC_LITERAL(1, 18, 7), // "pressed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 39, 5), // "index"
QT_MOC_LITERAL(5, 45, 7), // "clicked"
QT_MOC_LITERAL(6, 53, 13), // "doubleClicked"
QT_MOC_LITERAL(7, 67, 9), // "activated"
QT_MOC_LITERAL(8, 77, 7), // "entered"
QT_MOC_LITERAL(9, 85, 15), // "viewportEntered"
QT_MOC_LITERAL(10, 101, 15), // "iconSizeChanged"
QT_MOC_LITERAL(11, 117, 4), // "size"
QT_MOC_LITERAL(12, 122, 5), // "reset"
QT_MOC_LITERAL(13, 128, 12), // "setRootIndex"
QT_MOC_LITERAL(14, 141, 13), // "doItemsLayout"
QT_MOC_LITERAL(15, 155, 9), // "selectAll"
QT_MOC_LITERAL(16, 165, 4), // "edit"
QT_MOC_LITERAL(17, 170, 14), // "clearSelection"
QT_MOC_LITERAL(18, 185, 15), // "setCurrentIndex"
QT_MOC_LITERAL(19, 201, 11), // "scrollToTop"
QT_MOC_LITERAL(20, 213, 14), // "scrollToBottom"
QT_MOC_LITERAL(21, 228, 6), // "update"
QT_MOC_LITERAL(22, 235, 11), // "dataChanged"
QT_MOC_LITERAL(23, 247, 7), // "topLeft"
QT_MOC_LITERAL(24, 255, 11), // "bottomRight"
QT_MOC_LITERAL(25, 267, 12), // "QVector<int>"
QT_MOC_LITERAL(26, 280, 5), // "roles"
QT_MOC_LITERAL(27, 286, 12), // "rowsInserted"
QT_MOC_LITERAL(28, 299, 6), // "parent"
QT_MOC_LITERAL(29, 306, 5), // "start"
QT_MOC_LITERAL(30, 312, 3), // "end"
QT_MOC_LITERAL(31, 316, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(32, 337, 16), // "selectionChanged"
QT_MOC_LITERAL(33, 354, 14), // "QItemSelection"
QT_MOC_LITERAL(34, 369, 8), // "selected"
QT_MOC_LITERAL(35, 378, 10), // "deselected"
QT_MOC_LITERAL(36, 389, 14), // "currentChanged"
QT_MOC_LITERAL(37, 404, 7), // "current"
QT_MOC_LITERAL(38, 412, 8), // "previous"
QT_MOC_LITERAL(39, 421, 16), // "updateEditorData"
QT_MOC_LITERAL(40, 438, 22), // "updateEditorGeometries"
QT_MOC_LITERAL(41, 461, 16), // "updateGeometries"
QT_MOC_LITERAL(42, 478, 23), // "verticalScrollbarAction"
QT_MOC_LITERAL(43, 502, 6), // "action"
QT_MOC_LITERAL(44, 509, 25), // "horizontalScrollbarAction"
QT_MOC_LITERAL(45, 535, 29), // "verticalScrollbarValueChanged"
QT_MOC_LITERAL(46, 565, 5), // "value"
QT_MOC_LITERAL(47, 571, 31), // "horizontalScrollbarValueChanged"
QT_MOC_LITERAL(48, 603, 11), // "closeEditor"
QT_MOC_LITERAL(49, 615, 8), // "QWidget*"
QT_MOC_LITERAL(50, 624, 6), // "editor"
QT_MOC_LITERAL(51, 631, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(52, 666, 4), // "hint"
QT_MOC_LITERAL(53, 671, 10), // "commitData"
QT_MOC_LITERAL(54, 682, 15), // "editorDestroyed"
QT_MOC_LITERAL(55, 698, 26), // "_q_columnsAboutToBeRemoved"
QT_MOC_LITERAL(56, 725, 17), // "_q_columnsRemoved"
QT_MOC_LITERAL(57, 743, 18), // "_q_columnsInserted"
QT_MOC_LITERAL(58, 762, 15), // "_q_rowsInserted"
QT_MOC_LITERAL(59, 778, 14), // "_q_rowsRemoved"
QT_MOC_LITERAL(60, 793, 15), // "_q_columnsMoved"
QT_MOC_LITERAL(61, 809, 12), // "_q_rowsMoved"
QT_MOC_LITERAL(62, 822, 17), // "_q_modelDestroyed"
QT_MOC_LITERAL(63, 840, 16), // "_q_layoutChanged"
QT_MOC_LITERAL(64, 857, 20), // "_q_headerDataChanged"
QT_MOC_LITERAL(65, 878, 23), // "_q_scrollerStateChanged"
QT_MOC_LITERAL(66, 902, 10), // "autoScroll"
QT_MOC_LITERAL(67, 913, 16), // "autoScrollMargin"
QT_MOC_LITERAL(68, 930, 12), // "editTriggers"
QT_MOC_LITERAL(69, 943, 12), // "EditTriggers"
QT_MOC_LITERAL(70, 956, 16), // "tabKeyNavigation"
QT_MOC_LITERAL(71, 973, 17), // "showDropIndicator"
QT_MOC_LITERAL(72, 991, 11), // "dragEnabled"
QT_MOC_LITERAL(73, 1003, 21), // "dragDropOverwriteMode"
QT_MOC_LITERAL(74, 1025, 12), // "dragDropMode"
QT_MOC_LITERAL(75, 1038, 12), // "DragDropMode"
QT_MOC_LITERAL(76, 1051, 17), // "defaultDropAction"
QT_MOC_LITERAL(77, 1069, 14), // "Qt::DropAction"
QT_MOC_LITERAL(78, 1084, 20), // "alternatingRowColors"
QT_MOC_LITERAL(79, 1105, 13), // "selectionMode"
QT_MOC_LITERAL(80, 1119, 13), // "SelectionMode"
QT_MOC_LITERAL(81, 1133, 17), // "selectionBehavior"
QT_MOC_LITERAL(82, 1151, 17), // "SelectionBehavior"
QT_MOC_LITERAL(83, 1169, 8), // "iconSize"
QT_MOC_LITERAL(84, 1178, 13), // "textElideMode"
QT_MOC_LITERAL(85, 1192, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(86, 1210, 18), // "verticalScrollMode"
QT_MOC_LITERAL(87, 1229, 10), // "ScrollMode"
QT_MOC_LITERAL(88, 1240, 20), // "horizontalScrollMode"
QT_MOC_LITERAL(89, 1261, 11), // "NoSelection"
QT_MOC_LITERAL(90, 1273, 15), // "SingleSelection"
QT_MOC_LITERAL(91, 1289, 14), // "MultiSelection"
QT_MOC_LITERAL(92, 1304, 17), // "ExtendedSelection"
QT_MOC_LITERAL(93, 1322, 19), // "ContiguousSelection"
QT_MOC_LITERAL(94, 1342, 11), // "SelectItems"
QT_MOC_LITERAL(95, 1354, 10), // "SelectRows"
QT_MOC_LITERAL(96, 1365, 13), // "SelectColumns"
QT_MOC_LITERAL(97, 1379, 10), // "ScrollHint"
QT_MOC_LITERAL(98, 1390, 13), // "EnsureVisible"
QT_MOC_LITERAL(99, 1404, 13), // "PositionAtTop"
QT_MOC_LITERAL(100, 1418, 16), // "PositionAtBottom"
QT_MOC_LITERAL(101, 1435, 16), // "PositionAtCenter"
QT_MOC_LITERAL(102, 1452, 11), // "EditTrigger"
QT_MOC_LITERAL(103, 1464, 14), // "NoEditTriggers"
QT_MOC_LITERAL(104, 1479, 14), // "CurrentChanged"
QT_MOC_LITERAL(105, 1494, 13), // "DoubleClicked"
QT_MOC_LITERAL(106, 1508, 15), // "SelectedClicked"
QT_MOC_LITERAL(107, 1524, 14), // "EditKeyPressed"
QT_MOC_LITERAL(108, 1539, 13), // "AnyKeyPressed"
QT_MOC_LITERAL(109, 1553, 15), // "AllEditTriggers"
QT_MOC_LITERAL(110, 1569, 13), // "ScrollPerItem"
QT_MOC_LITERAL(111, 1583, 14), // "ScrollPerPixel"
QT_MOC_LITERAL(112, 1598, 10), // "NoDragDrop"
QT_MOC_LITERAL(113, 1609, 8), // "DragOnly"
QT_MOC_LITERAL(114, 1618, 8), // "DropOnly"
QT_MOC_LITERAL(115, 1627, 8), // "DragDrop"
QT_MOC_LITERAL(116, 1636, 12) // "InternalMove"

    },
    "QAbstractItemView\0pressed\0\0QModelIndex\0"
    "index\0clicked\0doubleClicked\0activated\0"
    "entered\0viewportEntered\0iconSizeChanged\0"
    "size\0reset\0setRootIndex\0doItemsLayout\0"
    "selectAll\0edit\0clearSelection\0"
    "setCurrentIndex\0scrollToTop\0scrollToBottom\0"
    "update\0dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0rowsInserted\0parent\0"
    "start\0end\0rowsAboutToBeRemoved\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0currentChanged\0"
    "current\0previous\0updateEditorData\0"
    "updateEditorGeometries\0updateGeometries\0"
    "verticalScrollbarAction\0action\0"
    "horizontalScrollbarAction\0"
    "verticalScrollbarValueChanged\0value\0"
    "horizontalScrollbarValueChanged\0"
    "closeEditor\0QWidget*\0editor\0"
    "QAbstractItemDelegate::EndEditHint\0"
    "hint\0commitData\0editorDestroyed\0"
    "_q_columnsAboutToBeRemoved\0_q_columnsRemoved\0"
    "_q_columnsInserted\0_q_rowsInserted\0"
    "_q_rowsRemoved\0_q_columnsMoved\0"
    "_q_rowsMoved\0_q_modelDestroyed\0"
    "_q_layoutChanged\0_q_headerDataChanged\0"
    "_q_scrollerStateChanged\0autoScroll\0"
    "autoScrollMargin\0editTriggers\0"
    "EditTriggers\0tabKeyNavigation\0"
    "showDropIndicator\0dragEnabled\0"
    "dragDropOverwriteMode\0dragDropMode\0"
    "DragDropMode\0defaultDropAction\0"
    "Qt::DropAction\0alternatingRowColors\0"
    "selectionMode\0SelectionMode\0"
    "selectionBehavior\0SelectionBehavior\0"
    "iconSize\0textElideMode\0Qt::TextElideMode\0"
    "verticalScrollMode\0ScrollMode\0"
    "horizontalScrollMode\0NoSelection\0"
    "SingleSelection\0MultiSelection\0"
    "ExtendedSelection\0ContiguousSelection\0"
    "SelectItems\0SelectRows\0SelectColumns\0"
    "ScrollHint\0EnsureVisible\0PositionAtTop\0"
    "PositionAtBottom\0PositionAtCenter\0"
    "EditTrigger\0NoEditTriggers\0CurrentChanged\0"
    "DoubleClicked\0SelectedClicked\0"
    "EditKeyPressed\0AnyKeyPressed\0"
    "AllEditTriggers\0ScrollPerItem\0"
    "ScrollPerPixel\0NoDragDrop\0DragOnly\0"
    "DropOnly\0DragDrop\0InternalMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractItemView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
      16,  394, // properties
       6,  458, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       5,    1,  237,    2, 0x06 /* Public */,
       6,    1,  240,    2, 0x06 /* Public */,
       7,    1,  243,    2, 0x06 /* Public */,
       8,    1,  246,    2, 0x06 /* Public */,
       9,    0,  249,    2, 0x06 /* Public */,
      10,    1,  250,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  253,    2, 0x0a /* Public */,
      13,    1,  254,    2, 0x0a /* Public */,
      14,    0,  257,    2, 0x0a /* Public */,
      15,    0,  258,    2, 0x0a /* Public */,
      16,    1,  259,    2, 0x0a /* Public */,
      17,    0,  262,    2, 0x0a /* Public */,
      18,    1,  263,    2, 0x0a /* Public */,
      19,    0,  266,    2, 0x0a /* Public */,
      20,    0,  267,    2, 0x0a /* Public */,
      21,    1,  268,    2, 0x0a /* Public */,
      22,    3,  271,    2, 0x09 /* Protected */,
      22,    2,  278,    2, 0x29 /* Protected | MethodCloned */,
      27,    3,  283,    2, 0x09 /* Protected */,
      31,    3,  290,    2, 0x09 /* Protected */,
      32,    2,  297,    2, 0x09 /* Protected */,
      36,    2,  302,    2, 0x09 /* Protected */,
      39,    0,  307,    2, 0x09 /* Protected */,
      40,    0,  308,    2, 0x09 /* Protected */,
      41,    0,  309,    2, 0x09 /* Protected */,
      42,    1,  310,    2, 0x09 /* Protected */,
      44,    1,  313,    2, 0x09 /* Protected */,
      45,    1,  316,    2, 0x09 /* Protected */,
      47,    1,  319,    2, 0x09 /* Protected */,
      48,    2,  322,    2, 0x09 /* Protected */,
      53,    1,  327,    2, 0x09 /* Protected */,
      54,    1,  330,    2, 0x09 /* Protected */,
      55,    3,  333,    2, 0x08 /* Private */,
      56,    3,  340,    2, 0x08 /* Private */,
      57,    3,  347,    2, 0x08 /* Private */,
      58,    3,  354,    2, 0x08 /* Private */,
      59,    3,  361,    2, 0x08 /* Private */,
      60,    5,  368,    2, 0x08 /* Private */,
      61,    5,  379,    2, 0x08 /* Private */,
      62,    0,  390,    2, 0x08 /* Private */,
      63,    0,  391,    2, 0x08 /* Private */,
      64,    0,  392,    2, 0x08 /* Private */,
      65,    0,  393,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 25,   23,   24,   26,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   23,   24,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 33,   34,   35,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   37,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 51,   50,   52,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void, QMetaType::QObjectStar,   50,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      66, QMetaType::Bool, 0x00095103,
      67, QMetaType::Int, 0x00095103,
      68, 0x80000000 | 69, 0x0009510b,
      70, QMetaType::Bool, 0x00095103,
      71, QMetaType::Bool, 0x00095003,
      72, QMetaType::Bool, 0x00095103,
      73, QMetaType::Bool, 0x00095103,
      74, 0x80000000 | 75, 0x0009510b,
      76, 0x80000000 | 77, 0x0009510b,
      78, QMetaType::Bool, 0x00095103,
      79, 0x80000000 | 80, 0x0009510b,
      81, 0x80000000 | 82, 0x0009510b,
      83, QMetaType::QSize, 0x00495103,
      84, 0x80000000 | 85, 0x0009510b,
      86, 0x80000000 | 87, 0x0009510f,
      88, 0x80000000 | 87, 0x0009510f,

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
       0,
       0,
       0,
       6,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      80,   80, 0x0,    5,  488,
      82,   82, 0x0,    3,  498,
      97,   97, 0x0,    4,  504,
      69,  102, 0x1,    7,  512,
      87,   87, 0x0,    2,  526,
      75,   75, 0x0,    5,  530,

 // enum data: key, value
      89, uint(QAbstractItemView::NoSelection),
      90, uint(QAbstractItemView::SingleSelection),
      91, uint(QAbstractItemView::MultiSelection),
      92, uint(QAbstractItemView::ExtendedSelection),
      93, uint(QAbstractItemView::ContiguousSelection),
      94, uint(QAbstractItemView::SelectItems),
      95, uint(QAbstractItemView::SelectRows),
      96, uint(QAbstractItemView::SelectColumns),
      98, uint(QAbstractItemView::EnsureVisible),
      99, uint(QAbstractItemView::PositionAtTop),
     100, uint(QAbstractItemView::PositionAtBottom),
     101, uint(QAbstractItemView::PositionAtCenter),
     103, uint(QAbstractItemView::NoEditTriggers),
     104, uint(QAbstractItemView::CurrentChanged),
     105, uint(QAbstractItemView::DoubleClicked),
     106, uint(QAbstractItemView::SelectedClicked),
     107, uint(QAbstractItemView::EditKeyPressed),
     108, uint(QAbstractItemView::AnyKeyPressed),
     109, uint(QAbstractItemView::AllEditTriggers),
     110, uint(QAbstractItemView::ScrollPerItem),
     111, uint(QAbstractItemView::ScrollPerPixel),
     112, uint(QAbstractItemView::NoDragDrop),
     113, uint(QAbstractItemView::DragOnly),
     114, uint(QAbstractItemView::DropOnly),
     115, uint(QAbstractItemView::DragDrop),
     116, uint(QAbstractItemView::InternalMove),

       0        // eod
};

void QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->viewportEntered(); break;
        case 6: _t->iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 7: _t->reset(); break;
        case 8: _t->setRootIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->doItemsLayout(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->edit((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->clearSelection(); break;
        case 13: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->scrollToTop(); break;
        case 15: _t->scrollToBottom(); break;
        case 16: _t->update((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 18: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 22: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 23: _t->updateEditorData(); break;
        case 24: _t->updateEditorGeometries(); break;
        case 25: _t->updateGeometries(); break;
        case 26: _t->verticalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->horizontalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->verticalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->horizontalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 31: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 32: _t->editorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 33: _t->d_func()->_q_columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->d_func()->_q_columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: _t->d_func()->_q_columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->d_func()->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->d_func()->_q_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->d_func()->_q_columnsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 39: _t->d_func()->_q_rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 40: _t->d_func()->_q_modelDestroyed(); break;
        case 41: _t->d_func()->_q_layoutChanged(); break;
        case 42: _t->d_func()->_q_headerDataChanged(); break;
        case 43: _t->d_func()->_q_scrollerStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::activated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::entered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::viewportEntered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QAbstractItemView::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractItemView::iconSizeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasAutoScroll(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->autoScrollMargin(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->editTriggers()); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->tabKeyNavigation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showDropIndicator(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dragEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->dragDropOverwriteMode(); break;
        case 7: *reinterpret_cast< DragDropMode*>(_v) = _t->dragDropMode(); break;
        case 8: *reinterpret_cast< Qt::DropAction*>(_v) = _t->defaultDropAction(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->alternatingRowColors(); break;
        case 10: *reinterpret_cast< SelectionMode*>(_v) = _t->selectionMode(); break;
        case 11: *reinterpret_cast< SelectionBehavior*>(_v) = _t->selectionBehavior(); break;
        case 12: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 13: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->textElideMode(); break;
        case 14: *reinterpret_cast< ScrollMode*>(_v) = _t->verticalScrollMode(); break;
        case 15: *reinterpret_cast< ScrollMode*>(_v) = _t->horizontalScrollMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoScroll(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoScrollMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEditTriggers(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setTabKeyNavigation(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDropIndicatorShown(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDragDropOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDragDropMode(*reinterpret_cast< DragDropMode*>(_v)); break;
        case 8: _t->setDefaultDropAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 9: _t->setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 11: _t->setSelectionBehavior(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 12: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 13: _t->setTextElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 14: _t->setVerticalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        case 15: _t->setHorizontalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 14: _t->resetVerticalScrollMode(); break;
        case 15: _t->resetHorizontalScrollMode(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QAbstractItemView::staticMetaObject = { {
    &QAbstractScrollArea::staticMetaObject,
    qt_meta_stringdata_QAbstractItemView.data,
    qt_meta_data_QAbstractItemView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractItemView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
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
void QAbstractItemView::pressed(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractItemView::clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractItemView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemView::activated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractItemView::entered(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractItemView::viewportEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QAbstractItemView::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
