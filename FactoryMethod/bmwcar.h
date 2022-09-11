#ifndef BMWCAR_H
#define BMWCAR_H

#include "car.h"

class BmwCar : public Car
{
public:
    explicit BmwCar(QObject *parent = nullptr);
    ~BmwCar();
    virtual void createdCar(void);
    virtual void run();
};

#endif // BMWCAR_H
