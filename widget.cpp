#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    glWidget = new GLWidget;
    QGridLayout lyt;
    lbl.setText("Default text");
<<<<<<< HEAD
    lbl.setGeometry(HEIGHT+40, 20, 100, 100);
    lyt.addWidget(glWidget, 0,0, 2, 2, Qt::AlignLeft);
    lyt.addWidget(&lbl, 0, 5, 1, 1, Qt::AlignRight);
    this->setGeometry(40, 40, 800, 600);
    this->setFixedSize(800,600);
=======
    lbl.setGeometry(WIDTH+50, 40 , 100, 100);
    lyt.addWidget(glWidget, 0,0, 2, 2, Qt::AlignLeft);
    lyt.addWidget(&lbl, 0, 5, 1, 1, Qt::AlignRight);
    this->setGeometry(20, 20, WIDTH+200, HEIGHT+40);
    this->setFixedSize(WIDTH+200, HEIGHT+40);
>>>>>>> 9baa3d663a4852b687027ee8e747c6f29d20823b
    this->setLayout(&lyt);

    connect(glWidget, SIGNAL(inclineChanged(double,double)), this, SLOT(inclineChanged(double,double)));
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
