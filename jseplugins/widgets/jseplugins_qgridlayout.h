#ifndef JSEPLUGINS_QGRIDLAYOUT_H
#define JSEPLUGINS_QGRIDLAYOUT_H

#include <QDebug>
#include <QObject>
#include <QWidget>
#include <QGridLayout>

class jseplugins_qgridlayout : public QGridLayout
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qgridlayout(QWidget *parent = nullptr);
    Q_INVOKABLE void addWidget(QWidget *widget);
    Q_INVOKABLE void addWidget(QWidget *widget, int row, int column, Qt::Alignment alignment = Qt::Alignment());

    ~jseplugins_qgridlayout();
};

Q_DECLARE_METATYPE(jseplugins_qgridlayout*);

#endif // JSEPLUGINS_QVBOXLAYOUT_H
