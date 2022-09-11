#include "bmwfactory.h"
#include "bmwcar.h"

BmwFactory::BmwFactory(QObject *parent) : Factory(parent)
{

}

Car *BmwFactory::createSpecificCar()
{
    return (new BmwCar());
}
