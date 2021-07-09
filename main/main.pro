QT       += gui core widgets uitools qml

CONFIG += console
CONFIG += c++11
CONFIG += qtc_runnable


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    ../../build-TestJSEPlugins-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/main/jseplugins/widget.ui \
    mainwindow.ui

CONFIG(debug, debug|release) {
    LIBS += -L"$$OUT_PWD/../jseplugins/debug" -ljseplugins
}

CONFIG(release, debug|release) {
    LIBS += -L"$$OUT_PWD/../jseplugins/release" -ljseplugins
}


SUBDIRS += \
    ../jseplugins/jseplugins.pro

DISTFILES += \
    ../../build-TestJSEPlugins-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/main/jseplugins/script.js
