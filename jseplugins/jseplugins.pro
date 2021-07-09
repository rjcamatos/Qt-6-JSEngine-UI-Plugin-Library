QT +=  gui core qml widgets uitools
CONFIG += c++11 app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TEMPLATE = lib

QT +=  gui core widgets uitools qml

SOURCES += \
    core/jseplugins_qsize.cpp \
    gui/jseplugins_qicon.cpp \
    jseplugins.cpp \
    jseplugins_qexample.cpp \
    uitools/jseplugins_quiloader.cpp \
    core/jseplugins_qevent.cpp \
    core/jseplugins_qtimerevent.cpp \
    io/jseplugins_qdir.cpp \
    io/jseplugins_qfile.cpp \
    widgets/jseplugins_qcheckbox.cpp \
    widgets/jseplugins_qcombobox.cpp \
    widgets/jseplugins_qcommandlinkbutton.cpp \
    widgets/jseplugins_qdatetimeedit.cpp \
    widgets/jseplugins_qdial.cpp \
    widgets/jseplugins_qdialogbuttonbox.cpp \
    widgets/jseplugins_qdoublespinbox.cpp \
    widgets/jseplugins_qfontcombobox.cpp \
    widgets/jseplugins_qformlayout.cpp \
    widgets/jseplugins_qgridlayout.cpp \
    widgets/jseplugins_qhboxlayout.cpp \
    widgets/jseplugins_qlabel.cpp \
    widgets/jseplugins_qlcdnumber.cpp \
    widgets/jseplugins_qlineedit.cpp \
    widgets/jseplugins_qlistwidget.cpp \
    widgets/jseplugins_qlistwidgetitem.cpp \
    widgets/jseplugins_qmainwindow.cpp \
    widgets/jseplugins_qplaintextedit.cpp \
    widgets/jseplugins_qprogressbar.cpp \
    widgets/jseplugins_qpushbutton.cpp \
    widgets/jseplugins_qradiobutton.cpp \
    widgets/jseplugins_qscrollarea.cpp \
    widgets/jseplugins_qslider.cpp \
    widgets/jseplugins_qspinbox.cpp \
    widgets/jseplugins_qtablewidget.cpp \
    widgets/jseplugins_qtablewidgetitem.cpp \
    widgets/jseplugins_qtextedit.cpp \
    widgets/jseplugins_qtimeedit.cpp \
    widgets/jseplugins_qtoolbutton.cpp \
    widgets/jseplugins_qvboxlayout.cpp \
    widgets/jseplugins_qwidget.cpp



HEADERS += \
    core/jseplugins_qsize.h \
    core/jseplugins_qtimerevent.h \
    gui/jseplugins_qicon.h \
    jseplugins.h \
    jseplugins_qexample.h \
    uitools/jseplugins_quiloader.h \
    core/jseplugins_qevent.h \
    jseplugins_types.h \
    io/jseplugins_qdir.h \
    io/jseplugins_qfile.h \
    widgets/jseplugins_qcheckbox.h \
    widgets/jseplugins_qcombobox.h \
    widgets/jseplugins_qcommandlinkbutton.h \
    widgets/jseplugins_qdatetimeedit.h \
    widgets/jseplugins_qdial.h \
    widgets/jseplugins_qdialogbuttonbox.h \
    widgets/jseplugins_qdoublespinbox.h \
    widgets/jseplugins_qfontcombobox.h \
    widgets/jseplugins_qformlayout.h \
    widgets/jseplugins_qgridlayout.h \
    widgets/jseplugins_qhboxlayout.h \
    widgets/jseplugins_qlabel.h \
    widgets/jseplugins_qlcdnumber.h \
    widgets/jseplugins_qlineedit.h \
    widgets/jseplugins_qlistwidget.h \
    widgets/jseplugins_qlistwidgetitem.h \
    widgets/jseplugins_qmainwindow.h \
    widgets/jseplugins_qplaintextedit.h \
    widgets/jseplugins_qprogressbar.h \
    widgets/jseplugins_qpushbutton.h \
    widgets/jseplugins_qradiobutton.h \
    widgets/jseplugins_qscrollarea.h \
    widgets/jseplugins_qslider.h \
    widgets/jseplugins_qspinbox.h \
    widgets/jseplugins_qtablewidget.h \
    widgets/jseplugins_qtablewidgetitem.h \
    widgets/jseplugins_qtextedit.h \
    widgets/jseplugins_qtimeedit.h \
    widgets/jseplugins_qtoolbutton.h \
    widgets/jseplugins_qvboxlayout.h \
    widgets/jseplugins_qwidget.h
