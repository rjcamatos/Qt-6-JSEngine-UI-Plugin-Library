#ifndef JSEPLUGINS_QUILOADER_H
#define JSEPLUGINS_QUILOADER_H

#include "QDebug"
#include "QString"
#include "QLayout"
#include "QJSValue"
#include "QUiLoader"
#include "../io/jseplugins_qfile.h"

class jseplugins_quiloader : public QUiLoader
{
    Q_OBJECT

public:

    Q_INVOKABLE jseplugins_quiloader(QObject *parent = nullptr);
    ~jseplugins_quiloader();
    Q_INVOKABLE  QString getWorkingDirectory();
    Q_INVOKABLE void setWorkingDirectory(QString path);
    Q_INVOKABLE QJSValue load(jseplugins_qfile *file);
    QWidget* createWidget(const QString &className, QWidget *parent = nullptr, const QString &name = QString());
    QLayout* createLayout(const QString &className, QObject *parent = nullptr, const QString &name = QString());
    //Q_INVOKABLE QJSValue  createAction(QObject*  parent, const QString&  name);
    //Q_INVOKABLE QJSValue  createActionGroup(QObject*  parent, const QString&  name);
    //Q_INVOKABLE QJSValue  createLayout(const QString&  className, QObject*  parent, const QString&  name);

};

#endif
