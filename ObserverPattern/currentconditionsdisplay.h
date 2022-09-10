#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class CurrentConditionsDisplay : public Observer,public DisplayElement
{
public:
    explicit CurrentConditionsDisplay(WeatherData *weatherData, QObject *parent = nullptr);

    virtual void update();
    virtual void display();

private:
    float temperature;
    float humidity;
    WeatherData *weatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H
