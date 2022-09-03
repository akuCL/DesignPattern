#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include <QObject>
#include "flybehavior.h"
#include <QDebug>

class FlyWithWings : public FlyBehavior
{
    Q_OBJECT
public:
    explicit FlyWithWings();
    ~FlyWithWings();

    virtual void fly();

signals:

};

#endif // FLYWITHWINGS_H
