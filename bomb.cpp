#include "bomb.h"

Bomb::Bomb(QObject *parent) :
    QObject(parent)
{
}

void Bomb::doBombing()
{
    emit bombing();
}
