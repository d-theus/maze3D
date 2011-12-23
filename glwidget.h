#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QtGui>
#include <QtOpenGL/QtOpenGL>
#include <QGLWidget>
#include <math.h>

#include "ball.h"
#include "settings.h"

class Level : public QObject
{
    Q_OBJECT
    GLubyte difficulty, map[SIDE_LENGTH][SIDE_LENGTH];
    uint num;
    bool isActive;
    QPoint startPoint, *endPoint;
    Ball *ball;

    QList<QVector3D> normals;//for calculating collisions

    GLfloat *vertices;
    float zPos, transparency;

public:
    Level (int diff,  QObject *parent = 0); //for first level
    Level(int diff, QPoint _startPt, QObject *parent = 0);
    void draw();
    void drawCube(GLubyte x, GLubyte y);
    void generateMap(GLubyte difficulty);
    void checkForCollisions();
    QPoint getEndPt()const;
    bool isEnd();
public slots:
    void inclineChanged(double ix, double iy);
    void update();
    void getStarted();
    void getDestroyed();
    void createBall();
signals:
    void collision(QVector3D normal);
    void over();
};

class GLWidget : public QGLWidget
{
    Q_OBJECT
    GLdouble rotxAngle, rotyAngle,camRotzAngle;
    QVector2D mPressPos, mCurrPos;
    QTimer *timer;
    Level  *currentLevel, *nextLevel;
    GLfloat **colors;
public:
    GLWidget(QWidget *parent = 0);

    void initializeGL();
    void paintGL();
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);
public slots:
        void switchLevel();
signals:
    void inclineChanged(double ix, double iy);

public slots:

};

#endif // GLWIDGET_H
