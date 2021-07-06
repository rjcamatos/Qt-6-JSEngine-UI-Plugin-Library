#include "mainwindow.h"

#include <QApplication>
#include "../jseplugins/jseplugins.h"
#include <QDir>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QVBoxLayout *layout = new QVBoxLayout();
   w.centralWidget()->setLayout(layout);

    jseplugins* plugins = new jseplugins();

    plugins->evaluate(&w,QDir::currentPath()+"/jseplugins/script.js");
    plugins->evaluate(&w,QDir::currentPath()+"/jseplugins/script.js");
    qDebug() << QDir::currentPath();

    w.show();
    return a.exec();
}
