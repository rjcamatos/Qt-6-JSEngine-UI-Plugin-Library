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
    static void installMessageHandler();
private:
    QJSEngine *_jsengine;

};

void jsepluginsMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

#endif // JSENGINE_H
