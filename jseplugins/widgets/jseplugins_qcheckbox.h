#ifndef JSEPLUGINS_QCHECKBOX_H
#define JSEPLUGINS_QCHECKBOX_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QCheckBox>

class jseplugins_qcheckbox : public QCheckBox
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qcheckbox(QWidget *parent = nullptr);
    ~jseplugins_qcheckbox();
};

Q_DECLARE_METATYPE(jseplugins_qcheckbox*);

#endif // JSEPLUGINS_QCHECKBOX_H
