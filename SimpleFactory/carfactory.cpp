#include "carfactory.h"
#include "bmwcar.h"
#include "benzcar.h"

CarFactory::CarFactory(QObject *parent) : QObject(parent)
{

}

Car *CarFactory::createSpecificCar(CarType type)
{
    switch(type)
    {
    case BENZ://生产奔驰车
        return (new BenzCar());
    case BMW://生辰宝马车
        return (new BmwCar());
    default:
        return NULL;
    }
}
