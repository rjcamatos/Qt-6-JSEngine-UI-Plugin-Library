#ifndef JSEPLUGINS_QDIALOGBUTTONBOX_H
#define JSEPLUGINS_QDIALOGBUTTONBOX_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QDialogButtonBox>
#include <QAbstractButton>

class jseplugins_qdialogbuttonbox: public QDialogButtonBox
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qdialogbuttonbox(QWidget *parent = nullptr);
    Q_INVOKABLE void setStandardButtons(QDialogButtonBox::StandardButtons buttons);
    Q_INVOKABLE QDialogButtonBox::StandardButton standardButton(QAbstractButton *button);
    ~jseplugins_qdialogbuttonbox();

    Q_ENUM(QDialogButtonBox::StandardButton);
};

Q_DECLARE_METATYPE(jseplugins_qdialogbuttonbox*);

#endif // JSEPLUGINS_QPUSHBUTTON_H
