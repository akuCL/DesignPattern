#include "squeak.h"

Squeak::Squeak(QObject *parent) : QuackBehavior(parent)
{
    qDebug() << "Squeak!";
}

Squeak::~Squeak()
{
    qDebug() << "~ Squeak!";
}

void Squeak::quack()
{
    qDebug() << "I Squeak!";
}
