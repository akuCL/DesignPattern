#include "bmwcar.h"

BmwCar::BmwCar(QObject *parent) : Car(parent)
{
    qDebug() << "BmwCar::BmwCar()";
}

BmwCar::~BmwCar()
{
    qDebug() << "BmwCar::~BmwCar()";
}

void BmwCar::createdCar()
{
    qDebug() << "BmwCar::createdCar()";
}

void BmwCar::run()
{
    createdCar();
    qDebug() << "I do BmwCar::run()";
}
