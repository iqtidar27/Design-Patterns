#include <iostream>
#include <Windows.h>
#include "weatherData.h"
#include "forecastDisplay.h"
#include "statisticsDisplay.h"
#include "currentConditionDisplay.h"

using namespace std;

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    CurrentConditionDisplay currentCondition;
    StatisticsDisplay statisticsDisplay;
    ForecastDisplay forecastDisplay;

    WeatherData weatherData;

    weatherData.registerObserver(&currentCondition);
    weatherData.registerObserver(&statisticsDisplay);
    weatherData.registerObserver(&forecastDisplay);

    setColor(3);
    weatherData.setMeasurements(80, 65, 30.4);
    cout << "====\n";
    setColor(15);
    weatherData.setMeasurements(82, 70, 29.2);
    cout << "====\n";
    setColor(6);
    weatherData.setMeasurements(78, 90, 29.2);
    cout << "====\n";
    setColor(13);
    weatherData.setMeasurements(85, 80, 30.4);
    cout << "====\n";
}