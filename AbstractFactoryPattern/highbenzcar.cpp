#include "highbenzcar.h"

HighBenzCar::HighBenzCar(QObject *parent) : HighCar(parent)
{
    qDebug() << "HighBenzCar::HighBenzCar()";
}

HighBenzCar::~HighBenzCar()
{
    qDebug() << "HighBenzCar::~HighBenzCar()";
}

void HighBenzCar::createdCar()
{
    qDebug() << "HighBenzCar::createdCar()";
}
