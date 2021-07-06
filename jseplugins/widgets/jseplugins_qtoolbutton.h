#ifndef JSEPLUGINS_QTOOLBUTTON_H
#define JSEPLUGINS_QTOOLBUTTON_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QToolButton>

class jseplugins_qtoolbutton: public QToolButton
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qtoolbutton(QWidget *parent = nullptr);
    ~jseplugins_qtoolbutton();
};

Q_DECLARE_METATYPE(jseplugins_qtoolbutton*);

#endif // JSEPLUGINS_QTOOLBUTTON_H
