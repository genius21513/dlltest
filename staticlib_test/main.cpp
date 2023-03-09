#include "test.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test w;
    w.setWindowTitle("Static Lib test");
    w.resize(300, 100);
    w.show();
    return a.exec();
}
