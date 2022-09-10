#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beberage.h"

class HouseBlend : public Beberage
{
public:
    explicit HouseBlend(QObject *parent = nullptr);
    virtual float cost();
    virtual QString getDescription();
};

#endif // HOUSEBLEND_H
