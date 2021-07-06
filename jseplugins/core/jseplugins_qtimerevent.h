#ifndef JSEPLUGINS_QTIMEREVENT_H
#define JSEPLUGINS_QTIMEREVENT_H

#include <QObject>
#include <QTimerEvent>
#include "jseplugins_qevent.h"

class jseplugins_qtimerevent : public jseplugins_qevent
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qtimerevent(int timerId);
    jseplugins_qtimerevent(QTimerEvent *event);
    ~jseplugins_qtimerevent();
    Q_INVOKABLE int timerId();

private:
    QTimerEvent *_event;
};

#endif // JSEPLUGINS_QTIMEREVENT_H
