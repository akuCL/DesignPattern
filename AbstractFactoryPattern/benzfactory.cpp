#include "benzfactory.h"
#include "benzcar.h"
#include "highbenzcar.h"

BenzFactory::BenzFactory(QObject *parent) : Factory(parent)
{

}

BenzFactory::~BenzFactory()
{
    qDebug() << "BenzFactory::~BenzFactory()";
}

Car *BenzFactory::createSpecificCar()
{
    return (new BenzCar());
}

HighCar *BenzFactory::createdSpecificHighCar()
{
    return (new HighBenzCar());
}
