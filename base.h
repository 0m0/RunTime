#ifndef BASE_H
#define BASE_H

#include <QObject>

class Container;

class Base : public QObject
{
    Q_OBJECT
public:
    explicit Base(Container *parent = 0);
    virtual void fnExplode();

signals:
    void exploding();

public slots:
    void explode();
};

#endif // BASE_H
