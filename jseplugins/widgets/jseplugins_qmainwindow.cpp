#include "jseplugins_qmainwindow.h"

jseplugins_qmainwindow::jseplugins_qmainwindow(QWidget *parent, Qt::WindowFlags f) : QMainWindow(parent,f) {}

jseplugins_qmainwindow::~jseplugins_qmainwindow() {}

void jseplugins_qmainwindow::setCentralWidget(QWidget *widget) {
    QMainWindow::setCentralWidget(widget);
}
