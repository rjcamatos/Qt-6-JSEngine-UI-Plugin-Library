#ifndef JSEPLUGINS_QLINEEDIT_H
#define JSEPLUGINS_QLINEEDIT_H

#include <QObject>
#include <QLineEdit>

class jseplugins_qlineedit : public QLineEdit
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qlineedit(QWidget *parent = nullptr);
    ~jseplugins_qlineedit();
};

Q_DECLARE_METATYPE(jseplugins_qlineedit*);
#endif // JSEPLUGINS_QLINEEDIT_H
