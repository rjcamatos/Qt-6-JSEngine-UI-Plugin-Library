#ifndef JSEPLUGINS_QTABLEWIDGETITEM_H
#define JSEPLUGINS_QTABLEWIDGETITEM_H

#include <QObject>
#include <QTableWidgetItem>
#include <QString>

class jseplugins_qtablewidgetitem : public QObject, public QTableWidgetItem
{
    Q_OBJECT


    Q_PROPERTY(Qt::CheckState checkState READ checkState WRITE setCheckState);
    Q_PROPERTY(Qt::ItemFlags flags READ flags WRITE setFlags);
    Q_PROPERTY(QIcon icon READ icon WRITE setIcon);
    Q_PROPERTY(bool selected READ isSelected WRITE setSelected);
    Q_PROPERTY(QString statusTip READ statusTip WRITE setStatusTip);
    Q_PROPERTY(QSize sizeHint READ sizeHint WRITE setSizeHint);
    Q_PROPERTY(QString text READ text WRITE setText);
    Q_PROPERTY(int textAlignment READ textAlignment WRITE setTextAlignment);
    Q_PROPERTY(QString toolTip READ toolTip WRITE setToolTip);
    Q_PROPERTY(QString whatsThis READ whatsThis WRITE setWhatsThis);

public:
    Q_INVOKABLE jseplugins_qtablewidgetitem(const QIcon &icon, const QString &text, int type = Type);
    Q_INVOKABLE jseplugins_qtablewidgetitem(const QString &text, int type = Type);
    Q_INVOKABLE jseplugins_qtablewidgetitem(int type = Type);
    jseplugins_qtablewidgetitem(QTableWidgetItem *item);
    Q_INVOKABLE QVariant data(int role) const;
    Q_INVOKABLE void setData(int role, const QVariant &value);
    ~jseplugins_qtablewidgetitem();
    Q_ENUM(ItemType);
};

#endif // JSEPLUGINS_QTABLEWIDGETITEM_H
