#ifndef BMWFACTORY_H
#define BMWFACTORY_H

#include "factory.h"

class BmwFactory : public Factory
{
public:
    explicit BmwFactory(QObject *parent = nullptr);
    virtual Car* createSpecificCar(void);
};

#endif // BMWFACTORY_H
