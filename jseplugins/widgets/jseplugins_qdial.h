#ifndef JSEPLUGINS_QDIAL_H
#define JSEPLUGINS_QDIAL_H

#include <QObject>
#include <QDial>

class jseplugins_qdial : public QDial
{
    Q_OBJECT
    Q_PROPERTY(QSize minimumSizeHint READ minimumSizeHint);
    Q_PROPERTY(QSize sizeHint READ sizeHint);
public:
    Q_INVOKABLE jseplugins_qdial(QWidget *parent = nullptr);
    ~jseplugins_qdial();
};

Q_DECLARE_METATYPE(jseplugins_qdial*);

#endif // JSEPLUGINS_QDIAL_H
