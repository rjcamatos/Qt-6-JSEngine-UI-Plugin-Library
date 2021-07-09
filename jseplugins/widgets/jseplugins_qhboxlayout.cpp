#include "jseplugins_qhboxlayout.h"

jseplugins_qhboxlayout::jseplugins_qhboxlayout(QWidget *parent) : QHBoxLayout(parent) {}

jseplugins_qhboxlayout::~jseplugins_qhboxlayout() {}

void jseplugins_qhboxlayout::addWidget(QWidget *widget) {
    QHBoxLayout::addWidget(widget);
}

void jseplugins_qhboxlayout::removeWidget(QWidget *widget) {
    QBoxLayout::removeWidget(widget);
}

