#include "obszarrysowania.h"
#include "QDebug"
#include "QImage"
#include "QPainter"
#include "QPixmap"
#include "QMouseEvent"
#include <QLabel>
#include "QApplication"
ObszarRysowania::ObszarRysowania(QWidget *parent) : QWidget(parent)
{
    mColor = Qt::black;
    mRysowanie = false;
    point0.setX(0);
    point0.setY(0);
}
void ObszarRysowania::setColor1()
{
    mColor = Qt::red;
}
void ObszarRysowania::setColor2()
{
    mColor = Qt::yellow;
}
void ObszarRysowania::setColor3()
{
    mColor = Qt::blue;
}
void ObszarRysowania::setColor4()
{
    mColor = Qt::green;
}
void ObszarRysowania::delImage()
{
    QImage im(mRysunek.size(), QImage::Format_RGB32);
    im.setPixel(0,0,qRgb(189, 149, 39));
    im.fill(Qt::white);
    mRysunek = im;
    this->update();
}
void ObszarRysowania::save()
{
    mRysunek.save("/home/oleh/Dokumenty/image.png","PNG");
}
void ObszarRysowania::mousePressEvent(QMouseEvent *zdarzenie)
{ 
    if(zdarzenie->button() == Qt::LeftButton)
    {
        mRysowanie = true;
    }
    point1.setX(zdarzenie->x());
    point1.setY(zdarzenie->y());
}
void ObszarRysowania::mouseMoveEvent(QMouseEvent *zdarzenie)
{
    point2.setX(zdarzenie->x());
    point2.setY(zdarzenie->y());
    QPainter rysownik(&mRysunek);
    rysownik.setPen(mColor);
    rysownik.drawLine(point1,point2);
    point1.setX(point2.x());
    point1.setY(point2.y());
}
void ObszarRysowania::mouseReleaseEvent(QMouseEvent *zdarzenie)
{
    if(zdarzenie->button() == Qt::LeftButton)
    {
        mRysowanie = false;
    }
    point2.setX(zdarzenie->x());
    point2.setY(zdarzenie->y());
}
void ObszarRysowania::resizeEvent(QResizeEvent *zdarzenie)
{
    QImage im(zdarzenie->size(), QImage::Format_RGB32);
    im.setPixel(0,0,qRgb(189, 149, 39));
    im.fill(Qt::white);
    mRysunek = im;
    this->update();
}
void ObszarRysowania::paintEvent(QPaintEvent *e)
{
    QPainter rysownik(this);
    rysownik.drawImage(point0,mRysunek);
    this->update();
}
