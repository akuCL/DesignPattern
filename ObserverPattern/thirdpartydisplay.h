#ifndef THIRDPARTYDISPLAY_H
#define THIRDPARTYDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"

class ThirdPartyDisplay : public Observer,public DisplayElement
{
public:
    explicit ThirdPartyDisplay(WeatherData *weatherData,QObject *parent = nullptr);
    virtual void update();
    virtual void display();

private:
    float temperature;
    float humidity;
    WeatherData *weatherData;
};

#endif // THIRDPARTYDISPLAY_H
