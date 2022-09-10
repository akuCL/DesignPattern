#include "thirdpartydisplay.h"
#include <QDebug>

ThirdPartyDisplay::ThirdPartyDisplay(WeatherData *weatherData,QObject *parent) : Observer(parent),DisplayElement(parent)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ThirdPartyDisplay::update()
{
    this->temperature = weatherData->getTemperature();
    this->humidity = weatherData->getHumidity();
    display();
}

void ThirdPartyDisplay::display()
{
        qDebug() << "ThirdPartyDisplay Current conditions: " << temperature << "F degress and" << humidity << "% humidity";
}
