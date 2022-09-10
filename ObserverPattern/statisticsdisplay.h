#ifndef STATISTICSDISPLAY_H
#define STATISTICSDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class StatisticsDisplay : public Observer,public DisplayElement
{
public:
    explicit StatisticsDisplay(WeatherData *weatherData, QObject *parent = nullptr);
    virtual void update();
    virtual void display();

private:
    float temperature;
    float humidity;
    WeatherData *weatherData;
};

#endif // STATISTICSDISPLAY_H
