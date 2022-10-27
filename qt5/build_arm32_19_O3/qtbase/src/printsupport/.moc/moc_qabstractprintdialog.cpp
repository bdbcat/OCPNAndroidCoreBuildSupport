/****************************************************************************
** Meta object code from reading C++ file 'qabstractprintdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../qtbase/src/printsupport/dialogs/qabstractprintdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractprintdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractPrintDialog_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractPrintDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractPrintDialog_t qt_meta_stringdata_QAbstractPrintDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QAbstractPrintDialog"
QT_MOC_LITERAL(1, 21, 17), // "PrintDialogOption"
QT_MOC_LITERAL(2, 39, 4), // "None"
QT_MOC_LITERAL(3, 44, 11), // "PrintToFile"
QT_MOC_LITERAL(4, 56, 14), // "PrintSelection"
QT_MOC_LITERAL(5, 71, 14), // "PrintPageRange"
QT_MOC_LITERAL(6, 86, 17), // "PrintShowPageSize"
QT_MOC_LITERAL(7, 104, 18), // "PrintCollateCopies"
QT_MOC_LITERAL(8, 123, 12), // "DontUseSheet"
QT_MOC_LITERAL(9, 136, 16), // "PrintCurrentPage"
QT_MOC_LITERAL(10, 153, 18) // "PrintDialogOptions"

    },
    "QAbstractPrintDialog\0PrintDialogOption\0"
    "None\0PrintToFile\0PrintSelection\0"
    "PrintPageRange\0PrintShowPageSize\0"
    "PrintCollateCopies\0DontUseSheet\0"
    "PrintCurrentPage\0PrintDialogOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractPrintDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    8,   24,
      10,    1, 0x1,    8,   40,

 // enum data: key, value
       2, uint(QAbstractPrintDialog::None),
       3, uint(QAbstractPrintDialog::PrintToFile),
       4, uint(QAbstractPrintDialog::PrintSelection),
       5, uint(QAbstractPrintDialog::PrintPageRange),
       6, uint(QAbstractPrintDialog::PrintShowPageSize),
       7, uint(QAbstractPrintDialog::PrintCollateCopies),
       8, uint(QAbstractPrintDialog::DontUseSheet),
       9, uint(QAbstractPrintDialog::PrintCurrentPage),
       2, uint(QAbstractPrintDialog::None),
       3, uint(QAbstractPrintDialog::PrintToFile),
       4, uint(QAbstractPrintDialog::PrintSelection),
       5, uint(QAbstractPrintDialog::PrintPageRange),
       6, uint(QAbstractPrintDialog::PrintShowPageSize),
       7, uint(QAbstractPrintDialog::PrintCollateCopies),
       8, uint(QAbstractPrintDialog::DontUseSheet),
       9, uint(QAbstractPrintDialog::PrintCurrentPage),

       0        // eod
};

void QAbstractPrintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QAbstractPrintDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_QAbstractPrintDialog.data,
    qt_meta_data_QAbstractPrintDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QAbstractPrintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractPrintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractPrintDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QAbstractPrintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
