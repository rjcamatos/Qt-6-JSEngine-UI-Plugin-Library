#ifndef JSEPLUGINS_QLABEL_H
#define JSEPLUGINS_QLABEL_H

#include <QObject>
#include <QLabel>

class jseplugins_qlabel : public QLabel
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qlabel(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~jseplugins_qlabel();
};

Q_DECLARE_METATYPE(jseplugins_qlabel*);

#endif // JSEPLUGINS_QLABEL_H
