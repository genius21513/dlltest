#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLibrary library("qlib_sharedlib.dll");
    if (!library.load())
        qDebug() << library.errorString();
    if (library.load())
        qDebug() << "library loaded";

    typedef QWidget *(*CreateWidgetFunction)();
    CreateWidgetFunction cwf = (CreateWidgetFunction)library.resolve("createWidget1");
    if (cwf) {
        QWidget *widget = cwf();
        if (widget)
            widget->show();
    } else {
        qDebug() << "Could not show widget from the loaded library";
    }
    return app.exec();
}
