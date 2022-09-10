#include "darkroast.h"

DarkRoast::DarkRoast(QObject *parent) : Beberage(parent)
{
    description = "DarkRoast";
}

float DarkRoast::cost()
{
    return 1.66;
}

QString DarkRoast::getDescription()
{
    return description;
}
