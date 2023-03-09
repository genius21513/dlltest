#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#if defined MAKE_TEST_LIB
    #define TEST_LIB_EXPORT Q_DECL_EXPORT
#else
    #define TEST_LIB_EXPORT Q_DECL_IMPORT
#endif

class TEST_LIB_EXPORT Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);

signals:

};

#endif // WIDGET_H

