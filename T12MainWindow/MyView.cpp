#include "MyView.h"

MyView::MyView(QWidget *parent) : QWidget(parent)
{

}
void MyView::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.fillRect(rect(),Qt::red);
}
