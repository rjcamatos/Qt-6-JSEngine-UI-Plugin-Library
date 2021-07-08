#include "jseplugins_qlistwidget.h"

jseplugins_qlistwidget::jseplugins_qlistwidget(QWidget *parent) : QListWidget(parent) { }

jseplugins_qlistwidget::~jseplugins_qlistwidget() {}

void jseplugins_qlistwidget::addItem(const QString &label) {
    QListWidget::addItem(new jseplugins_qlistwidgetitem(label,this));
}

void jseplugins_qlistwidget::addItem(jseplugins_qlistwidgetitem *item) {
    item->setParent(this);
    QListWidget::addItem(item);
}

jseplugins_qlistwidgetitem* jseplugins_qlistwidget::takeItem(int row) {
    jseplugins_qlistwidgetitem* obj = (jseplugins_qlistwidgetitem*)QListWidget::takeItem(row);
    obj->setParent(nullptr);
    return obj;
}

jseplugins_qlistwidgetitem* jseplugins_qlistwidget::item(int row) const {
    return (jseplugins_qlistwidgetitem*)QListWidget::item(row);
}

void jseplugins_qlistwidget::insertItem(int row, jseplugins_qlistwidgetitem *item) {
    item->setParent(this);
    QListWidget::insertItem(row,item);
}

void jseplugins_qlistwidget::insertItem(int row, const QString &label) {
    QListWidget::insertItem(row,new jseplugins_qlistwidgetitem(label,this));
}




