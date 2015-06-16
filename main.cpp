#include <QApplication>
#include <QDebug>
#include "base.h"
#include "derived.h"
#include "bomb.h"
#include "container.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Container home;

    Bomb b;
    new Base(&home);
    new Derived(&home);
    new Derived(&home);
    new Derived(&home);

    QObject::connect(&b, SIGNAL(bombing()), &home, SIGNAL(iamExploding()));

    b.doBombing();

    //return a.exec();
}
