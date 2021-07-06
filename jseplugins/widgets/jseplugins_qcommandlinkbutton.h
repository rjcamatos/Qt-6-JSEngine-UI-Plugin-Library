#ifndef JSEPLUGINS_QCOMMANDLINKBUTTON_H
#define JSEPLUGINS_QCOMMANDLINKBUTTON_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QCommandLinkButton>

class jseplugins_qcommandlinkbutton: public QCommandLinkButton
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qcommandlinkbutton(QWidget *parent = nullptr);
    ~jseplugins_qcommandlinkbutton();
};

Q_DECLARE_METATYPE(jseplugins_qcommandlinkbutton*);

#endif // JSEPLUGINS_QPUSHBUTTON_H
