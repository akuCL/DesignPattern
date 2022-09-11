#ifndef BENZFACTORY_H
#define BENZFACTORY_H

#include "factory.h"

class BenzFactory : public Factory
{
public:
    explicit BenzFactory(QObject *parent = nullptr);
    ~BenzFactory();
    virtual Car* createSpecificCar(void);
    virtual HighCar* createdSpecificHighCar(void);
};

#endif // BENZFACTORY_H
