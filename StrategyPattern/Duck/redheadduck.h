#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#include "duck.h"

class RedheadDuck : public Duck
{
public:
    explicit RedheadDuck(QObject *parent = nullptr);
};

#endif // REDHEADDUCK_H
