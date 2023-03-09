TEMPLATE = app
TARGET = staticlib_test
QT += widgets
INCLUDEPATH += ../staticlib
LIBS += -L../_build/static_lib -lstatic_lib
DESTDIR = ../_build/static_lib

SOURCES += \
    main.cpp
