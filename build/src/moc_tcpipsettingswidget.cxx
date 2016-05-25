/****************************************************************************
** Meta object code from reading C++ file 'tcpipsettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/tcpipsettingswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpipsettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TcpIpSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   45,   20,   20, 0x08,
      80,   20,   20,   20, 0x08,
     107,  102,   20,   20, 0x08,
     146,  102,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TcpIpSettingsWidget[] = {
    "TcpIpSettingsWidget\0\0val\0tcpPortActive(bool)\0"
    "checked\0on_cbEnabled_clicked(bool)\0"
    "on_btnApply_clicked()\0arg1\0"
    "onEdNetworkAddressTextChanged(QString)\0"
    "on_edPort_textChanged(QString)\0"
};

void TcpIpSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TcpIpSettingsWidget *_t = static_cast<TcpIpSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->tcpPortActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_cbEnabled_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btnApply_clicked(); break;
        case 3: _t->onEdNetworkAddressTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_edPort_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TcpIpSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TcpIpSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TcpIpSettingsWidget,
      qt_meta_data_TcpIpSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TcpIpSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TcpIpSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TcpIpSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TcpIpSettingsWidget))
        return static_cast<void*>(const_cast< TcpIpSettingsWidget*>(this));
    if (!strcmp(_clname, "IModbus"))
        return static_cast< IModbus*>(const_cast< TcpIpSettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TcpIpSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TcpIpSettingsWidget::tcpPortActive(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
