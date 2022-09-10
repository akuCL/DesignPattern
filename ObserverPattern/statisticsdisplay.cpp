#include "statisticsdisplay.h"
#include <QDebug>

StatisticsDisplay::StatisticsDisplay(WeatherData *weatherData, QObject *parent) : Observer(parent),DisplayElement(parent)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update()
{
    this->temperature = weatherData->getTemperature();
    this->humidity = weatherData->getHumidity();
    display();
}

void StatisticsDisplay::display()
{
    qDebug() << "StatisticsDisplay Current conditions: " << temperature << "F degress and" << humidity << "% humidity";
}
