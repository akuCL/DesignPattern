#ifndef HIGHBENZCAR_H
#define HIGHBENZCAR_H

#include "highcar.h"

class HighBenzCar : public HighCar
{
public:
    explicit HighBenzCar(QObject *parent = nullptr);
    ~HighBenzCar();
    virtual void createdCar(void);
};

#endif // HIGHBENZCAR_H
