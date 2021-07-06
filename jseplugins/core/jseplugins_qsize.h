#ifndef JSEPLUGINS_QSIZE_H
#define JSEPLUGINS_QSIZE_H

#include <QObject>
#include <QSize>

class jseplugins_qsize : public QObject, public QSize
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qsize(int width, int height);
    Q_INVOKABLE QSize getReference();
};

#endif // JSEPLUGINS_QSIZE_H
