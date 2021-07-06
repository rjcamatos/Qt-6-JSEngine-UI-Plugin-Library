#ifndef JSEPLUGINS_QWIDGET_H
#define JSEPLUGINS_QWIDGET_H
#include <QObject>
#include <QWidget>
#include <QJSValue>
#include <QLayout>
#include <QEvent>

class jseplugins_qwidget : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(QJSValue event READ readProperty WRITE setEvent);
    Q_PROPERTY(QJSValue childEvent READ readProperty WRITE setChildEvent);
    Q_PROPERTY(QJSValue customEvent READ readProperty WRITE setCustomEvent);
    Q_PROPERTY(QJSValue eventFilter READ readProperty WRITE setEventFilter);
    Q_PROPERTY(QJSValue timerEvent READ readProperty WRITE setTimerEvent);

public:
    Q_INVOKABLE jseplugins_qwidget(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~jseplugins_qwidget();
    Q_INVOKABLE int startTimer(int interval);
    Q_INVOKABLE void killTimer(int id);
    Q_INVOKABLE void setLayout(QLayout *layout);
    Q_INVOKABLE Q_ENUM(Qt::WindowFlags);

private:
    bool readProperty();
    void setEvent(QJSValue script);
    void setChildEvent(QJSValue script);
    void setCustomEvent(QJSValue script);
    void setEventFilter(QJSValue script);
    void setTimerEvent(QJSValue script);


    QJSValue _eventScript;
    QJSValue _childEventScript;
    QJSValue _customEventScript;
    QJSValue _eventFilterScript;
    QJSValue _timerEventScript;

protected:
    bool event(QEvent*  event);
    void childEvent(QChildEvent *event);
    void customEvent(QEvent *event);
    bool eventFilter(QObject *watched, QEvent*  event);
    void timerEvent(QTimerEvent *event);

};

Q_DECLARE_METATYPE(jseplugins_qwidget*);

#endif // JSEPLUGINS_QWIDGET_H
