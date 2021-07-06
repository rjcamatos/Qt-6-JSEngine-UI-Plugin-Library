#ifndef JSEPLUGINS_QICON_H
#define JSEPLUGINS_QICON_H

#include <QObject>
#include <QIcon>

class jseplugins_qicon : public QObject, public QIcon {
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qicon();
    Q_INVOKABLE void addFile(const QString &fileName, const QSize &size, QIcon::Mode mode = Normal, QIcon::State state = On);
    Q_INVOKABLE QIcon getReference();
    ~jseplugins_qicon();
};

#endif // JSEPLUGINS_QICON_H
