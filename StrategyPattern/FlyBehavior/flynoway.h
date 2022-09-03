#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include <QObject>
#include "flybehavior.h"
#include <QDebug>

class FlyNoWay : public FlyBehavior
{
    Q_OBJECT
public:
    explicit FlyNoWay();
    ~FlyNoWay();

    virtual void fly();

signals:

};

#endif // FLYNOWAY_H
