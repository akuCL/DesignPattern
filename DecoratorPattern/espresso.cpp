#include "espresso.h"

Espresso::Espresso(QObject *parent) : Beberage(parent)
{
    description = "Espresso";
}

float Espresso::cost()
{
    return 1.99;
}

QString Espresso::getDescription()
{
    return description;
}
