#ifndef JSEPLUGINS_QDIALOGBUTTONBOX_H
#define JSEPLUGINS_QDIALOGBUTTONBOX_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QDialogButtonBox>
#include <QAbstractButton>
#include "jseplugins_qpushbutton.h"

class jseplugins_qdialogbuttonbox: public QDialogButtonBox
{
    Q_OBJECT
    Q_PROPERTY(QSize minimumSizeHint READ minimumSizeHint);
    Q_PROPERTY(QSize sizeHint READ sizeHint);
public:
    Q_INVOKABLE jseplugins_qdialogbuttonbox(QWidget *parent = nullptr);
    ~jseplugins_qdialogbuttonbox();
    Q_INVOKABLE void setStandardButtons(StandardButtons buttons);
    Q_INVOKABLE StandardButton standardButton(jseplugins_qpushbutton *button);
    Q_INVOKABLE void removeButton(jseplugins_qpushbutton *button);
    Q_INVOKABLE jseplugins_qpushbutton* addButton(const QString &text, ButtonRole role);
    Q_INVOKABLE jseplugins_qpushbutton* addButton(StandardButton button);
    Q_INVOKABLE void addButton(jseplugins_qpushbutton *button, ButtonRole role);
    Q_INVOKABLE jseplugins_qpushbutton* button(StandardButton which);
    Q_INVOKABLE ButtonRole buttonRole(jseplugins_qpushbutton *button);

    Q_ENUM(ButtonRole);
    Q_ENUM(StandardButton);

};

Q_DECLARE_METATYPE(jseplugins_qdialogbuttonbox*);

#endif // JSEPLUGINS_QPUSHBUTTON_H
