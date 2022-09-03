#ifndef SQUEAK_H
#define SQUEAK_H

#include "quackbehavior.h"
#include <QDebug>
class Squeak : public QuackBehavior
{
public:
    explicit Squeak(QObject *parent = nullptr);
    ~Squeak();
    virtual void quack();
};

#endif // SQUEAK_H
