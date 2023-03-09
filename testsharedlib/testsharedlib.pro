SOURCES += \
        main.cpp


TEMPLATE = app
TARGET = testsharedlib
QT += widgets
INCLUDEPATH += ../sharedlib
DEPENDPATH += . ../_build/sharedlib
LIBS += -L../_build/sharedlib -lsharedlib
DESTDIR    = ../_build/sharedlib

#win32 {
#    CONFIG(debug, release|debug):DESTDIR = ../destDir
#    CONFIG(release, release|debug):DESTDIR = ../destDir
#} else {
#    DESTDIR    = ../destDir
#}



