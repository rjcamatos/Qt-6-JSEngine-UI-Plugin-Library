#ifndef JSEPLUGINS_QSCROLLAREA_H
#define JSEPLUGINS_QSCROLLAREA_H

#include <QObject>
#include <QScrollArea>
#include <QFlags>
#include <Qt>



class jseplugins_qscrollarea : public QScrollArea
{
    Q_OBJECT


public:
    Q_INVOKABLE jseplugins_qscrollarea(QWidget *parent = nullptr);
    Q_INVOKABLE void setWidget(QWidget *widget);
    ~jseplugins_qscrollarea();
};

Q_DECLARE_METATYPE(jseplugins_qscrollarea*);

#endif // JSEPLUGINS_QSCROLLAREA_H
