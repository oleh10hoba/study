#ifndef OBSZARRYSOWANIA_H
#define OBSZARRYSOWANIA_H

#include <QWidget>
#include <QtGui>
//#include <QtCore>
class ObszarRysowania : public QWidget
{
    Q_OBJECT
    bool mRysowanie;
    QImage mRysunek;
    QColor mColor;
    QPoint point0;
    QPoint point1;
    QPoint point2;

public:
    explicit ObszarRysowania(QWidget *parent = nullptr);

signals:

public slots:
    void setColor1();
    void setColor2();
    void setColor3();
    void setColor4();
    void delImage();
    void   save();

    void mousePressEvent(QMouseEvent *zdarzenie);
    void mouseMoveEvent(QMouseEvent *zdarzenie);
    void mouseReleaseEvent(QMouseEvent *zdarzenie);
    void paintEvent(QPaintEvent *zdarzenie);
    void resizeEvent(QResizeEvent *zdarzenie);
};


#endif // OBSZARRYSOWANIA_H
