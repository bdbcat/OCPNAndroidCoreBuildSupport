/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qtbase/src/plugins/imageformats/jpeg/main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QJpegPlugin_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJpegPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJpegPlugin_t qt_meta_stringdata_QJpegPlugin = {
    {
QT_MOC_LITERAL(0, 0, 11) // "QJpegPlugin"

    },
    "QJpegPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJpegPlugin[] = {

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

void QJpegPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QJpegPlugin::staticMetaObject = { {
    &QImageIOPlugin::staticMetaObject,
    qt_meta_stringdata_QJpegPlugin.data,
    qt_meta_data_QJpegPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QJpegPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJpegPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QJpegPlugin.stringdata0))
        return static_cast<void*>(this);
    return QImageIOPlugin::qt_metacast(_clname);
}

int QJpegPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QImageIOPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x31,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'I',  'm', 
    'a',  'g',  'e',  'I',  'O',  'H',  'a',  'n', 
    'd',  'l',  'e',  'r',  'F',  'a',  'c',  't', 
    'o',  'r',  'y',  'I',  'n',  't',  'e',  'r', 
    'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x6b,  'Q',  'J',  'p',  'e',  'g',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa2,  0x64,  'K',  'e',  'y',  's',  0x82, 
    0x63,  'j',  'p',  'g',  0x64,  'j',  'p',  'e', 
    'g',  0x69,  'M',  'i',  'm',  'e',  'T',  'y', 
    'p',  'e',  's',  0x82,  0x6a,  'i',  'm',  'a', 
    'g',  'e',  '/',  'j',  'p',  'e',  'g',  0x6a, 
    'i',  'm',  'a',  'g',  'e',  '/',  'j',  'p', 
    'e',  'g', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QJpegPlugin, QJpegPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
