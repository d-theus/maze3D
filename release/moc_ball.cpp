/****************************************************************************
** Meta object code from reading C++ file 'ball.h'
**
<<<<<<< HEAD
** Created: Fri 16. Dec 00:01:39 2011
=======
** Created: Mon 19. Dec 20:08:23 2011
>>>>>>> 9baa3d663a4852b687027ee8e747c6f29d20823b
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ball.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ball.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ball[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    6,    5,    5, 0x0a,
      44,    5,    5,    5, 0x0a,
      51,    5,    5,    5, 0x0a,
      79,   72,    5,    5, 0x0a,
     104,   72,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ball[] = {
    "Ball\0\0_ix,_iy\0inclineChanged(double,double)\0"
    "draw()\0updateCalculations()\0normal\0"
    "collisionFrom(QVector3D)\0"
    "endCollision(QVector3D)\0"
};

const QMetaObject Ball::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ball,
      qt_meta_data_Ball, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ball::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ball::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ball::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ball))
        return static_cast<void*>(const_cast< Ball*>(this));
    return QObject::qt_metacast(_clname);
}

int Ball::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inclineChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: draw(); break;
        case 2: updateCalculations(); break;
        case 3: collisionFrom((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 4: endCollision((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
