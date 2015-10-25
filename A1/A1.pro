QT += core
QT -= gui

TARGET = A1
CONFIG += console \
        c++11
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    my_osm.cpp

HEADERS += \
    my_osm.h

INCLUDEPATH  += ../3rdParty/osmpbf/osmpbf/include/
INCLUDEPATH  += ../3rdParty/osmpbf/generics/
