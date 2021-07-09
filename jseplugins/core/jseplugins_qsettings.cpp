#include "jseplugins_qsettings.h"

jseplugins_qsettings::jseplugins_qsettings(QObject *parent) : QSettings(parent) {}

jseplugins_qsettings::jseplugins_qsettings(const QString &fileName, QSettings::Format format, QObject *parent) : QSettings(fileName,format,parent) {}

void jseplugins_qsettings::setValue(const QString &key, const QVariant &value) {
    QSettings::setValue(key,value);
}

QVariant jseplugins_qsettings::value(const QString &key, const QVariant &defaultValue) const {
    return QSettings::value(key,defaultValue);
}

void jseplugins_qsettings::remove(const QString &key) {
   QSettings::remove(key);
}

void jseplugins_qsettings::beginGroup(const QString &prefix) {
    QSettings::beginGroup(prefix);
}

void jseplugins_qsettings::endGroup() {
    QSettings::endGroup();
}

QString jseplugins_qsettings::group() const {
    return QSettings::group();
}

QSettings::Scope jseplugins_qsettings::scope() const {
    return QSettings::scope();
}

QSettings::Status jseplugins_qsettings::status() const {
    return QSettings::status();
}

void jseplugins_qsettings::sync() {
    QSettings::sync();
}
