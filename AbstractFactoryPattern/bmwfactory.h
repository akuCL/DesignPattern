#ifndef BMWFACTORY_H
#define BMWFACTORY_H

#include "factory.h"

class BmwFactory : public Factory
{
public:
    explicit BmwFactory(QObject *parent = nullptr);
    ~BmwFactory();
    virtual Car* createSpecificCar(void);
    virtual HighCar* createdSpecificHighCar(void);
};

#endif // BMWFACTORY_H
