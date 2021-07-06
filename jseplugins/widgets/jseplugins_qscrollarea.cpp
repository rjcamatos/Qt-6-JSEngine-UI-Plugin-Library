#include "jseplugins_qscrollarea.h"

jseplugins_qscrollarea::jseplugins_qscrollarea(QWidget *parent) : QScrollArea(parent) {}

jseplugins_qscrollarea::~jseplugins_qscrollarea() {}

void jseplugins_qscrollarea::setWidget(QWidget *widget) {
    QScrollArea::setWidget(widget);
}
