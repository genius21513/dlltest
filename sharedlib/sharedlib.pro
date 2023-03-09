HEADERS += \
    widget.h

SOURCES += \
    widget.cpp

QT += widgets

TEMPLATE = lib
TARGET = sharedlib
DEFINES += MAKE_TEST_LIB
DESTDIR = ../_build/sharedlib

