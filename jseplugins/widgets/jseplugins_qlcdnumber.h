#ifndef JSEPLUGINS_QLCDNUMBER_H
#define JSEPLUGINS_QLCDNUMBER_H

#include <QObject>
#include <QLCDNumber>

class jseplugins_qlcdnumber : public QLCDNumber
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qlcdnumber(QWidget *parent = nullptr);
    ~jseplugins_qlcdnumber();
};

Q_DECLARE_METATYPE(jseplugins_qlcdnumber*);

#endif // JSEPLUGINS_QLCDNUMBER_H
