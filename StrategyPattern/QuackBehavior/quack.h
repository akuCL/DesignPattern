#ifndef QUACK_H
#define QUACK_H

#include "quackbehavior.h"
#include <QDebug>
class Quack : public QuackBehavior
{
public:
    explicit Quack(QObject *parent = nullptr);
    ~Quack();
    virtual void quack();
};

#endif // QUACK_H
