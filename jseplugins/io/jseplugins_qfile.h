#ifndef JSPLUGINS_QFILE_H
#define JSPLUGINS_QFILE_H
#include <QDebug>
#include <QObject>
#include <QFile>
#include <QString>
#include <QIODevice>

class jseplugins_qfile : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE jseplugins_qfile(QString path);
    Q_INVOKABLE bool open();
    QFile* getQFile();

private:
    QString _filePath;
    QFile* _qFile;

};

#endif // JSENGINE_QFILE_H
