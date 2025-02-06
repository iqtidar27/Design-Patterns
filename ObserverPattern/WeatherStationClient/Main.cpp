#include <iostream>
#include "WeatherData.h"
#include "Client.h"

using namespace std;

int main()
{
    // Concrete Subject
    WeatherStation weatherStation;

    // Concrete Observers
    Client one(1), two(2), three(3);
    float temp, humidity, pressure;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);

    cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp, humidity, pressure);

    weatherStation.unregisterObserver(&two);

    cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp, humidity, pressure);
}