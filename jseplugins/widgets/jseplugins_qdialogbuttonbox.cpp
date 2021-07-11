#include "jseplugins_qdialogbuttonbox.h"

jseplugins_qdialogbuttonbox::jseplugins_qdialogbuttonbox(QWidget *parent) : QDialogButtonBox(parent) {}

jseplugins_qdialogbuttonbox::~jseplugins_qdialogbuttonbox() {}

void jseplugins_qdialogbuttonbox::setStandardButtons(StandardButtons buttons) {
    QDialogButtonBox::setStandardButtons(buttons);
}

QDialogButtonBox::StandardButton jseplugins_qdialogbuttonbox::standardButton(jseplugins_qpushbutton *button) {
    return QDialogButtonBox::standardButton(button);
}

void jseplugins_qdialogbuttonbox::addButton(jseplugins_qpushbutton *button, QDialogButtonBox::ButtonRole role) {
    qDebug() << "ADD BUTTON " << button << " ROLE " << role;
    QDialogButtonBox::addButton(button,role);
}

jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::addButton(const QString &text, ButtonRole role) {
    jseplugins_qpushbutton *retval = new jseplugins_qpushbutton(text);
    addButton(retval,role);
    return retval;
}


jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::addButton(StandardButton button) {
    qDebug() << Q_FUNC_INFO << " StandardButton:" << button;
    return (jseplugins_qpushbutton*)QDialogButtonBox::addButton(button);
}


jseplugins_qpushbutton* jseplugins_qdialogbuttonbox::button(StandardButton which) {
    return (jseplugins_qpushbutton*)(QDialogButtonBox::button(which));
}

QDialogButtonBox::ButtonRole jseplugins_qdialogbuttonbox::buttonRole(jseplugins_qpushbutton *button) {
    return QDialogButtonBox::buttonRole(button);
}

void jseplugins_qdialogbuttonbox::removeButton(jseplugins_qpushbutton *button) {
    QDialogButtonBox::removeButton(button);
}

