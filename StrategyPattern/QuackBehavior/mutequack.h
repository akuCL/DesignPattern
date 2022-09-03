#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "quackbehavior.h"
#include <QDebug>
class MuteQuack : public QuackBehavior
{
public:
    explicit MuteQuack(QObject *parent = nullptr);
    ~MuteQuack();
    virtual void quack();
};

#endif // MUTEQUACK_H
