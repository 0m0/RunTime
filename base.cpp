#include "base.h"
#include "bomb.h"
#include "container.h"
#include <QtWidgets/QMessageBox>
#include <QDebug>

Base::Base(Container *parent) :
    QObject(parent)
{
    connect(parent, SIGNAL(iamExploding()), this, SLOT(explode()));
}

Base::~Base()
{
    qDebug() << "Base is destroyed.";
}

void Base::explode()
{
    this->fnExplode();
}

void Base::fnExplode()
{
    QMessageBox::warning(0, "Warning", "Base is exploding...");
}
