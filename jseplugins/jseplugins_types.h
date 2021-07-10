#ifndef JSEPLUGINS_TYPES_H
#define JSEPLUGINS_TYPES_H

#include <QJSEngine>
#include <QJSValue>

//CORE
#include "core/jseplugins_qevent.h"
#include "core/jseplugins_qtimerevent.h"
#include "core/jseplugins_qsize.h"
#include "core/jseplugins_qpoint.h"
#include "core/jseplugins_qsettings.h"


//IO
#include "io/jseplugins_qdir.h"
#include "io/jseplugins_qfile.h"

//UI TOOLS
#include "uitools/jseplugins_quiloader.h"

//WIDGETS
#include "widgets/jseplugins_qwidget.h"
#include "widgets/jseplugins_qmainwindow.h"
//WIDGETS BUTTONS
#include "widgets/jseplugins_qtoolbutton.h"
#include "widgets/jseplugins_qcheckbox.h"
#include "widgets/jseplugins_qpushbutton.h"
#include "widgets/jseplugins_qradiobutton.h"
#include "widgets/jseplugins_qcommandlinkbutton.h"
#include "widgets/jseplugins_qdialogbuttonbox.h"
//WIDGETS INPUT
#include "widgets/jseplugins_qcombobox.h"
#include "widgets/jseplugins_qfontcombobox.h"
#include "widgets/jseplugins_qlineedit.h"
#include "widgets/jseplugins_qtextedit.h"
#include "widgets/jseplugins_qplaintextedit.h"
#include "widgets/jseplugins_qspinbox.h"
#include "widgets/jseplugins_qdoublespinbox.h"
#include "widgets/jseplugins_qtimeedit.h"
#include "widgets/jseplugins_qdatetimeedit.h"
#include "widgets/jseplugins_qdial.h"
//WIDGETS DISPLAY
#include "widgets/jseplugins_qlcdnumber.h"
#include "widgets/jseplugins_qlabel.h"
#include "widgets/jseplugins_qprogressbar.h"
#include "widgets/jseplugins_qscrollarea.h"
#include "widgets/jseplugins_qslider.h"
//WIDGETS ITEMS
#include "widgets/jseplugins_qtablewidget.h"
#include "widgets/jseplugins_qtablewidgetitem.h"
#include "widgets/jseplugins_qlistwidget.h"
#include "widgets/jseplugins_qlistwidgetitem.h"
//WIDGETS LAYOUTS
#include "widgets/jseplugins_qvboxlayout.h"
#include "widgets/jseplugins_qgridlayout.h"
#include "widgets/jseplugins_qhboxlayout.h"
#include "widgets/jseplugins_qformlayout.h"

//GUI
#include "gui/jseplugins_qicon.h"

//MISC
#include "jseplugins_qexample.h"

static inline void registerQMetaTypes() {
    static bool entry = false;
    if( ! entry ) {

        //widgets
        qRegisterMetaType<jseplugins_qmainwindow*>("QMainWindow");
        qRegisterMetaType<jseplugins_qwidget*>("QWidget");
        //widgets buttons
        qRegisterMetaType<jseplugins_qtoolbutton*>("QToolButton");
        qRegisterMetaType<jseplugins_qpushbutton*>("QPushButton");
        qRegisterMetaType<jseplugins_qcheckbox*>("QCheckBox");
        qRegisterMetaType<jseplugins_qradiobutton*>("QRadioButton");
        qRegisterMetaType<jseplugins_qcommandlinkbutton*>("QCommandLinkButton");
        qRegisterMetaType<jseplugins_qdialogbuttonbox*>("QDialogButtonBox");
        //widgets input
        qRegisterMetaType<jseplugins_qcombobox*>("QComboBox");
        qRegisterMetaType<jseplugins_qfontcombobox*>("QFontComboBox");
        qRegisterMetaType<jseplugins_qlineedit*>("QLineEdit");
        qRegisterMetaType<jseplugins_qtextedit*>("QTextEdit");
        qRegisterMetaType<jseplugins_qplaintextedit*>("QPlainTextEdit");
        qRegisterMetaType<jseplugins_qspinbox*>("QSpinBox");
        qRegisterMetaType<jseplugins_qdoublespinbox*>("QDoubleSpinBox");
        qRegisterMetaType<jseplugins_qtimeedit*>("QTimeEdit");
        qRegisterMetaType<jseplugins_qdatetimeedit*>("QTimeEdit");
        qRegisterMetaType<jseplugins_qdial*>("QDial");
        //widgets display
        qRegisterMetaType<jseplugins_qlcdnumber*>("QLCDNumber");
        qRegisterMetaType<jseplugins_qlabel*>("QLabel");
        qRegisterMetaType<jseplugins_qprogressbar*>("QProgressBar");
        qRegisterMetaType<jseplugins_qslider*>("QSlider");
        //widgets containers
        qRegisterMetaType<jseplugins_qscrollarea*>("QScrollArea");
        //widgets items
        qRegisterMetaType<jseplugins_qtablewidget*>("QTableWidget");
        qRegisterMetaType<jseplugins_qlistwidget*>("QListWidget");
        //widgets layouts
        qRegisterMetaType<jseplugins_qvboxlayout*>("QVBoxLayout");
        qRegisterMetaType<jseplugins_qhboxlayout*>("QHBoxLayout");
        qRegisterMetaType<jseplugins_qgridlayout*>("QGridLayout");
        qRegisterMetaType<jseplugins_qformlayout*>("QFormLayout");

        entry = true;
    }
}

