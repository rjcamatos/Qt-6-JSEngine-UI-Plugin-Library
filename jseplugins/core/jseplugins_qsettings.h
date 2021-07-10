#ifndef JSEPLUGINS_QSETTINGS_H
#define JSEPLUGINS_QSETTINGS_H

#include <QObject>
#include <QSettings>

class jseplugins_qsettings :public QSettings
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qsettings(QObject *parent = nullptr);
    Q_INVOKABLE jseplugins_qsettings(const QString &fileName, QSettings::Format format, QObject *parent = nullptr);
    Q_INVOKABLE void setValue(const QString &key, const QVariant &value);
    Q_INVOKABLE QVariant value(const QString &key, const QVariant &defaultValue = QVariant()) const;
    Q_INVOKABLE void remove(const QString &key);
    Q_INVOKABLE void beginGroup(const QString &prefix);
    Q_INVOKABLE void endGroup();
    Q_INVOKABLE QString group() const;
    Q_INVOKABLE QSettings::Scope scope() const;
    Q_INVOKABLE QSettings::Status status() const;
    Q_INVOKABLE void sync();
};

#endif // JSEPLUGINS_QSETTINGS_H
