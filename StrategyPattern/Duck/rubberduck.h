#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "duck.h"

class RubberDuck : public Duck
{
public:
    explicit RubberDuck(QObject *parent = nullptr);
};

#endif // RUBBERDUCK_H
