#include "jseplugins_qdir.h"



jseplugins_qdir::jseplugins_qdir(const QString &path) {
    _qdir = new QDir(path);
}

QStringList jseplugins_qdir::entryList(const QStringList &nameFilters, Filters filters, SortFlags sort) const {
    return _qdir->entryList(nameFilters,(QDir::Filters)filters,(QDir::SortFlags)sort);
}
