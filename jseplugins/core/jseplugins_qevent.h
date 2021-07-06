#ifndef JSEPLUGINS_QEVENT_H
#define JSEPLUGINS_QEVENT_H

#include <QDebug>
#include <QObject>
#include <QEvent>
#include <QJSEngine>
#include <QJSValue>
#include <QMetaEnum>
#include <QEvent>

class jseplugins_qevent : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qevent(QEvent::Type type);
    jseplugins_qevent(QEvent *event);
    ~jseplugins_qevent();
    Q_INVOKABLE void accept();
    Q_INVOKABLE void ignore();
    Q_INVOKABLE bool isAccepted();
    Q_INVOKABLE void setAccepted(bool accepted);
    Q_INVOKABLE bool spontaneous();
    Q_INVOKABLE QEvent::Type type();
    Q_INVOKABLE QString typeString();
    Q_INVOKABLE static int registerEventType(int hint = -1);

private:
    QEvent *_event;
};


#endif // JSEPLUGINS_QEVENT_H
