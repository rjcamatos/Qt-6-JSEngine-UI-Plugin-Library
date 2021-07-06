#include "jseplugins_qsize.h"

jseplugins_qsize::jseplugins_qsize(int width, int height) : QSize(width,height)
{
}

QSize jseplugins_qsize::getReference() {
    return *this;
}
