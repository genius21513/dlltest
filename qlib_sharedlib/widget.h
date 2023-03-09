#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#if defined MAKE_TEST_LIB
 #define TEST_LIB_EXPORT Q_DECL_EXPORT
#else
 #define TEST_LIB_EXPORT Q_DECL_IMPORT
#endif

extern "C" TEST_LIB_EXPORT QWidget* createWidget1();

#endif // WIDGET_H
