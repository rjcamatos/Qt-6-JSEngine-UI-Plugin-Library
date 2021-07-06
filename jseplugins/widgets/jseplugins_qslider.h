#ifndef JSEPLUGINS_QSLIDER_H
#define JSEPLUGINS_QSLIDER_H

#include <QObject>
#include <QSlider>

class jseplugins_qslider : public QSlider
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qslider(QWidget *parent = nullptr);
    ~jseplugins_qslider();

    enum Orientation {
        Horizontal = 0x1,
        Vertical = 0x2
    };

    Q_INVOKABLE Q_ENUM(Orientation);
};

Q_DECLARE_METATYPE(jseplugins_qslider*);

#endif // JSEPLUGINS_QSLIDER_H
