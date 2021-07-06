#include "jseplugins_qtablewidget.h"


jseplugins_qtablewidget::jseplugins_qtablewidget(int rows, int columns, QWidget *parent) : QTableWidget(rows,columns,parent) {
    connect(this,SIGNAL(cellDoubleClicked(int,int)),this, SLOT(_onCellDoubleClicked(int,int)));
}

jseplugins_qtablewidget::jseplugins_qtablewidget(QWidget *parent) : QTableWidget(parent) {
    connect(this,SIGNAL(cellDoubleClicked(int,int)),this, SLOT(_onCellDoubleClicked(int,int)));
}

jseplugins_qtablewidget::~jseplugins_qtablewidget() {}

void jseplugins_qtablewidget::setItem(int row, int column, jseplugins_qtablewidgetitem *item) {
    item->setParent(this);
    QTableWidget::setItem(row,column,item);
}

void jseplugins_qtablewidget::setHorizontalHeaderItem(int column, jseplugins_qtablewidgetitem *item) {
    item->setParent(this);
    QTableWidget::setHorizontalHeaderItem(column,item);
}

void jseplugins_qtablewidget::setVerticalHeaderItem(int row, jseplugins_qtablewidgetitem *item) {
    item->setParent(this);
    QTableWidget::setVerticalHeaderItem(row,item);
}

void jseplugins_qtablewidget::setCellWidget(int row, int column, QWidget *widget) {
    QTableWidget::setCellWidget(row,column,widget);
}

jseplugins_qtablewidgetitem* jseplugins_qtablewidget::item(int row, int column) {
    if( ((jseplugins_qtablewidgetitem*)QTableWidget::item(row,column)) ) {
       return (jseplugins_qtablewidgetitem*)(QTableWidget::item(row,column));
    }
    return nullptr;
}

QWidget* jseplugins_qtablewidget::cellWidget(int row, int column) const {
    return QTableWidget::cellWidget(row,column);
}

void jseplugins_qtablewidget::_onCellDoubleClicked(int row, int column) {
    if( ! ((jseplugins_qtablewidgetitem*)QTableWidget::item(row,column)) ) {
        jseplugins_qtablewidgetitem* item = new jseplugins_qtablewidgetitem();
        item->setParent(this);
        QTableWidget::setItem(row,column,item);
    }
}
