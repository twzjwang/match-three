#include "game.h"
#include "start.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game s;
    s.show();

    return a.exec();
}
