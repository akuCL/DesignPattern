#include <QCoreApplication>

#include "car.h"
#include "carfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car* car = CarFactory::createSpecificCar(CarType::BENZ);
    car->run();
    Car* car1 = CarFactory::createSpecificCar(CarType::BMW);
    car1->run();

    delete car;delete car1;
    return a.exec();
}
