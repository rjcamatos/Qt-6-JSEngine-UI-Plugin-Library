#ifndef JSEPLUGINS_QPLAINTEXTEDIT_H
#define JSEPLUGINS_QPLAINTEXTEDIT_H

#include <QObject>
#include <QPlainTextEdit>

class jseplugins_qplaintextedit : public QPlainTextEdit
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qplaintextedit(QWidget *parent = nullptr);
    ~jseplugins_qplaintextedit();
};

Q_DECLARE_METATYPE(jseplugins_qplaintextedit*);

#endif // JSEPLUGINS_QPLAINTEXTEDIT_H
