#ifndef BALL_H
#define BALL_H

#include <QObject>
#include "settings.h"
#include <QtOpenGL>

class Ball : public QObject
{
    Q_OBJECT
    QVector3D center, acceleration, velocity;
    QList<QVector3D> normals;
    double ix, iy;
public:
    explicit Ball(QVector3D _pos, QObject *parent = 0);
    QVector3D getVelocity()const;
    QVector3D getCenter()const;
    QVector3D getAcceleration()const;

    void calcPosition();
    void calcVelocity();
    void calcAcceleration(double _ix,double _iy);

signals:

public slots:
    void inclineChanged(double _ix,double _iy);
    void draw()const;
    void updateCalculations();
    void collisionFrom(QVector3D normal);
    void endCollision(QVector3D normal);
};

#endif // BALL_H
