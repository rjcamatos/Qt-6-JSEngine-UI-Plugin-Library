#include "jseplugins_qicon.h"
#include <QDebug>
jseplugins_qicon::jseplugins_qicon() {}

jseplugins_qicon::jseplugins_qicon(const QString &fileName) : QIcon(fileName) { }

jseplugins_qicon::~jseplugins_qicon() {};

void jseplugins_qicon::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state) {
    QIcon::addFile(fileName,size,mode,state);
}

QIcon jseplugins_qicon::getReference() {
    return *this;
}
