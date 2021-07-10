#include "jseplugins_qsize.h"

jseplugins_qsize::jseplugins_qsize(int width, int height) : QSize(width,height) {}

jseplugins_qsize::~jseplugins_qsize() {}

QSize jseplugins_qsize::getReference() {
    return *this;
}

void jseplugins_qsize::scale(const QSize &size, Qt::AspectRatioMode mode) {
    QSize::scale(size,mode);
}
