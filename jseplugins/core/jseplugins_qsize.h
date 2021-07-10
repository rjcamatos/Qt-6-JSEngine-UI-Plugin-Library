#ifndef JSEPLUGINS_QSIZE_H
#define JSEPLUGINS_QSIZE_H

#include <QObject>
#include <QSize>

class jseplugins_qsize : public QObject, public QSize
{
    Q_OBJECT
    Q_PROPERTY(int height READ height WRITE setHeight);
    Q_PROPERTY(int width READ width WRITE setWidth);
    Q_PROPERTY(QSize ref READ getReference);
public:
    Q_INVOKABLE jseplugins_qsize(int width, int height);
    ~jseplugins_qsize();
    Q_INVOKABLE void scale(const QSize &size, Qt::AspectRatioMode mode);
    Q_INVOKABLE QSize getReference();
};

#endif // JSEPLUGINS_QSIZE_H
