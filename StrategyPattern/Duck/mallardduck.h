#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"

class MallardDuck : public Duck
{
public:
    explicit MallardDuck(QObject *parent = nullptr);
};

#endif // MALLARDDUCK_H
