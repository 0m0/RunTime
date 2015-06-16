#ifndef CONTAINER_H
#define CONTAINER_H

#include <QObject>

class Container : public QObject
{
    Q_OBJECT
public:
    explicit Container(QObject *parent = 0);

signals:
    void iamExploding();

public slots:

};

#endif // CONTAINER_H
