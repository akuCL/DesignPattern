#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"
#include "forecastdisplay.h"
#include "statisticsdisplay.h"
#include "thirdpartydisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData* weatherData = new WeatherData;

    CurrentConditionsDisplay* curr = new CurrentConditionsDisplay(weatherData);
    ForecastDisplay * fore = new ForecastDisplay(weatherData);
    StatisticsDisplay* stat = new StatisticsDisplay(weatherData);
    ThirdPartyDisplay* third = new ThirdPartyDisplay(weatherData);

    weatherData->setMeasurements(80,65,30.4f);
    weatherData->setMeasurements(82,70,29.2f);
    weatherData->setMeasurements(78,90,30.5f);

    weatherData->removeObserver(third);

    weatherData->setMeasurements(79,60,33.5f);

    weatherData->registerObserver(third);

    weatherData->setMeasurements(99,60,33.5f);

    return a.exec();
}
