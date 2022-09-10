#ifndef DARKROAST_H
#define DARKROAST_H

#include "beberage.h"

class DarkRoast : public Beberage
{
public:
    explicit DarkRoast(QObject *parent = nullptr);
    virtual float cost();
    virtual QString getDescription();
};

#endif // DARKROAST_H
