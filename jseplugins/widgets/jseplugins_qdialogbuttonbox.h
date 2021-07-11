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

public:
    Q_INVOKABLE jseplugins_qdialogbuttonbox(QWidget *parent = nullptr);
    ~jseplugins_qdialogbuttonbox();
    Q_INVOKABLE void setStandardButtons(QDialogButtonBox::StandardButtons buttons);
    Q_INVOKABLE QDialogButtonBox::StandardButton standardButton(QAbstractButton *button);
    Q_INVOKABLE void removeButton(QJSValue button);
    Q_INVOKABLE jseplugins_qpushbutton* addButton(const QString &text, QDialogButtonBox::ButtonRole role);
    Q_INVOKABLE jseplugins_qpushbutton* addButton(QDialogButtonBox::StandardButton button);
    Q_INVOKABLE jseplugins_qpushbutton* button(QDialogButtonBox::StandardButton which);
    Q_INVOKABLE QDialogButtonBox::ButtonRole buttonRole(jseplugins_qpushbutton *button);



    Q_ENUM(QDialogButtonBox::StandardButton);
    Q_ENUM(QDialogButtonBox::ButtonRole);
};

Q_DECLARE_METATYPE(jseplugins_qdialogbuttonbox*);

#endif // JSEPLUGINS_QPUSHBUTTON_H
