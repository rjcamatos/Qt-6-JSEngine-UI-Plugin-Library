TEMPLATE = subdirs

CONFIG += ordered

SUBDIRS =  jseplugins main

CONFIG += c++11
CONFIG += qtc_runnable

QT +=  gui core widgets uitools qml

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
