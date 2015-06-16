#include "base.h"
#include "bomb.h"
#include "container.h"
#include <QtWidgets/QMessageBox>

Base::Base(Container *parent) :
    QObject(parent)
{
    connect(parent, SIGNAL(iamExploding()), this, SLOT(explode()));
}

void Base::explode()
{
    this->fnExplode();
}

void Base::fnExplode()
{
    QMessageBox::warning(0, "Warning", "Base is exploding...");
}
