#include <QCoreApplication>
#include "benzfactory.h"
#include "bmwfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory* factory = new BenzFactory();
    Car* specificCarA = factory->createSpecificCar();
    specificCarA->run();

    factory = new BmwFactory();
    Car* specificCarB = factory->createSpecificCar();
    specificCarB->run();

    delete factory;
    delete specificCarA;
    delete specificCarB;
    return a.exec();
}
