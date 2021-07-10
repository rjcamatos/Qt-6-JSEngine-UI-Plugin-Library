#ifndef JSEPLUGINS_QPOINT_H
#define JSEPLUGINS_QPOINT_H

#include <QObject>
#include <QPoint>

class jseplugins_qpoint : public QObject, public QPoint
{
    Q_OBJECT
    Q_PROPERTY(int x READ x WRITE setX)
    Q_PROPERTY(int y READ y WRITE setY)
    Q_PROPERTY(int manhattanLength READ manhattanLength)
    Q_PROPERTY(bool isNull READ isNull);
    Q_PROPERTY(QPoint ref READ getReference);
public:
    Q_INVOKABLE jseplugins_qpoint(QObject *parent = nullptr);
    Q_INVOKABLE jseplugins_qpoint(int xpos, int ypos);
    ~jseplugins_qpoint();
    Q_INVOKABLE QPoint getReference();

};

#endif // JSEPLUGINS_QPOINT_H
