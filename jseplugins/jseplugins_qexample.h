#ifndef JSPLUGINS_QEXAMPLE_H
#define JSPLUGINS_QEXAMPLE_H

#include <QDebug>
#include <QObject>
#include <QString>

class jseplugins_qexample : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qexample();
    Q_INVOKABLE void setValue(QString value);
    Q_INVOKABLE QString getValue();
private:
    QString value;
};

#endif // JSENGINE_QEXAMPLE_H
