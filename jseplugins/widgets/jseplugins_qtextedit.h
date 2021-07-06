#ifndef JSEPLUGINS_QTEXTEDIT_H
#define JSEPLUGINS_QTEXTEDIT_H

#include <QObject>
#include <QTextEdit>

class jseplugins_qtextedit : public QTextEdit
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qtextedit(QWidget *parent = nullptr);
    ~jseplugins_qtextedit();
};

Q_DECLARE_METATYPE(jseplugins_qtextedit*);

#endif // JSEPLUGINS_QTEXTEDIT_H
