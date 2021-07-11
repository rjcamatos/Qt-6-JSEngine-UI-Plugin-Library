#include "jseplugins_qdialogbuttonbox.h"

jseplugins_qdialogbuttonbox::jseplugins_qdialogbuttonbox(QWidget *parent) : QDialogButtonBox(parent) {}

jseplugins_qdialogbuttonbox::~jseplugins_qdialogbuttonbox() {}

void jseplugins_qdialogbuttonbox::setStandardButtons(QDialogButtonBox::StandardButtons buttons) {
    QDialogButtonBox::setStandardButtons(buttons);
}

QDialogButtonBox::StandardButton jseplugins_qdialogbuttonbox::standardButton(QAbstractButton *button) {
    return QDialogButtonBox::standardButton(button);
}

jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::addButton(const QString &text, QDialogButtonBox::ButtonRole role) {
    return static_cast<jseplugins_qpushbutton*>(QDialogButtonBox::addButton(text,role));
}

jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::addButton(QDialogButtonBox::StandardButton button) {    
    return static_cast<jseplugins_qpushbutton*>(QDialogButtonBox::addButton(button));
}

jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::button(QDialogButtonBox::StandardButton which) {
    return static_cast<jseplugins_qpushbutton*>(QDialogButtonBox::button(which));
}

QDialogButtonBox::ButtonRole jseplugins_qdialogbuttonbox::buttonRole(jseplugins_qpushbutton *button) {
    return QDialogButtonBox::buttonRole(button);
}

void jseplugins_qdialogbuttonbox::removeButton(QJSValue button) {
    QDialogButtonBox::removeButton(static_cast<QAbstractButton*>(button.toQObject()));
}

