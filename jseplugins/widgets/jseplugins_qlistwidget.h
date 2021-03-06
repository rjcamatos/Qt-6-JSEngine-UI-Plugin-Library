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
    Q_INVOKABLE jseplugins_qlistwidgetitem* takeItem(int row);
    Q_INVOKABLE jseplugins_qlistwidgetitem*	item(int row) const;
    Q_INVOKABLE void insertItem(int row, const QString &label);
    Q_INVOKABLE void insertItem(int row, jseplugins_qlistwidgetitem *item);
};

Q_DECLARE_METATYPE(jseplugins_qlistwidget*);

#endif // JSEPLUGINS_QLISTWIDGET_H
