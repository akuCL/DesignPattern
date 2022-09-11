#ifndef CARFACTORY_H
#define CARFACTORY_H

#include <QObject>
#include "car.h"

class CarFactory : public QObject
{
    Q_OBJECT
public:
    explicit CarFactory(QObject *parent = nullptr);

    static Car* createSpecificCar(CarType type);

signals:

};

#endif // CARFACTORY_H
