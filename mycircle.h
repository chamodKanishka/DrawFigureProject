#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include <QMainWindow>
#include <QWidget>
#include <QPainter>
class MyCircle: public QWidget
{
    Q_OBJECT

public:
    MyCircle(int value, QWidget *parent);

    int value() const;
    int heightForWidth(int) const;
    QSize sizeHint() const;
    QSize sizehint() const;
public slots:
    void setValue(int);

signals:
    void ValueChanged(int);

protected:
    void paintEvent(QPaintEvent *);

private:

        int m_value;
        void drawMyFigure();
};

#endif // MYCIRCLE_H
