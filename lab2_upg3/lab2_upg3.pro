TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    person.cpp \
    func.cpp \
    address.cpp \
    name.cpp

QMAKE_CXXFLAGS = -std=c++11 -W -Wall -Wextra -pedantic -ansi
QMAKE_LFLAGS = -std=c++11 -W -Wall -Wextra -pedantic -ansi

HEADERS += \
    person.h \
    func.h \
    address.h \
    name.h

