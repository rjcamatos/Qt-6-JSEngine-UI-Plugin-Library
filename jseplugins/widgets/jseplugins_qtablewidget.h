#ifndef JSEPLUGINS_QTABLEWIDGET_H
#define JSEPLUGINS_QTABLEWIDGET_H

#include <QObject>
#include <QTableWidget>
#include "jseplugins_qtablewidgetitem.h"

class jseplugins_qtablewidget : public QTableWidget
{
    Q_OBJECT

public:
    Q_INVOKABLE jseplugins_qtablewidget(int rows, int columns, QWidget*parent = nullptr);
    Q_INVOKABLE jseplugins_qtablewidget(QWidget *parent = nullptr);
    Q_INVOKABLE void setItem(int row, int column, jseplugins_qtablewidgetitem *item);
    Q_INVOKABLE void setCellWidget(int row, int column, QWidget *widget);
    Q_INVOKABLE void setHorizontalHeaderItem(int column, jseplugins_qtablewidgetitem *item);
    Q_INVOKABLE void setVerticalHeaderItem(int row, jseplugins_qtablewidgetitem *item);
    Q_INVOKABLE jseplugins_qtablewidgetitem* item(int row, int column);
    Q_INVOKABLE QWidget *cellWidget(int row, int column) const;
    ~jseplugins_qtablewidget();

protected slots:
    void _onCellDoubleClicked(int row,int column);
};

Q_DECLARE_METATYPE(jseplugins_qtablewidget*);
#endif // JSEPLUGINS_QTABLEWIDGET_H
