#include "jseplugins_qpoint.h"

jseplugins_qpoint::jseplugins_qpoint(QObject *parent) : QObject(parent) {}

jseplugins_qpoint::jseplugins_qpoint(int xpos, int ypos) : QPoint(xpos,ypos) {}

jseplugins_qpoint::~jseplugins_qpoint() {}

QPoint jseplugins_qpoint::getReference() {
    return *this;
}
