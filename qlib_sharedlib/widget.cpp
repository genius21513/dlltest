#include <QtWidgets>
#include "widget.h"

QWidget* createWidget1()
{
    QWidget* widget = new QWidget();
    widget->setWindowTitle("Test for QLibrary");
    widget->resize(300, 100);
    return widget;
}
