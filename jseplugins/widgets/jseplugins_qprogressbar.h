#ifndef JSEPLUGINS_QPROGRESSBAR_H
#define JSEPLUGINS_QPROGRESSBAR_H

#include <QObject>
#include <QProgressBar>

class jseplugins_qprogressbar : public QProgressBar
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qprogressbar(QWidget *parent = nullptr);
    ~jseplugins_qprogressbar();
};

Q_DECLARE_METATYPE(jseplugins_qprogressbar*);

#endif // JSEPLUGINS_QPROGRESSBAR_H
