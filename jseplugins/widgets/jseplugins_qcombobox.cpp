#include "jseplugins_qcombobox.h"

jseplugins_qcombobox::jseplugins_qcombobox(QWidget *parent) : QComboBox(parent) {}

jseplugins_qcombobox::~jseplugins_qcombobox() {}


void jseplugins_qcombobox::addItem(const QString &atext, const QVariant &auserData) {
    QComboBox::addItem(atext,auserData);
}

void jseplugins_qcombobox::addItem(const QIcon &icon, const QString &text, const QVariant &userData) {
    QComboBox::addItem(icon,text,userData);
}

QVariant jseplugins_qcombobox::itemData(int index, int role) const {
    return QComboBox::itemData(index,role);
}
