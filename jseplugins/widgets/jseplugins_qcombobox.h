#ifndef JSEPLUGINS_QCOMBOBOX_H
#define JSEPLUGINS_QCOMBOBOX_H

#include <QDebug>
#include <QObject>
#include <QComboBox>

class jseplugins_qcombobox : public QComboBox
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qcombobox(QWidget *parent = nullptr);
    Q_INVOKABLE void addItem(const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE void addItem(const QIcon &icon, const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE QVariant itemData(int index, int role = Qt::UserRole) const;

    ~jseplugins_qcombobox();
};

Q_DECLARE_METATYPE(jseplugins_qcombobox*);
#endif // JSEPLUGINS_QCOMBOBOX_H
