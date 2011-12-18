#include "widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    glWidget = new GLWidget;
    QGridLayout lyt;
    lbl.setText("Default text");
    lbl.setGeometry(HEIGHT+40, 20, 100, 100);
    lyt.addWidget(glWidget, 0,0, 2, 2, Qt::AlignLeft);
    lyt.addWidget(&lbl, 0, 5, 1, 1, Qt::AlignRight);
    this->setGeometry(40, 40, 800, 600);
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
