/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Desktop/telecom/github/IGR203/menu_restaurant/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "afficheDetail"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "plat*"
QT_MOC_LITERAL(4, 32, 26), // "on_boisson_addlike_clicked"
QT_MOC_LITERAL(5, 59, 29), // "on_boisson_adddislike_clicked"
QT_MOC_LITERAL(6, 89, 26), // "on_dessert_addlike_clicked"
QT_MOC_LITERAL(7, 116, 29), // "on_dessert_adddislike_clicked"
QT_MOC_LITERAL(8, 146, 23), // "on_plat_addlike_clicked"
QT_MOC_LITERAL(9, 170, 26), // "on_plat_adddislike_clicked"
QT_MOC_LITERAL(10, 197, 25), // "on_entree_addlike_clicked"
QT_MOC_LITERAL(11, 223, 28), // "on_entree_adddislike_clicked"
QT_MOC_LITERAL(12, 252, 29), // "on_platdujour_addlike_clicked"
QT_MOC_LITERAL(13, 282, 32), // "on_platdujour_adddislike_clicked"
QT_MOC_LITERAL(14, 315, 10), // "like_label"
QT_MOC_LITERAL(15, 326, 13), // "dislike_label"
QT_MOC_LITERAL(16, 340, 10), // "openPanier"
QT_MOC_LITERAL(17, 351, 12) // "updatePanier"

    },
    "MainWindow\0afficheDetail\0\0plat*\0"
    "on_boisson_addlike_clicked\0"
    "on_boisson_adddislike_clicked\0"
    "on_dessert_addlike_clicked\0"
    "on_dessert_adddislike_clicked\0"
    "on_plat_addlike_clicked\0"
    "on_plat_adddislike_clicked\0"
    "on_entree_addlike_clicked\0"
    "on_entree_adddislike_clicked\0"
    "on_platdujour_addlike_clicked\0"
    "on_platdujour_adddislike_clicked\0"
    "like_label\0dislike_label\0openPanier\0"
    "updatePanier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->afficheDetail((*reinterpret_cast< plat*(*)>(_a[1]))); break;
        case 1: _t->on_boisson_addlike_clicked(); break;
        case 2: _t->on_boisson_adddislike_clicked(); break;
        case 3: _t->on_dessert_addlike_clicked(); break;
        case 4: _t->on_dessert_adddislike_clicked(); break;
        case 5: _t->on_plat_addlike_clicked(); break;
        case 6: _t->on_plat_adddislike_clicked(); break;
        case 7: _t->on_entree_addlike_clicked(); break;
        case 8: _t->on_entree_adddislike_clicked(); break;
        case 9: _t->on_platdujour_addlike_clicked(); break;
        case 10: _t->on_platdujour_adddislike_clicked(); break;
        case 11: _t->like_label(); break;
        case 12: _t->dislike_label(); break;
        case 13: _t->openPanier(); break;
        case 14: _t->updatePanier(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
