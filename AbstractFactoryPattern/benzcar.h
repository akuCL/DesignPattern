#ifndef BENZCAR_H
#define BENZCAR_H

#include "car.h"

class BenzCar : public Car
{
public:
    explicit BenzCar(QObject *parent = nullptr);
    ~BenzCar();
    virtual void createdCar(void);
    virtual void run();
};

#endif // BENZCAR_H
