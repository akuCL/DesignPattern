#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"
#include <QList>

class WeatherData : public Subject
{
public:
    explicit WeatherData(QObject *parent = nullptr);

    virtual void registerObserver(Observer* O);
    virtual void removeObserver(Observer* O);
    virtual void notifyObserver();

    void measurementsChanged();
    void setMeasurements(float temp,float humidity,float pressure);
    float getTemperature();
    float getHumidity();
    float getPressure();

private:
    QList<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif // WEATHERDATA_H
