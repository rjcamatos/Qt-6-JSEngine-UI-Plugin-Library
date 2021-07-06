#include "jseplugins_qevent.h"

jseplugins_qevent::jseplugins_qevent(QEvent::Type type) {
    _event = new QEvent(type);
}
jseplugins_qevent::jseplugins_qevent(QEvent *event) {
    _event = event;
}

jseplugins_qevent::~jseplugins_qevent() { }

void jseplugins_qevent::accept() {
    _event->accept();
}

void jseplugins_qevent::ignore() {
    _event->ignore();
}

bool jseplugins_qevent::isAccepted() {
    return _event->isAccepted();
}

void jseplugins_qevent::setAccepted(bool accepted) {
    _event->setAccepted(accepted);
}

bool jseplugins_qevent::spontaneous() {
    return _event->spontaneous();
}

QEvent::Type jseplugins_qevent::type() {
    return _event->type();
}

QString jseplugins_qevent::typeString(){
    return QVariant::fromValue<QEvent::Type>(_event->type()).toString();
}

int jseplugins_qevent::registerEventType(int hint) {
    return QEvent::registerEventType(hint);
}


