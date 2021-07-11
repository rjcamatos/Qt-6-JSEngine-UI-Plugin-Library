#ifndef JSEPLUGINS_QDATETIMEEDIT_H
#define JSEPLUGINS_QDATETIMEEDIT_H

#include <QObject>
#include <QDateTimeEdit>
class jseplugins_qdatetimeedit : public QDateTimeEdit
{
    Q_OBJECT
    Q_PROPERTY(QSize minimumSizeHint READ minimumSizeHint);
    Q_PROPERTY(QSize sizeHint READ sizeHint);
public:
    Q_INVOKABLE jseplugins_qdatetimeedit(QWidget *parent = nullptr);
    ~jseplugins_qdatetimeedit();
};

Q_DECLARE_METATYPE(jseplugins_qdatetimeedit*);

#endif // JSEPLUGINS_QDATETIMEEDIT_H
