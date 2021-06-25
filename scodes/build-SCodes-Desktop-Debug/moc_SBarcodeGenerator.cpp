/****************************************************************************
** Meta object code from reading C++ file 'SBarcodeGenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/SBarcodeGenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SBarcodeGenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SBarcodeGenerator_t {
    QByteArrayData data[22];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SBarcodeGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SBarcodeGenerator_t qt_meta_stringdata_SBarcodeGenerator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SBarcodeGenerator"
QT_MOC_LITERAL(1, 18, 15), // "processFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "widthChanged"
QT_MOC_LITERAL(4, 48, 5), // "width"
QT_MOC_LITERAL(5, 54, 13), // "heightChanged"
QT_MOC_LITERAL(6, 68, 6), // "height"
QT_MOC_LITERAL(7, 75, 13), // "marginChanged"
QT_MOC_LITERAL(8, 89, 6), // "margin"
QT_MOC_LITERAL(9, 96, 15), // "eccLevelChanged"
QT_MOC_LITERAL(10, 112, 8), // "eccLevel"
QT_MOC_LITERAL(11, 121, 15), // "fileNameChanged"
QT_MOC_LITERAL(12, 137, 8), // "fileName"
QT_MOC_LITERAL(13, 146, 7), // "process"
QT_MOC_LITERAL(14, 154, 11), // "inputString"
QT_MOC_LITERAL(15, 166, 9), // "saveImage"
QT_MOC_LITERAL(16, 176, 26), // "barcodeFormatFromQMLString"
QT_MOC_LITERAL(17, 203, 6), // "format"
QT_MOC_LITERAL(18, 210, 20), // "ZXing::BarcodeFormat"
QT_MOC_LITERAL(19, 231, 9), // "extension"
QT_MOC_LITERAL(20, 241, 8), // "filePath"
QT_MOC_LITERAL(21, 250, 9) // "inputText"

    },
    "SBarcodeGenerator\0processFinished\0\0"
    "widthChanged\0width\0heightChanged\0"
    "height\0marginChanged\0margin\0eccLevelChanged\0"
    "eccLevel\0fileNameChanged\0fileName\0"
    "process\0inputString\0saveImage\0"
    "barcodeFormatFromQMLString\0format\0"
    "ZXing::BarcodeFormat\0extension\0filePath\0"
    "inputText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SBarcodeGenerator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,
      11,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   75,    2, 0x0a /* Public */,
      15,    0,   78,    2, 0x0a /* Public */,
      16,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,   14,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   17,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495003,
       6, QMetaType::Int, 0x00495003,
       8, QMetaType::Int, 0x00495003,
      10, QMetaType::Int, 0x00495003,
      12, QMetaType::QString, 0x00495003,
      17, 0x80000000 | 18, 0x0009500b,
      19, QMetaType::QString, 0x00095003,
      20, QMetaType::QString, 0x00095003,
      21, QMetaType::QString, 0x00095003,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       0,
       0,
       0,
       0,

       0        // eod
};

void SBarcodeGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SBarcodeGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processFinished(); break;
        case 1: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->marginChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->eccLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->fileNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { bool _r = _t->process((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->saveImage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->barcodeFormatFromQMLString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SBarcodeGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::processFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SBarcodeGenerator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::widthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SBarcodeGenerator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::heightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SBarcodeGenerator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::marginChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SBarcodeGenerator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::eccLevelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SBarcodeGenerator::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SBarcodeGenerator::fileNameChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SBarcodeGenerator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_width; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_height; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->_margin; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_eccLevel; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_fileName; break;
        case 5: *reinterpret_cast< ZXing::BarcodeFormat*>(_v) = _t->_format; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->_extension; break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->_filePath; break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->_inputText; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SBarcodeGenerator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_width != *reinterpret_cast< int*>(_v)) {
                _t->_width = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->widthChanged(_t->_width);
            }
            break;
        case 1:
            if (_t->_height != *reinterpret_cast< int*>(_v)) {
                _t->_height = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->heightChanged(_t->_height);
            }
            break;
        case 2:
            if (_t->_margin != *reinterpret_cast< int*>(_v)) {
                _t->_margin = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->marginChanged(_t->_margin);
            }
            break;
        case 3:
            if (_t->_eccLevel != *reinterpret_cast< int*>(_v)) {
                _t->_eccLevel = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->eccLevelChanged(_t->_eccLevel);
            }
            break;
        case 4:
            if (_t->_fileName != *reinterpret_cast< QString*>(_v)) {
                _t->_fileName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->fileNameChanged(_t->_fileName);
            }
            break;
        case 5:
            if (_t->_format != *reinterpret_cast< ZXing::BarcodeFormat*>(_v)) {
                _t->_format = *reinterpret_cast< ZXing::BarcodeFormat*>(_v);
            }
            break;
        case 6:
            if (_t->_extension != *reinterpret_cast< QString*>(_v)) {
                _t->_extension = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 7:
            if (_t->_filePath != *reinterpret_cast< QString*>(_v)) {
                _t->_filePath = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 8:
            if (_t->_inputText != *reinterpret_cast< QString*>(_v)) {
                _t->_inputText = *reinterpret_cast< QString*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SBarcodeGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_SBarcodeGenerator.data,
    qt_meta_data_SBarcodeGenerator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SBarcodeGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SBarcodeGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SBarcodeGenerator.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int SBarcodeGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void SBarcodeGenerator::processFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SBarcodeGenerator::widthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SBarcodeGenerator::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SBarcodeGenerator::marginChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SBarcodeGenerator::eccLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SBarcodeGenerator::fileNameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
