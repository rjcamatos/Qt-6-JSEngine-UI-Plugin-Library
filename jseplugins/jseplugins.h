#ifndef JSPLUGINS_H
#define JSPLUGINS_H

#include <QDebug>
#include <QObject>
#include <QtQml/QJSEngine>
#include <QString>
#include <QMainWindow>
#include "jseplugins_types.h"

class jseplugins : public QObject
{
public:
    jseplugins();
    void evaluate(QWidget *widget, QString scriptPath);

private:
    QJSEngine *_jsengine;
};

#endif // JSENGINE_H
