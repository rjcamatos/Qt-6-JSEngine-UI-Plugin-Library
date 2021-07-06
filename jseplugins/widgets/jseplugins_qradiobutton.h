#ifndef JSEPLUGINS_QRADIOBUTTON_H
#define JSEPLUGINS_QRADIOBUTTON_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QRadioButton>

class jseplugins_qradiobutton: public QRadioButton
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qradiobutton(QWidget *parent = nullptr);
    ~jseplugins_qradiobutton();

};

Q_DECLARE_METATYPE(jseplugins_qradiobutton*);

#endif // JSEPLUGINS_QTOOLBUTTON_H
