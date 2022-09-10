#include "mocha.h"

Mocha::Mocha(Beberage* beberage,QObject *parent) : CondimentDecorator(parent)
{
    this->beberage = beberage;
}

QString Mocha::getDescription()
{
    return QString("%1%2").arg( beberage->getDescription()).arg( ",Mocha");
}

float Mocha::cost()
{
    return beberage->cost()+ 0.20;
}
