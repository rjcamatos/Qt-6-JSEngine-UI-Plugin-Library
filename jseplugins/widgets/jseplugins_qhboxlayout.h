#ifndef JSEPLUGINS_QHBOXLAYOUT_H
#define JSEPLUGINS_QHBOXLAYOUT_H

#include <QDebug>
#include <QObject>
#include <QWidget>
#include <QHBoxLayout>

class jseplugins_qhboxlayout : public QHBoxLayout
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qhboxlayout(QWidget *parent = nullptr);
    Q_INVOKABLE void addWidget(QWidget *widget);
    ~jseplugins_qhboxlayout();
};

Q_DECLARE_METATYPE(jseplugins_qhboxlayout*);

#endif // JSEPLUGINS_QVBOXLAYOUT_H
