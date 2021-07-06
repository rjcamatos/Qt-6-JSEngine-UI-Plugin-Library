#include "jseplugins_qlistwidget.h"

jseplugins_qlistwidget::jseplugins_qlistwidget(QWidget *parent) : QListWidget(parent) { }

jseplugins_qlistwidget::~jseplugins_qlistwidget() {}

void jseplugins_qlistwidget::addItem(const QString &label) {
    QListWidget::addItem(label);
}

void jseplugins_qlistwidget::addItem(jseplugins_qlistwidgetitem *item) {
    item->setParent(this);
    QListWidget::addItem(item);
}
