#ifndef JSEPLUGINS_QICON_H
#define JSEPLUGINS_QICON_H

#include <QObject>
#include <QIcon>

class jseplugins_qicon : public QObject, public QIcon {
    Q_OBJECT
    Q_PROPERTY(QIcon ref READ getReference);
public:
    Q_INVOKABLE jseplugins_qicon();
    Q_INVOKABLE void addFile(const QString &fileName, const QSize &size, QIcon::Mode mode = Normal, QIcon::State state = On);
    QIcon getReference();
    ~jseplugins_qicon();
};

Q_DECLARE_METATYPE(jseplugins_qicon*);

#endif // JSEPLUGINS_QICON_H
