#ifndef JSEPLUGINS_QFORMLAYOUT_H
#define JSEPLUGINS_QFORMLAYOUT_H

#include <QObject>
#include <QFormLayout>

class jseplugins_qformlayout : public QFormLayout
{
    Q_OBJECT
public:
    jseplugins_qformlayout(QWidget *parent = nullptr);
    ~jseplugins_qformlayout();
    Q_INVOKABLE void addRow(QWidget *label, QWidget *field);
    Q_INVOKABLE void addRow(const QString &labelText, QWidget *field);
    Q_INVOKABLE void removeRow(int row);

};

Q_DECLARE_METATYPE(jseplugins_qformlayout*);

#endif // JSEPLUGINS_QFORMLAYOUT_H
