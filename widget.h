#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include "glwidget.h"
#include "settings.h"

class Widget : public QWidget
{
    Q_OBJECT
    QLabel lbl,lbl_time, lbl_incline;
    QLCDNumber lcd_time;
    uint time;
    GLWidget *glWidget;
public:
    Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *e);
public slots:
    void inclineChanged(double ix, double iy);
    void inc_time(double);
private:
};

#endif // WIDGET_H
