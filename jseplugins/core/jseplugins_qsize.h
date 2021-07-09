#ifndef JSEPLUGINS_QSIZE_H
#define JSEPLUGINS_QSIZE_H

#include <QObject>
#include <QSize>

class jseplugins_qsize : public QObject, public QSize
{
    Q_OBJECT
    Q_PROPERTY(QSize ref READ getReference);
public:
    Q_INVOKABLE jseplugins_qsize(int width, int height);
    QSize getReference();
};

#endif // JSEPLUGINS_QSIZE_H
