#include "houseblend.h"

HouseBlend::HouseBlend(QObject *parent) : Beberage(parent)
{
    description = "House Blend Coffee";
}

float HouseBlend::cost()
{
    return 0.89;
}

QString HouseBlend::getDescription()
{
    return description;
}
