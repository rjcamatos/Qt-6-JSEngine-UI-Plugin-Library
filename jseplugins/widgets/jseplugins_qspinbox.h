#ifndef JSEPLUGINS_QSPINBOX_H
#define JSEPLUGINS_QSPINBOX_H

#include <QObject>
#include <QSpinBox>

class jseplugins_qspinbox : public QSpinBox
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qspinbox(QWidget *parent = nullptr);
    ~jseplugins_qspinbox();
};

Q_DECLARE_METATYPE(jseplugins_qspinbox*);

#endif // JSEPLUGINS_QSPINBOX_H
