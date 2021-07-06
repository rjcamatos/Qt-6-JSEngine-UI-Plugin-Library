#ifndef JSEPLUGINS_QTIMEEDIT_H
#define JSEPLUGINS_QTIMEEDIT_H

#include <QObject>
#include <QTimeEdit>

class jseplugins_qtimeedit : public QTimeEdit
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qtimeedit(QWidget *parent = nullptr);
    ~jseplugins_qtimeedit();

};

Q_DECLARE_METATYPE(jseplugins_qtimeedit*);

#endif // JSEPLUGINS_QTIMEEDIT_H
