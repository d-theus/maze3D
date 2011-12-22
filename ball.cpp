#include "ball.h"

Ball::Ball(QVector3D _pos = QVector3D(0+HS,0+HS,0),  QObject *parent) :
    QObject(parent),
    center(_pos),
    velocity(QVector3D(0,0,0)),
    acceleration(QVector3D(0,0,0))
{
}

void Ball::draw()const
{

    GLUquadric *gluquad;
    gluquad = gluNewQuadric();
    gluQuadricDrawStyle(gluquad, GLU_FILL);

    glPushMatrix();
    glTranslatef(center.x(),center.y(), BALL_R);
    gluSphere(gluquad, (GLdouble)BALL_R, 10,10);
    glPopMatrix();

    gluDeleteQuadric(gluquad);
}

void Ball::inclineChanged(double _ix, double _iy)
{
    ix= _ix;
    iy= _iy;
    calcAcceleration(ix, iy);
}

void Ball::calcAcceleration(double _ix, double _iy)
{

    acceleration = QVector3D(G_ACC * sin(DEG_TO_RAD*_iy)/10,- G_ACC * sin(DEG_TO_RAD*_ix)/10, 0);
}


void Ball::calcVelocity()
{
    velocity += acceleration;

    foreach(QVector3D normal, normals)
    {
        velocity -= QVector3D::dotProduct(velocity, normal)*(normal);
        center += normal*0.05;
    }
    velocity *= FRICTION;
}

void Ball::calcPosition()
{
    center += velocity;
}

void Ball::updateCalculations()
{
    calcVelocity();
    calcPosition();
<<<<<<< HEAD
=======

    static uint cnt = 0;
    if (cnt == 10)
    {
        normals.clear();
        cnt = 0;
    }
    cnt ++;
>>>>>>> 9baa3d663a4852b687027ee8e747c6f29d20823b
}

void Ball::collisionFrom(QVector3D normal)
{
    if(! normals.contains(normal))
    {
        normals.append(normal);
<<<<<<< HEAD
        velocity -= 2*QVector3D::dotProduct(velocity, normal)*(normal);
=======
>>>>>>> 9baa3d663a4852b687027ee8e747c6f29d20823b
    }
}

void Ball::endCollision(QVector3D normal)
{
    normals.removeOne(normal);
}

QVector3D Ball::getVelocity()const
{
    QVector3D v = velocity;
    return v;
}

QVector3D Ball::getCenter()const
{
    QVector3D v = center;
    return v;
}

QVector3D Ball::getAcceleration()const
{
    QVector3D v = acceleration;
    return v;
}
