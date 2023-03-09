#include <QtWidgets>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.setWindowTitle("Shared Lib Test");
    w.resize(300, 100);
    w.show();

    return a.exec();
}
