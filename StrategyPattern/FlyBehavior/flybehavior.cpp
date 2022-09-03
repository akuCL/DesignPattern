#include "flybehavior.h"

FlyBehavior::FlyBehavior(QObject *parent) : QObject(parent)
{
    qDebug() << "Fly Behavior!";
}

FlyBehavior::~FlyBehavior()
{
     qDebug() << "~ Fly Behavior!";
}
