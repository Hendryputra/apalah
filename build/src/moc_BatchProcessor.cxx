/****************************************************************************
** Meta object code from reading C++ file 'BatchProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/BatchProcessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BatchProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatchProcessor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      24,   15,   15,   15, 0x08,
      31,   15,   15,   15, 0x08,
      50,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BatchProcessor[] = {
    "BatchProcessor\0\0start()\0stop()\0"
    "browseOutputFile()\0runBatch()\0"
};

void BatchProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchProcessor *_t = static_cast<BatchProcessor *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->browseOutputFile(); break;
        case 3: _t->runBatch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BatchProcessor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BatchProcessor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchProcessor,
      qt_meta_data_BatchProcessor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatchProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatchProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatchProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchProcessor))
        return static_cast<void*>(const_cast< BatchProcessor*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
