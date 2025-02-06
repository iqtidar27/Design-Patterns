#include <iostream>
#include <memory>
#include <Windows.h>
#include "weatherData.cpp"
#include "forecastDisplay.cpp"
#include "statisticsDisplay.cpp"
#include "currentConditionDisplay.cpp"

using namespace std;

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    auto currentConditionDisplay = make_shared<ws::CurrentConditionDisplay>();
    auto statisticsDisplay = make_shared<ws::StatisticsDisplay>();
    auto forecaseDisplay = make_shared<ws::ForecastDisplay>();

    ws::WeatherData weatherData;

    weatherData.registerObserver(currentConditionDisplay);
    weatherData.registerObserver(statisticsDisplay);
    weatherData.registerObserver(forecaseDisplay);

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
