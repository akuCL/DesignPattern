#include "highbmwcar.h"

HighBmwCar::HighBmwCar(QObject *parent) : HighCar(parent)
{
    qDebug() << "HighBmwCar::HighBmwCar()";
}

HighBmwCar::~HighBmwCar()
{
    qDebug() << "HighBmwCar::~HighBmwCar()";
}

void HighBmwCar::createdCar()
{
    qDebug() << "HighBmwCar::createdCar()";
}
