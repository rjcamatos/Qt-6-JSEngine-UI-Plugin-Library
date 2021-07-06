#ifndef JSEPLUGINS_QMAINWINDOW_H
#define JSEPLUGINS_QMAINWINDOW_H

#include <QObject>
#include <QMainWindow>

class jseplugins_qmainwindow : public QMainWindow
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qmainwindow(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());
    Q_INVOKABLE void setCentralWidget(QWidget *widget);
    ~jseplugins_qmainwindow();
};

Q_DECLARE_METATYPE(jseplugins_qmainwindow*);

#endif // JSEPLUGINS_QMAINWINDOW_H
