/****************************************************************************
** Meta object code from reading C++ file 'serialsettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/serialsettingswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialsettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   21,   21,   21, 0x0a,
      82,   74,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SerialSettingsWidget[] = {
    "SerialSettingsWidget\0\0active\0"
    "serialPortActive(bool)\0changeSerialPort(int)\0"
    "checked\0on_checkBox_clicked(bool)\0"
};

void SerialSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialSettingsWidget *_t = static_cast<SerialSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->serialPortActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->changeSerialPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialSettingsWidget,
      qt_meta_data_SerialSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialSettingsWidget))
        return static_cast<void*>(const_cast< SerialSettingsWidget*>(this));
    if (!strcmp(_clname, "IModbus"))
        return static_cast< IModbus*>(const_cast< SerialSettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SerialSettingsWidget::serialPortActive(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
