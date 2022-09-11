#include "benzfactory.h"
#include "benzcar.h"

BenzFactory::BenzFactory(QObject *parent) : Factory(parent)
{

}

Car *BenzFactory::createSpecificCar()
{
    return (new BenzCar());
}
