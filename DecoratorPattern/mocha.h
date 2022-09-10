#ifndef MOCHA_H
#define MOCHA_H

#include "condimentdecorator.h"

class Mocha : public CondimentDecorator
{
public:
    explicit Mocha(Beberage* beberage,QObject *parent = nullptr);

    virtual QString getDescription();
    virtual float cost();
private:
    Beberage* beberage;
};

#endif // MOCHA_H
