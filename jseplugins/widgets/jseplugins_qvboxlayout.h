#ifndef JSEPLUGINS_QVBOXLAYOUT_H
#define JSEPLUGINS_QVBOXLAYOUT_H

#include <QDebug>
#include <QObject>
#include <QWidget>
#include <QVBoxLayout>

class jseplugins_qvboxlayout : public QVBoxLayout
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qvboxlayout(QWidget *parent = nullptr);
    Q_INVOKABLE void addWidget(QWidget *widget);
    Q_INVOKABLE void removeWidget(QWidget *widget);
    ~jseplugins_qvboxlayout();
};

Q_DECLARE_METATYPE(jseplugins_qvboxlayout*);

#endif // JSEPLUGINS_QVBOXLAYOUT_H
