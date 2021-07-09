#include "mainwindow.h"
#include "../jseplugins/jseplugins.h"

#include <QApplication>
#include <QDir>
#include <QVBoxLayout>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QVBoxLayout *layout = new QVBoxLayout();
    w.centralWidget()->setLayout(layout);

    jseplugins* plugins = new jseplugins();
    //qInstallMessageHandler(jsepluginsMessageHandler);
    plugins->evaluate(w.centralWidget(),QDir::currentPath()+"/jseplugins/script.js");

    w.show();
    return a.exec();
}
