TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    name.cpp

QMAKE_CXXFLAGS = -std=c++11
QMAKE_LFLAGS = -std=c++11

HEADERS += \
    name.h

