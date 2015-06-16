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
    Base b1(&home);
    Derived d1(&home), d2(&home), d3(&home);

    QObject::connect(&b, SIGNAL(bombing()), &home, SIGNAL(iamExploding()));

    b.doBombing();

    //asynchronuce disposing
    home.deleteLater();

    if ((QObject *)&b1) qDebug() << "Wild Pointer!";

    //return 0;
    return a.exec();
}
