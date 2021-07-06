#include "jseplugins_qwidget.h"
#include "../core/jseplugins_qtimerevent.h"
#include <QDebug>
#include <QJSEngine>

jseplugins_qwidget::jseplugins_qwidget(QWidget *parent, Qt::WindowFlags f) : QWidget(parent,f) {}

jseplugins_qwidget::~jseplugins_qwidget() {}

int jseplugins_qwidget::startTimer(int interval) {
    qDebug() << Q_FUNC_INFO << this;
    return QWidget::startTimer(interval);
}

void jseplugins_qwidget::killTimer(int id) {
    qDebug() << Q_FUNC_INFO << this;
    QWidget::killTimer(id);
}

void jseplugins_qwidget::setLayout(QLayout *layout) {
    QWidget::setLayout(layout);
}


bool jseplugins_qwidget::readProperty() {
    return true;
}

void jseplugins_qwidget::setEvent(QJSValue script) {
    qDebug() << Q_FUNC_INFO;
    _eventScript = script;
}

void jseplugins_qwidget::setChildEvent(QJSValue script) {
    qDebug() << Q_FUNC_INFO;
    _childEventScript = script;
}

void jseplugins_qwidget::setCustomEvent(QJSValue script) {
    qDebug() << Q_FUNC_INFO;
    _customEventScript = script;
}

void jseplugins_qwidget::setEventFilter(QJSValue script) {
    qDebug() << Q_FUNC_INFO;
    _eventFilterScript = script;
}

void jseplugins_qwidget::setTimerEvent(QJSValue script) {
    qDebug() << Q_FUNC_INFO;
    _timerEventScript = script;
}

bool jseplugins_qwidget::event(QEvent *event) {
    QJSEngine *engine = qjsEngine(this);
    if( _eventScript.isCallable() ) {
        QJSValueList args;
        args.append(engine->newQObject(new jseplugins_qevent(event->type())));
        _eventScript.call(args);
    }
    return QWidget::event(event);
}

void jseplugins_qwidget::childEvent(QChildEvent *event) {
    QJSEngine *engine = qjsEngine(this);
    if( _childEventScript.isCallable() ) {
        QJSValueList args;
        args.append(engine->newQObject(new jseplugins_qevent(event->type())));
        _childEventScript.call(args);
    }
    QWidget::childEvent(event);
}

void jseplugins_qwidget::customEvent(QEvent *event) {
    QJSEngine *engine = qjsEngine(this);
    if( _customEventScript.isCallable() ) {
        QJSValueList args;
        args.append(engine->newQObject(new jseplugins_qevent(event->type())));
        _customEventScript.call(args);
    }
    QWidget::customEvent(event);
}

bool jseplugins_qwidget::eventFilter(QObject *watched, QEvent *event) {
    QJSEngine *engine = qjsEngine(this);
    if( _eventFilterScript.isCallable() ) {
        QJSValueList args;
        args.append(engine->newQObject(watched));
        args.append(engine->newQObject(new jseplugins_qevent(event->type())));
        _eventFilterScript.call(args);
    }
    return QWidget::eventFilter(watched,event);
}

void jseplugins_qwidget::timerEvent(QTimerEvent *event) {
    QJSEngine *engine = qjsEngine(this);
    if( _timerEventScript.isCallable() ) {
        QJSValueList args;
        args.append(engine->newQObject(new jseplugins_qtimerevent(event)));
        _timerEventScript.call(args);
    }
    QWidget::timerEvent(event);
}


