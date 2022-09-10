#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beberage.h"

class Espresso : public Beberage
{
public:
    explicit Espresso(QObject *parent = nullptr);
    virtual float cost();
    virtual QString getDescription();
};

#endif // ESPRESSO_H
