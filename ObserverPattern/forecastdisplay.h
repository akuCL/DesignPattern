#ifndef FORECASTDISPLAY_H
#define FORECASTDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class ForecastDisplay : public Observer,public DisplayElement
{
public:
    explicit ForecastDisplay(WeatherData *weatherData, QObject *parent = nullptr);
    virtual void update();
    virtual void display();

private:
    float temperature;
    float humidity;
    WeatherData *weatherData;
};

#endif // FORECASTDISPLAY_H
