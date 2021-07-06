#ifndef JSEPLUGINS_QLISTWIDGET_H
#define JSEPLUGINS_QLISTWIDGET_H

#include <QObject>
#include <QListWidget>
#include "jseplugins_qlistwidgetitem.h"

class jseplugins_qlistwidget : public QListWidget
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qlistwidget(QWidget *parent = nullptr);
    ~jseplugins_qlistwidget();
    Q_INVOKABLE void addItem(const QString &label);
    Q_INVOKABLE void addItem(jseplugins_qlistwidgetitem *item);
};

Q_DECLARE_METATYPE(jseplugins_qlistwidget*);

#endif // JSEPLUGINS_QLISTWIDGET_H
