#include "jseplugins.h"

jseplugins::jseplugins()
{
    qDebug() << Q_FUNC_INFO;
    registerMetaTypesConverter();
    _jsengine = new QJSEngine();
    _jsengine->installExtensions(QJSEngine::AllExtensions);
    registerJSEngineMetaTypes(_jsengine);
}

void jsepluginsMessageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    QByteArray localMsg = msg.toLocal8Bit();
    const char *file = context.file ? context.file : "";
    const char *function = context.function ? context.function : "";
    switch (type) {
    case QtDebugMsg:
        fprintf(stdout, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
        break;
    case QtInfoMsg:
        fprintf(stdout, "Info: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
        break;
    case QtWarningMsg:
        fprintf(stdout, "Warning: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
        break;
    case QtCriticalMsg:
        fprintf(stdout, "Critical: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
        break;
    case QtFatalMsg:
        fprintf(stdout, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
        break;
    }
    fflush(stdout);
}


void jseplugins::evaluate(QWidget *widget, QString scriptPath) {
    qDebug() << Q_FUNC_INFO << " Layout:" << widget->layout();

    QFile f;
    f.setFileName(scriptPath);
    if( f.open(QFile::ReadOnly) ) {

        QString script = f.readAll();
        QJSValue sv;

        sv = _jsengine->evaluate(script);
        if( sv.isError() ) {
            qDebug()
                    << "ERROR EXCEPTION:"
                    << "\n"
                    << "Uncaught exception at name"
                    << sv.property("name").toString()
                    << "\n"
                    << "Uncaught exception at messsage"
                    << sv.property("message").toString()
                    << "\n"
                    << "Uncaught exception at fileName"
                    << sv.property("fileName").toString()
                    << "\n"
                    << "Uncaught exception at line"
                    << sv.property("lineNumber").toInt()
                    << "\n"
                    << "Uncaught exception at stack"
                    << sv.property("stack").toString()
                    << "\n"
                    << ":" << sv.toString();
        }

        // Init
        sv = _jsengine->evaluate("init()");
        if( sv.isError() ) {
            qDebug()
                    << "ERROR EXCEPTION:"
                    << "\n"
                    << "Uncaught exception at name"
                    << sv.property("name").toString()
                    << "\n"
                    << "Uncaught exception at messsage"
                    << sv.property("message").toString()
                    << "\n"
                    << "Uncaught exception at fileName"
                    << sv.property("fileName").toString()
                    << "\n"
                    << "Uncaught exception at line"
                    << sv.property("lineNumber").toInt()
                    << "\n"
                    << "Uncaught exception at stack"
                    << sv.property("stack").toString()
                    << "\n"
                    << ":" << sv.toString();
        }

       // Panel widget
        sv = _jsengine->evaluate("createPanelWidget()");
        if( sv.isError() ) {
            qDebug()
                    << "ERROR EXCEPTION:"
                    << "\n"
                    << "Uncaught exception at name"
                    << sv.property("name").toString()
                    << "\n"
                    << "Uncaught exception at messsage"
                    << sv.property("message").toString()
                    << "\n"
                    << "Uncaught exception at fileName"
                    << sv.property("fileName").toString()
                    << "\n"
                    << "Uncaught exception at line"
                    << sv.property("lineNumber").toInt()
                    << "\n"
                    << "Uncaught exception at stack"
                    << sv.property("stack").toString()
                    << "\n"
                    << ":" << sv.toString();
        } else {
            jseplugins_qwidget *w = qobject_cast<jseplugins_qwidget*>(sv.toQObject());
            widget->layout()->addWidget(w);
            w->show();
        }

        f.close();

    }
}


