/****************************************************************************
** Meta object code from reading C++ file 'panierwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Desktop/telecom/github/IGR203/menu_restaurant/panierwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panierwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PanierWindow_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PanierWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PanierWindow_t qt_meta_stringdata_PanierWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PanierWindow"
QT_MOC_LITERAL(1, 13, 13), // "panierUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "addPlat"
QT_MOC_LITERAL(4, 36, 5), // "plat*"
QT_MOC_LITERAL(5, 42, 10), // "deletePlat"
QT_MOC_LITERAL(6, 53, 3) // "idx"

    },
    "PanierWindow\0panierUpdated\0\0addPlat\0"
    "plat*\0deletePlat\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PanierWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void PanierWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PanierWindow *_t = static_cast<PanierWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->panierUpdated(); break;
        case 1: _t->addPlat((*reinterpret_cast< plat*(*)>(_a[1]))); break;
        case 2: _t->deletePlat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PanierWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PanierWindow::panierUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject PanierWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PanierWindow.data,
      qt_meta_data_PanierWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PanierWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanierWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PanierWindow.stringdata0))
        return static_cast<void*>(const_cast< PanierWindow*>(this));
    if (!strcmp(_clname, "panier"))
        return static_cast< panier*>(const_cast< PanierWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int PanierWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PanierWindow::panierUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
