#ifndef JSEPLUGINS_QLISTWIDGETITEM_H
#define JSEPLUGINS_QLISTWIDGETITEM_H

#include <QObject>
#include <QListWidgetItem>
#include <QString>

class jseplugins_qlistwidgetitem : public QObject, public QListWidgetItem
{
    Q_OBJECT

    Q_PROPERTY(Qt::CheckState checkState READ checkState WRITE setCheckState);
    Q_PROPERTY(Qt::ItemFlags flags READ flags WRITE setFlags);
    Q_PROPERTY(bool hiden READ isHidden WRITE setHidden);
    Q_PROPERTY(QIcon icon READ icon WRITE setIcon);
    Q_PROPERTY(bool selected READ isSelected WRITE setSelected);
    Q_PROPERTY(QSize sizeHint READ sizeHint WRITE setSizeHint);
    Q_PROPERTY(QString statusTip READ statusTip WRITE setStatusTip);
    Q_PROPERTY(QString text READ text WRITE setText);
    Q_PROPERTY(int textAlignment READ textAlignment WRITE setTextAlignment);
    Q_PROPERTY(QString toolTip READ toolTip WRITE setToolTip);
    Q_PROPERTY(QString whatsThis READ whatsThis WRITE setWhatsThis);

public:
    Q_INVOKABLE jseplugins_qlistwidgetitem(const QIcon &icon, const QString &text, QListWidget *parent = nullptr, int type = Type);
    Q_INVOKABLE jseplugins_qlistwidgetitem(const QString &text, QListWidget *parent = nullptr, int type = Type);
    ~jseplugins_qlistwidgetitem();
    Q_INVOKABLE void setText(const QString &text);
    Q_INVOKABLE void setIcon(const QIcon &icon);
    Q_INVOKABLE void setData(int role, const QVariant &value);
    Q_INVOKABLE QVariant data(int role) const;

};

Q_DECLARE_METATYPE(jseplugins_qlistwidgetitem*);

#endif // JSEPLUGINS_QLISTWIDGETITEM_H
