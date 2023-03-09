QT += widgets
TEMPLATE = lib

HEADERS += \
    test.h

SOURCES += \
    test.cpp

CONFIG += staticlib
DESTDIR = ../_build/static_lib
TARGET = static_lib
