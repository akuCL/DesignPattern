#ifndef DECOYDUCK_H
#define DECOYDUCK_H

#include "duck.h"

class DecoyDuck : public Duck
{
public:
    explicit DecoyDuck(QObject *parent = nullptr);
    ~DecoyDuck();
    virtual void performQuack();
    virtual void swim();
    virtual void display();
    virtual void performFly();
};

#endif // DECOYDUCK_H
