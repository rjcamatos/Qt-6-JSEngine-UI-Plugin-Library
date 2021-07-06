#include "jseplugins_qexample.h"

jseplugins_qexample::jseplugins_qexample()
{
    qDebug() << Q_FUNC_INFO;
    this->value = "not defined yet";
}

void jseplugins_qexample::setValue(QString value) {
    qDebug() << Q_FUNC_INFO << "\n\t" << value;
    this->value = value;
}

QString jseplugins_qexample::getValue() {
    qDebug() << Q_FUNC_INFO << "\n\t" << this->value;
    return this->value;
}
