#ifndef DUCK_H
#define DUCK_H

#include <QObject>
#include "FlyBehavior/flybehavior.h"
#include "QuackBehavior/quackbehavior.h"
#include <QDebug>
class Duck : public QObject
{
    Q_OBJECT
public:
    explicit Duck(QObject *parent = nullptr);
    ~Duck();

    virtual void performQuack()=0;
    virtual void swim()=0;
    virtual void display()=0;
    virtual void performFly()=0;
    void setFlyBehavior(FlyBehavior* fb);
    void setQuackBehavior(QuackBehavior* qb);

signals:

public:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
};

#endif // DUCK_H
