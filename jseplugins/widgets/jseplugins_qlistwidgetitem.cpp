#include "jseplugins_qlistwidgetitem.h"

jseplugins_qlistwidgetitem::jseplugins_qlistwidgetitem(const QIcon &icon, const QString &text, QListWidget *parent, int type) : QListWidgetItem(icon,text,parent,type) {}

jseplugins_qlistwidgetitem::jseplugins_qlistwidgetitem(const QString &text, QListWidget *parent, int type) : QListWidgetItem(text,parent,type) {}

jseplugins_qlistwidgetitem::~jseplugins_qlistwidgetitem() {}

void jseplugins_qlistwidgetitem::setText(const QString &text) {
    QListWidgetItem::setText(text);
}

void jseplugins_qlistwidgetitem::setIcon(const QIcon &icon) {
    QListWidgetItem::setIcon(icon);
}

void jseplugins_qlistwidgetitem::setData(int role, const QVariant &value) {
    QListWidgetItem::setData(role,value);
}

QVariant jseplugins_qlistwidgetitem::data(int role) const {
    return QListWidgetItem::data(role);
}
