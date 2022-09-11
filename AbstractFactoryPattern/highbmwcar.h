#ifndef HIGHBMWCAR_H
#define HIGHBMWCAR_H

#include "highcar.h"

class HighBmwCar : public HighCar
{
public:
    explicit HighBmwCar(QObject *parent = nullptr);
    ~HighBmwCar();
    virtual void createdCar(void);
};

#endif // HIGHBMWCAR_H
