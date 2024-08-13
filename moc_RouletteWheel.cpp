/****************************************************************************
** Meta object code from reading C++ file 'RouletteWheel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "RouletteWheel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RouletteWheel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RouletteWheel_t {
    QByteArrayData data[16];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RouletteWheel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RouletteWheel_t qt_meta_stringdata_RouletteWheel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "RouletteWheel"
QT_MOC_LITERAL(1, 14, 11), // "straightBet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "redBet"
QT_MOC_LITERAL(4, 34, 8), // "blackBet"
QT_MOC_LITERAL(5, 43, 7), // "evenBet"
QT_MOC_LITERAL(6, 51, 6), // "oddBet"
QT_MOC_LITERAL(7, 58, 7), // "passBet"
QT_MOC_LITERAL(8, 66, 9), // "manqueBet"
QT_MOC_LITERAL(9, 76, 4), // "play"
QT_MOC_LITERAL(10, 81, 7), // "setBet5"
QT_MOC_LITERAL(11, 89, 8), // "setBet10"
QT_MOC_LITERAL(12, 98, 8), // "setBet25"
QT_MOC_LITERAL(13, 107, 8), // "setBet50"
QT_MOC_LITERAL(14, 116, 9), // "setBetMax"
QT_MOC_LITERAL(15, 126, 7) // "restart"

    },
    "RouletteWheel\0straightBet\0\0redBet\0"
    "blackBet\0evenBet\0oddBet\0passBet\0"
    "manqueBet\0play\0setBet5\0setBet10\0"
    "setBet25\0setBet50\0setBetMax\0restart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RouletteWheel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
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

void RouletteWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RouletteWheel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->straightBet(); break;
        case 1: _t->redBet(); break;
        case 2: _t->blackBet(); break;
        case 3: _t->evenBet(); break;
        case 4: _t->oddBet(); break;
        case 5: _t->passBet(); break;
        case 6: _t->manqueBet(); break;
        case 7: _t->play(); break;
        case 8: _t->setBet5(); break;
        case 9: _t->setBet10(); break;
        case 10: _t->setBet25(); break;
        case 11: _t->setBet50(); break;
        case 12: _t->setBetMax(); break;
        case 13: _t->restart(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RouletteWheel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RouletteWheel.data,
    qt_meta_data_RouletteWheel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RouletteWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RouletteWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RouletteWheel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RouletteWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
