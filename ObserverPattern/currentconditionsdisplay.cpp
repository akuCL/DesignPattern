#include "currentconditionsdisplay.h"
#include <QDebug>

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData *weatherData, QObject *parent) : Observer(parent),DisplayElement(parent)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update()
{
    this->temperature = weatherData->getTemperature();
    this->humidity = weatherData->getHumidity();
    display();
}

void CurrentConditionsDisplay::display()
{
    qDebug() << "CurrentConditionsDisplay Current conditions: " << temperature << "F degress and" << humidity << "% humidity";
}
