#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>

enum CarType{BENZ, BMW};

class Car : public QObject
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);
    virtual void createdCar(void) = 0;
    virtual void run()=0;
signals:

};

#endif // CAR_H
