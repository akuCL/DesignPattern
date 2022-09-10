#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beberage.h"

class CondimentDecorator : public Beberage
{
public:
    explicit CondimentDecorator(QObject *parent = nullptr);

private:
    Beberage* beberage;
};

#endif // CONDIMENTDECORATOR_H
