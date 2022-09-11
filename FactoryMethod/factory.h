#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
#include "car.h"

class Factory : public QObject
{
    Q_OBJECT
public:
    explicit Factory(QObject *parent = nullptr);
    virtual Car* createSpecificCar(void) = 0;
signals:

};

#endif // FACTORY_H
