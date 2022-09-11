#include "bmwfactory.h"
#include "bmwcar.h"
#include "highbmwcar.h"

BmwFactory::BmwFactory(QObject *parent) : Factory(parent)
{

}

BmwFactory::~BmwFactory()
{
    qDebug() << "BmwFactory::~BmwFactory()";
}

Car *BmwFactory::createSpecificCar()
{
    return (new BmwCar());
}

HighCar *BmwFactory::createdSpecificHighCar()
{
    return (new HighBmwCar());
}
