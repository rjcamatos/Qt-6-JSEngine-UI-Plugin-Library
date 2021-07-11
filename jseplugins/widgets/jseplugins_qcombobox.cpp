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

void jseplugins_qcombobox::hidePopup() {
    QComboBox::hidePopup();
}

void jseplugins_qcombobox::showPopup() {
    QComboBox::showPopup();
}

void jseplugins_qcombobox::insertItem(int index, const QString &text, const QVariant &userData) {
    QComboBox::insertItem(index,text,userData);
}

void jseplugins_qcombobox::insertItem(int index, const QIcon &icon, const QString &text, const QVariant &userData) {
    QComboBox::insertItem(index,icon,text,userData);
}

QVariant jseplugins_qcombobox::itemData(int index, int role) {
    return QComboBox::itemData(index,role);
}

QIcon jseplugins_qcombobox::itemIcon(int index) {
    return QComboBox::itemIcon(index);
}

QString jseplugins_qcombobox::itemText(int index) {
    return QComboBox::itemText(index);
}

void jseplugins_qcombobox::removeItem(int index) {
    QComboBox::removeItem(index);
}

void jseplugins_qcombobox::setItemData(int index, const QVariant &value, int role) {
    QComboBox::setItemData(index,value,role);
}

void jseplugins_qcombobox::setItemIcon(int index, const QIcon &icon) {
    QComboBox::setItemIcon(index,icon);
}

void jseplugins_qcombobox::setItemText(int index, const QString &text) {
    QComboBox::setItemText(index,text);
}
