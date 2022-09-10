#include "beberage.h"

Beberage::Beberage(QObject *parent) : QObject(parent)
{
    description = "Unknown Beberage";
}

QString Beberage::getDescription()
{
    return description;
}
