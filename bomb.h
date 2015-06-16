#ifndef BOMB_H
#define BOMB_H

#include <QObject>

class Bomb : public QObject
{
    Q_OBJECT
public:
    explicit Bomb(QObject *parent = 0);
    void doBombing();

signals:
    void bombing();

public slots:

};

#endif // BOMB_H