static inline void registerMetaTypesConverter() {

    //qRegisterMetaType<jseplugins_qicon*>("QIcon");

    QMetaType::registerConverter<jseplugins_qicon*,QIcon>(
        [] (jseplugins_qicon* qObjPtr) {
            qDebug() << "CONVERTER";
            qDebug() << "CATCH TYPE CONVERTER";
            QIcon *dataPtr = (QIcon*)qObjPtr;
            return (dataPtr == nullptr) ? QIcon() : QIcon( *dataPtr );
        }
    );
}

static inline void registerJSEngineMetaTypes(QJSEngine *engine) {
    QJSValue sv;

//user defined
    sv = engine->newQMetaObject(&jseplugins_qexample::staticMetaObject);
    engine->globalObject().setProperty("QExample",sv);

//uitools
    sv = engine->newQMetaObject(&jseplugins_quiloader::staticMetaObject);
    engine->globalObject().setProperty("QUiLoader",sv);

//core
    sv = engine->newQMetaObject(&Qt::staticMetaObject);
    engine->globalObject().setProperty("Qt",sv);

    sv = engine->newQMetaObject(&QObject::staticMetaObject);
    engine->globalObject().setProperty("QObject",sv);

    sv = engine->newQMetaObject(&jseplugins_qsettings::staticMetaObject);
    engine->globalObject().setProperty("QSettings",sv);

    sv = engine->newQMetaObject(&jseplugins_qevent::staticMetaObject);
    sv.setProperty("Type",engine->newQMetaObject(&QEvent::staticMetaObject));
    engine->globalObject().setProperty("QEvent",sv);

    sv = engine->newQMetaObject(&jseplugins_qtimerevent::staticMetaObject);
    engine->globalObject().setProperty("QTimerEvent",sv);

    sv = engine->newQMetaObject(&jseplugins_qsize::staticMetaObject);
    engine->globalObject().setProperty("QSize",sv);

    sv = engine->newQMetaObject(&jseplugins_qpoint::staticMetaObject);
    engine->globalObject().setProperty("QPoint",sv);

//io
    sv = engine->newQMetaObject(&jseplugins_qdir::staticMetaObject);
    engine->globalObject().setProperty("QDir",sv);

    sv = engine->newQMetaObject(&jseplugins_qfile::staticMetaObject);
    engine->globalObject().setProperty("QFile",sv);

//widgets

    sv = engine->newQMetaObject(&jseplugins_qmainwindow::staticMetaObject);
    engine->globalObject().setProperty("QMainWindow",sv);

    sv = engine->newQMetaObject(&jseplugins_qwidget::staticMetaObject);
    engine->globalObject().setProperty("QWidget",sv);

//widgets buttons
    sv = engine->newQMetaObject(&jseplugins_qpushbutton::staticMetaObject);
    engine->globalObject().setProperty("QPushButton",sv);

    sv = engine->newQMetaObject(&jseplugins_qtoolbutton::staticMetaObject);
    engine->globalObject().setProperty("QToolButton",sv);

    sv = engine->newQMetaObject(&jseplugins_qcheckbox::staticMetaObject);
    engine->globalObject().setProperty("QCheckBox",sv);

    sv = engine->newQMetaObject(&jseplugins_qradiobutton::staticMetaObject);
    engine->globalObject().setProperty("QRadioButton",sv);

    sv = engine->newQMetaObject(&jseplugins_qcommandlinkbutton::staticMetaObject);
    engine->globalObject().setProperty("QCommandLinkButton",sv);

    sv = engine->newQMetaObject(&jseplugins_qdialogbuttonbox::staticMetaObject);
    engine->globalObject().setProperty("QDialogButtonBox",sv);

//widgets input
    sv = engine->newQMetaObject(&jseplugins_qcombobox::staticMetaObject);
    engine->globalObject().setProperty("QComboBox",sv);

    sv = engine->newQMetaObject(&jseplugins_qfontcombobox::staticMetaObject);
    engine->globalObject().setProperty("QFontComboBox",sv);

    sv = engine->newQMetaObject(&jseplugins_qlineedit::staticMetaObject);
    engine->globalObject().setProperty("QLineEdit",sv);

    sv = engine->newQMetaObject(&jseplugins_qtextedit::staticMetaObject);
    engine->globalObject().setProperty("QTextEdit",sv);

    sv = engine->newQMetaObject(&jseplugins_qplaintextedit::staticMetaObject);
    engine->globalObject().setProperty("QPlainTextEdit",sv);

    sv = engine->newQMetaObject(&jseplugins_qspinbox::staticMetaObject);
    engine->globalObject().setProperty("QSpinBox",sv);

    sv = engine->newQMetaObject(&jseplugins_qdoublespinbox::staticMetaObject);
    engine->globalObject().setProperty("QDoubleSpinBox",sv);

    sv = engine->newQMetaObject(&jseplugins_qtimeedit::staticMetaObject);
    engine->globalObject().setProperty("QTimeEdit",sv);

    sv = engine->newQMetaObject(&jseplugins_qdatetimeedit::staticMetaObject);
    engine->globalObject().setProperty("QDateTimeEdit",sv);

    sv = engine->newQMetaObject(&jseplugins_qdial::staticMetaObject);
    engine->globalObject().setProperty("QDial",sv);

//widgets layout
    sv = engine->newQMetaObject(&jseplugins_qvboxlayout::staticMetaObject);
    engine->globalObject().setProperty("QVBoxLayout",sv);

    sv = engine->newQMetaObject(&jseplugins_qhboxlayout::staticMetaObject);
    engine->globalObject().setProperty("QHBoxLayout",sv);

    sv = engine->newQMetaObject(&jseplugins_qgridlayout::staticMetaObject);
    engine->globalObject().setProperty("QGridLayout",sv);

    sv = engine->newQMetaObject(&jseplugins_qformlayout::staticMetaObject);
    engine->globalObject().setProperty("QFormLayout",sv);

//widgets display
    sv = engine->newQMetaObject(&jseplugins_qlcdnumber::staticMetaObject);
    engine->globalObject().setProperty("QLCDNumber",sv);

    sv = engine->newQMetaObject(&jseplugins_qlabel::staticMetaObject);
    engine->globalObject().setProperty("QLabel",sv);

    sv = engine->newQMetaObject(&jseplugins_qprogressbar::staticMetaObject);
    engine->globalObject().setProperty("QProgressBar",sv);

    sv = engine->newQMetaObject(&jseplugins_qslider::staticMetaObject);
    engine->globalObject().setProperty("QSlider",sv);

//widgets containers
    sv = engine->newQMetaObject(&jseplugins_qscrollarea::staticMetaObject);
    engine->globalObject().setProperty("QScrollArea",sv);

//widgets items
    sv = engine->newQMetaObject(&jseplugins_qtablewidget::staticMetaObject);
    engine->globalObject().setProperty("QTableWidget",sv);

    sv = engine->newQMetaObject(&jseplugins_qtablewidgetitem::staticMetaObject);
    engine->globalObject().setProperty("QTableWidgetItem",sv);

    sv = engine->newQMetaObject(&jseplugins_qlistwidget::staticMetaObject);
    engine->globalObject().setProperty("QListWidget",sv);

    sv = engine->newQMetaObject(&jseplugins_qlistwidgetitem::staticMetaObject);
    engine->globalObject().setProperty("QListWidgetItem",sv);

//gui
    sv = engine->newQMetaObject(&jseplugins_qicon::staticMetaObject);
    engine->globalObject().setProperty("QIcon",sv);


    /*
        sv = engine->newQMetaObject(&QSizeGrip::staticMetaObject);
        engine->globalObject().setProperty("QSizeGrip",sv);

        sv = engine->newQMetaObject(&QTabBar::staticMetaObject);
        engine->globalObject().setProperty("QTabBar",sv);

        sv = engine->newQMetaObject(&QTabWidget::staticMetaObject);
        engine->globalObject().setProperty("QTabWidget",sv);

        sv = engine->newQMetaObject(&QToolBox::staticMetaObject);
        engine->globalObject().setProperty("QToolBox",sv);
    */


}



#endif // JSEPLUGINS_METAOBJECTS_H
