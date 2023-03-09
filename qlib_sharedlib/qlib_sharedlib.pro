HEADERS += \
    widget.h

SOURCES += \
    widget.cpp

QT += widgets
TEMPLATE = lib
DEFINES += MAKE_TEST_LIB
DESTDIR = ../_build/qlib
TARGET = qlib_sharedlib
