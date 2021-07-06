#include "jseplugins_qtimerevent.h"

jseplugins_qtimerevent::jseplugins_qtimerevent(int timerId) : jseplugins_qevent(QEvent::Timer)
{
    _event = new QTimerEvent(timerId);

}

jseplugins_qtimerevent::jseplugins_qtimerevent(QTimerEvent *event) : jseplugins_qevent(QEvent::Timer)
{
    _event = event;
}

int jseplugins_qtimerevent::timerId() {
    return _event->timerId();
}

jseplugins_qtimerevent::~jseplugins_qtimerevent() {
    _event = nullptr;
}
