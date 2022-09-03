#include "duck.h"

Duck::Duck(QObject *parent) : QObject(parent)
{
    qDebug() <<"Duck";
}

Duck::~Duck()
{
    qDebug() <<"~Duck";
}

void Duck::setFlyBehavior(FlyBehavior *fb)
{
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior *qb)
{
    quackBehavior = qb;
}
