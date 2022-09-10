#include "weatherdata.h"

WeatherData::WeatherData(QObject *parent) : Subject(parent)
{
}

void WeatherData::registerObserver(Observer *O)
{
    observers.append(O);
}

void WeatherData::removeObserver(Observer *O)
{
    observers.removeOne(O);
}

void WeatherData::notifyObserver()
{
    foreach(Observer* observer,observers)
    {
        observer->update();
    }
}

void WeatherData::measurementsChanged()
{
    notifyObserver();
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
    this->temperature = temp;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

float WeatherData::getTemperature()
{
    return this->temperature;
}

float WeatherData::getHumidity()
{
    return this->humidity;
}

float WeatherData::getPressure()
{
    return this->pressure;
}
