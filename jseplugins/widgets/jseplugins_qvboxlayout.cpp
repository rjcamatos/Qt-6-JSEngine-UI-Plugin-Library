#include "jseplugins_qvboxlayout.h"



jseplugins_qvboxlayout::jseplugins_qvboxlayout(QWidget *parent) : QVBoxLayout(parent) {}

jseplugins_qvboxlayout::~jseplugins_qvboxlayout() {}

void jseplugins_qvboxlayout::addWidget(QWidget *widget) {
    QVBoxLayout::addWidget(widget);
}

void jseplugins_qvboxlayout::removeWidget(QWidget *widget) {
    QVBoxLayout::removeWidget(widget);
}

