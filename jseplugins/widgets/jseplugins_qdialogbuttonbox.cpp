#include "jseplugins_qdialogbuttonbox.h"

jseplugins_qdialogbuttonbox::jseplugins_qdialogbuttonbox(QWidget *parent) : QDialogButtonBox(parent) {}

jseplugins_qdialogbuttonbox::~jseplugins_qdialogbuttonbox() {}

void jseplugins_qdialogbuttonbox::setStandardButtons(QDialogButtonBox::StandardButtons buttons) {
    QDialogButtonBox::setStandardButtons(buttons);
}

QDialogButtonBox::StandardButton jseplugins_qdialogbuttonbox::standardButton(QAbstractButton *button) {
    return QDialogButtonBox::standardButton(button);
}

