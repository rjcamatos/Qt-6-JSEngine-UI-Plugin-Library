#include "jseplugins_qformlayout.h"

jseplugins_qformlayout::jseplugins_qformlayout(QWidget *parent) : QFormLayout(parent) {}

jseplugins_qformlayout::~jseplugins_qformlayout() {}

void jseplugins_qformlayout::addRow(QWidget *label, QWidget *field) {
    QFormLayout::addRow(label,field);
}

void jseplugins_qformlayout::addRow(const QString &labelText, QWidget *field) {
    QFormLayout::addRow(labelText,field);
}

void jseplugins_qformlayout::removeRow(int row) {
    QFormLayout::removeRow(row);
}
