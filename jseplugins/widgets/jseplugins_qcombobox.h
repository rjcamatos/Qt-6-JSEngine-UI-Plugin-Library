#ifndef JSEPLUGINS_QCOMBOBOX_H
#define JSEPLUGINS_QCOMBOBOX_H

#include <QDebug>
#include <QObject>
#include <QComboBox>

class jseplugins_qcombobox : public QComboBox
{
    Q_OBJECT
    Q_PROPERTY(QSize minimumSizeHint READ minimumSizeHint);
    Q_PROPERTY(QSize sizeHint READ sizeHint);

public:
    Q_INVOKABLE jseplugins_qcombobox(QWidget *parent = nullptr);
    Q_INVOKABLE void addItem(const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE void addItem(const QIcon &icon, const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE QVariant itemData(int index, int role = Qt::UserRole) const;
    Q_INVOKABLE void hidePopup();
    Q_INVOKABLE void showPopup();
    Q_INVOKABLE void insertItem(int index, const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE void insertItem(int index, const QIcon &icon, const QString &text, const QVariant &userData = QVariant());
    Q_INVOKABLE QVariant itemData(int index, int role = Qt::UserRole);
    Q_INVOKABLE QIcon itemIcon(int index);
    Q_INVOKABLE QString itemText(int index);
    Q_INVOKABLE void removeItem(int index);
    Q_INVOKABLE void setItemData(int index, const QVariant &value, int role = Qt::UserRole);
    Q_INVOKABLE void setItemIcon(int index, const QIcon &icon);
    Q_INVOKABLE void setItemText(int index, const QString &text);


    ~jseplugins_qcombobox();
};

Q_DECLARE_METATYPE(jseplugins_qcombobox*);
#endif // JSEPLUGINS_QCOMBOBOX_H
