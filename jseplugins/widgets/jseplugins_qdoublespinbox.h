#ifndef JSEPLUGINS_QDOUBLESPINBOX_H
#define JSEPLUGINS_QDOUBLESPINBOX_H

#include <QObject>
#include <QDoubleSpinBox>
#include <QAbstractSpinBox>

class jseplugins_qdoublespinbox : public QDoubleSpinBox
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qdoublespinbox(QWidget *parent = nullptr);
    ~jseplugins_qdoublespinbox();
};

Q_DECLARE_METATYPE(jseplugins_qdoublespinbox*);

#endif // JSEPLUGINS_QDOUBLESPINBOX_H
