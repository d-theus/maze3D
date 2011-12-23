#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    glWidget = new GLWidget;
    QGridLayout lyt;

    lbl.setText("0, 0");
    lbl_time.setText("Current level time:");

    lbl_incline.setText("Inclines (x,y):");


    lbl.setGeometry(WIDTH+40, 20, 100, 100);
    lbl_incline.setGeometry(WIDTH+40, 20, 100, 10);

    lcd_time.setGeometry(WIDTH+40, 120, 100, 100);
    lbl_time.setGeometry(WIDTH+40, 100, 100, 10);
    lcd_time.setSmallDecimalPoint(true);

    lyt.addWidget(glWidget, 0,0, 5, 5, Qt::AlignLeft);
    lyt.addWidget(&lbl_incline, 0, 5, 1,1,Qt::AlignLeft);
    lyt.addWidget(&lbl, 1, 5, 1, 1, Qt::AlignRight);
    lyt.addWidget(&lbl_time, 2, 5, 1,1,Qt::AlignLeft);
    lyt.addWidget(&lcd_time, 3, 5, 1,1, Qt::AlignLeft);

    this->setGeometry(40, 40, 800, 600);
    this->setFixedSize(800,600);
    lyt.addWidget(glWidget, 0,0, 2, 2, Qt::AlignLeft);
    lyt.addWidget(&lbl, 0, 5, 1, 1, Qt::AlignRight);
    this->setGeometry(20, 20, WIDTH+200, HEIGHT+40);
    this->setFixedSize(WIDTH+200, HEIGHT+40);
    this->setLayout(&lyt);

    connect(glWidget, SIGNAL(inclineChanged(double,double)), this, SLOT(inclineChanged(double,double)));
    connect(glWidget, SIGNAL(timeChanged(double)), this, SLOT(inc_time(double)));
}

Widget::~Widget()
{
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    this->glWidget->keyPressEvent(e);
}

void Widget:: inclineChanged(double ix, double iy)
{
    lbl.setText(QString::number(ix)+", "+QString::number(iy));
}

void Widget:: inc_time(double time)
{
    if (qAbs(time - lcd_time.value())> 0.1)
    lcd_time.display(time);
}
