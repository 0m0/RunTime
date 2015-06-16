#include "derived.h"
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <typeinfo>

Derived::Derived(Container *parent) :
    Base(parent)
{
}

void Derived::fnExplode()
{
    QMessageBox::warning(0, "Warning", "Derived is exploding...");
}
