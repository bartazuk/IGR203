/****************************************************************************
** Meta object code from reading C++ file 'platintro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu_restaurant/platintro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'platintro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_platIntro_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_platIntro_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_platIntro_t qt_meta_stringdata_platIntro = {
    {
QT_MOC_LITERAL(0, 0, 9), // "platIntro"
QT_MOC_LITERAL(1, 10, 11), // "addToPanier"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "afficherDetails"
QT_MOC_LITERAL(4, 39, 14), // "on_Add_clicked"
QT_MOC_LITERAL(5, 54, 17) // "on_Detail_clicked"

    },
    "platIntro\0addToPanier\0\0afficherDetails\0"
    "on_Add_clicked\0on_Detail_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_platIntro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void platIntro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        platIntro *_t = static_cast<platIntro *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToPanier(); break;
        case 1: _t->afficherDetails(); break;
        case 2: _t->on_Add_clicked(); break;
        case 3: _t->on_Detail_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (platIntro::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&platIntro::addToPanier)) {
                *result = 0;
            }
        }
        {
            typedef void (platIntro::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&platIntro::afficherDetails)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject platIntro::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_platIntro.data,
      qt_meta_data_platIntro,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *platIntro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *platIntro::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_platIntro.stringdata0))
        return static_cast<void*>(const_cast< platIntro*>(this));
    return QWidget::qt_metacast(_clname);
}

int platIntro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void platIntro::addToPanier()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void platIntro::afficherDetails()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
