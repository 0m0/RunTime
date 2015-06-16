#include "derived.h"
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <typeinfo>

Derived::Derived(Container *parent) :
    Base(parent)
{
}

Derived::~Derived()
{
    qDebug() << "Derived destroyed.";
}

void Derived::fnExplode()
{
    QMessageBox::warning(0, "Warning", "Derived is exploding...");
}
