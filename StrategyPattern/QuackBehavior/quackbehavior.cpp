#include "quackbehavior.h"

QuackBehavior::QuackBehavior(QObject *parent) : QObject(parent)
{
    qDebug() << "Quack Behavior!";
}

QuackBehavior::~QuackBehavior()
{
    qDebug() << "~ Quack Behavior!";
}
