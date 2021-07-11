#ifndef JSEPLUGINS_QPUSHBUTTON_H
#define JSEPLUGINS_QPUSHBUTTON_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QPushButton>

class jseplugins_qpushbutton: public QPushButton
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qpushbutton(QWidget *parent = nullptr);
    Q_INVOKABLE jseplugins_qpushbutton(const QString &text, QWidget *parent = nullptr);
    ~jseplugins_qpushbutton();

};

Q_DECLARE_METATYPE(jseplugins_qpushbutton*);

#endif // JSEPLUGINS_QPUSHBUTTON_H
