#include "jseplugins_qgridlayout.h"

jseplugins_qgridlayout::jseplugins_qgridlayout(QWidget *parent) : QGridLayout(parent) {}

jseplugins_qgridlayout::~jseplugins_qgridlayout() {}

void jseplugins_qgridlayout::addWidget(QWidget *widget) {
    QGridLayout::addWidget(widget);
}

void jseplugins_qgridlayout::addWidget(QWidget *widget, int row, int column, Qt::Alignment alignment) {
    QGridLayout::addWidget(widget,row,column,alignment);
}

void jseplugins_qgridlayout::removeWidget(QWidget *widget) {
    QGridLayout::removeWidget(widget);
}
