#include "jseplugins_qfile.h"


jseplugins_qfile::jseplugins_qfile(QString path)
{
    qDebug() << Q_FUNC_INFO << "\n\t" << path;
    _filePath = path;
    _qFile = new QFile(_filePath);


}

QFile* jseplugins_qfile::getQFile() {
    return _qFile;
}

bool jseplugins_qfile::open() {
    qDebug() << Q_FUNC_INFO;
    return _qFile->open(QIODevice::ReadOnly);
}
