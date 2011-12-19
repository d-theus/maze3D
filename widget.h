#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include "glwidget.h"
#include "settings.h"

class Widget : public QWidget
{
    Q_OBJECT
    QLabel lbl;
    GLWidget *glWidget;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *e);
public slots:
    void inclineChanged(double ix, double iy);
private:
};

#endif // WIDGET_H
