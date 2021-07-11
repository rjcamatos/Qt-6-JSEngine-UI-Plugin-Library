#ifndef JSEPLUGINS_QCHECKBOX_H
#define JSEPLUGINS_QCHECKBOX_H

#include <QDebug>
#include <QObject>
#include <QJSEngine>
#include <QJSValue>
#include <QCheckBox>

class jseplugins_qcheckbox : public QCheckBox
{
    Q_OBJECT
    Q_PROPERTY(Qt::CheckState checkState READ checkState WRITE setCheckState);
    Q_PROPERTY(bool isTristate READ isTristate WRITE setTristate);
    Q_PROPERTY(QSize minimumSizeHint READ minimumSizeHint);
    Q_PROPERTY(QSize sizeHint READ sizeHint);

public:
    Q_INVOKABLE jseplugins_qcheckbox(QWidget *parent = nullptr);
    Q_INVOKABLE jseplugins_qcheckbox(const QString &text, QWidget *parent = nullptr);
    ~jseplugins_qcheckbox();
};

Q_DECLARE_METATYPE(jseplugins_qcheckbox*);

#endif // JSEPLUGINS_QCHECKBOX_H
