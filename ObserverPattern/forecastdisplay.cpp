#include "forecastdisplay.h"
#include <QDebug>

ForecastDisplay::ForecastDisplay(WeatherData *weatherData, QObject *parent) : Observer(parent),DisplayElement(parent)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForecastDisplay::update()
{
    this->temperature = weatherData->getTemperature();
    this->humidity = weatherData->getHumidity();
    display();
}

void ForecastDisplay::display()
{
    qDebug() << "ForecastDisplay Current conditions: " << temperature << "F degress and" << humidity << "% humidity";
}
