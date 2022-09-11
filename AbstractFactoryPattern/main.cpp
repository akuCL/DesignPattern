#include <QCoreApplication>
#include "benzfactory.h"
#include "bmwfactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory* factory = new BenzFactory();
    Car* specificCar = factory->createSpecificCar();
    specificCar->run();
    HighCar* spcificHighCar = factory->createdSpecificHighCar();
    spcificHighCar->createdCar();

    qDebug() <<".......................................................";

    Factory* factory1 = new BmwFactory();
    Car* specificCar1 = factory1->createSpecificCar();
    specificCar1->run();
    HighCar* spcificHighCar1 = factory1->createdSpecificHighCar();
    spcificHighCar1->createdCar();

    delete factory; delete specificCar; delete spcificHighCar;
    delete factory1; delete specificCar1; delete spcificHighCar1;

    return a.exec();
}
