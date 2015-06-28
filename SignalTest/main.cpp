#include "signalwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalWindow w;
    //w.hide();
    w.show();

    return a.exec();
}
