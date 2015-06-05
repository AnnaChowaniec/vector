TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    vector1.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    vector1.h

