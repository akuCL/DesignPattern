#include "benzcar.h"

BenzCar::BenzCar(QObject *parent) : Car(parent)
{
    qDebug() << "BenzCar::BenzCar()";
}

BenzCar::~BenzCar()
{
    qDebug() << "BenzCar::~BenzCar()";
}

void BenzCar::createdCar()
{
    qDebug() << "BenzCar::createdCar()";
}

void BenzCar::run()
{
    createdCar();
    qDebug() << "I do BenzCar::run()";
}
