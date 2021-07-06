#ifndef JSEPLUGINS_QDATETIMEEDIT_H
#define JSEPLUGINS_QDATETIMEEDIT_H

#include <QObject>
#include <QDateTimeEdit>
class jseplugins_qdatetimeedit : public QDateTimeEdit
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qdatetimeedit(QWidget *parent = nullptr);
    ~jseplugins_qdatetimeedit();
};

Q_DECLARE_METATYPE(jseplugins_qdatetimeedit*);

#endif // JSEPLUGINS_QDATETIMEEDIT_H
