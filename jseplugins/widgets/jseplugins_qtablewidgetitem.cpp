#include "jseplugins_qtablewidgetitem.h"
#include "jseplugins_qtablewidget.h"
#include <QJSEngine>
jseplugins_qtablewidgetitem::jseplugins_qtablewidgetitem(const QIcon &icon, const QString &text, int type) : QTableWidgetItem(icon,text,type) {
}

jseplugins_qtablewidgetitem::jseplugins_qtablewidgetitem(const QString &text, int type) : QTableWidgetItem(text,type) {
}

jseplugins_qtablewidgetitem::jseplugins_qtablewidgetitem(int type) : QTableWidgetItem(type) {
}

jseplugins_qtablewidgetitem::jseplugins_qtablewidgetitem(QTableWidgetItem *item) {
    QTableWidgetItem::operator=(*item);
}


QVariant jseplugins_qtablewidgetitem::data(int role) const {
    return QTableWidgetItem::data(role);
}

void jseplugins_qtablewidgetitem::setData(int role, const QVariant &value) {
    QTableWidgetItem::setData(role,value);
}

jseplugins_qtablewidgetitem::~jseplugins_qtablewidgetitem() {}
