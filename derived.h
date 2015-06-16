#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
    Q_OBJECT
public:
    explicit Derived(Container *parent = 0);
    virtual ~Derived();
    void fnExplode();

signals:

public slots:

};

#endif // DERIVED_H
