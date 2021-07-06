#include "jseplugins.h"

jseplugins::jseplugins()
{
    qDebug() << Q_FUNC_INFO;
    QJSEngine *engine = new QJSEngine();
    this->_jsengine = engine;
    engine->installExtensions(QJSEngine::AllExtensions);
    registerJSEngineMetaTypes(engine);
}

void jseplugins::evaluate(QMainWindow *ui, QString scriptPath) {
    qDebug() << Q_FUNC_INFO << "\n\t" << ui;

    QFile f;
    f.setFileName(scriptPath);

    if (f.open(QFile::ReadOnly)) {

        QString script = f.readAll();
        QJSValue sv;

        sv = _jsengine->evaluate(script);
        if (sv.isError()) {
            qDebug() << sv.toString();
        }

        // Init
        sv = _jsengine->evaluate("init()");
        if (sv.isError()) {
            qDebug() << sv.toString();
        }

       // Panel widget
        sv = _jsengine->evaluate("createPanelWidget()");
        if ( sv.isError() ) {
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
            ui->centralWidget()->layout()->addWidget(w);
        }

        f.close();

    }
}


