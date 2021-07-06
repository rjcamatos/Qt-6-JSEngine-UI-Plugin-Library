#include <QObject>
#include <QMetaType>
#include <QMetaObject>
#include <QRegularExpression>
#include "jseplugins_quiloader.h"
#include "../jseplugins_types.h"

jseplugins_quiloader::jseplugins_quiloader(QObject *parent) : QUiLoader(parent)  {
    qDebug() << Q_FUNC_INFO;
    registerQMetaTypes();
}


QString jseplugins_quiloader::getWorkingDirectory() {
    qDebug() << Q_FUNC_INFO << " path:" << QDir::currentPath();
    return QUiLoader::workingDirectory().path();
}


void jseplugins_quiloader::setWorkingDirectory(QString path) {
    qDebug() << Q_FUNC_INFO << " path:" << path;
    QUiLoader::setWorkingDirectory(path);
}


QJSValue jseplugins_quiloader::load(jseplugins_qfile *file) {
    qDebug() << Q_FUNC_INFO;

    QJSEngine *engine = qjsEngine(this);
    QJSValue context = engine->evaluate("(function(){});");

    QWidget *loadedWidget = QUiLoader::load(file->getQFile());

    QList<QObject*> widgets = loadedWidget->findChildren<QObject*>(QRegularExpression("\\S+$"),Qt::FindChildrenRecursively);
    foreach( QObject* obj, widgets ) {
        qDebug() << "\tdeclaring widget: " << obj->objectName();
        QJSEngine *engine = qjsEngine(this);
        context.setProperty(obj->objectName(),engine->newQObject(obj));
    }

    context.setProperty(loadedWidget->objectName(),engine->newQObject(loadedWidget));

    return context;
}


QWidget* jseplugins_quiloader::createWidget(const QString &className, QWidget *parent, const QString &name) {
    qDebug() << Q_FUNC_INFO << " className:" << className << " name" << name;

    qDebug() << "\tQMetaType trying getting type for: " << className.toLocal8Bit();

    QMetaType metaType = QMetaType::fromName(className.toLocal8Bit());
    if( ! metaType.isRegistered() ) {
        qDebug() << "\tQMetaType not registerd !!! ";
        return QUiLoader::createWidget(className,parent,name);
    }

    const QMetaObject *metaObject = metaType.metaObject(); //QMetaType::metaObjectForType(type);
    if( ! metaObject ) {
        qDebug() << "\tNo QMetaObject for type !!!" << metaType.id();
        return QUiLoader::createWidget(className,parent,name);
    }

    QWidget *objectPtr = (QWidget*)metaObject->newInstance(Q_ARG(QWidget*,(QWidget*)parent));
    if( objectPtr) {
        objectPtr->setParent(parent);
        qDebug() << "\tQMetaType newInstance created for: " << objectPtr;
        return objectPtr;
    }

    return QUiLoader::createWidget(className,parent,name);
}


QLayout* jseplugins_quiloader::createLayout(const QString &className, QObject *parent, const QString &name) {
    qDebug() << Q_FUNC_INFO << " className:" << className << " name" << name;

    qDebug() << "\tQMetaType trying getting type for: " << className.toLocal8Bit();

    QMetaType metaType = QMetaType::fromName(className.toLocal8Bit());
    if( ! metaType.isRegistered() ) {
        qDebug() << "\tQMetaType not registerd !!! ";
        return QUiLoader::createLayout(className,parent,name);
    }

    const QMetaObject *metaObject = metaType.metaObject();
    if( ! metaObject ) {
        qDebug() << "\tNo QMetaObject for type !!!" << metaType.id();
        return QUiLoader::createLayout(className,parent,name);
    }

    QLayout *objectPtr = (QLayout*)metaObject->newInstance(Q_ARG(QWidget*,(QWidget*)parent));
    if( objectPtr) {
        //objectPtr->setParent(parent);
        qDebug() << "\tQMetaType newInstance created for:" << objectPtr << " with parent:" << parent;
        return objectPtr;
    }

    return QUiLoader::createLayout(className,parent,name);
}


jseplugins_quiloader::~jseplugins_quiloader() { }

/*
QJSValue  jseplugins_quiloader::createAction(QObject*  parent, const QString&  name) {
    QJSEngine *engine = qjsEngine(this);
    QAction *obj = new QAction(name,parent);
    return engine->newQObject(obj);
}

QJSValue  jseplugins_quiloader::createActionGroup(QObject*  parent, const QString&  name) {
    QJSEngine *engine = qjsEngine(this);
    QActionGroup *obj = new QActionGroup(parent);
    obj->setObjectName(name);
    return engine->newQObject(obj);
}*/



