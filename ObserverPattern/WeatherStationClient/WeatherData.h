#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Subject.h"
#include "Observer.h"
using namespace std;

/*
A concrete implementation of the Subject interface
WeatherData.h
*/

class WeatherStation : public Subject
{
public:
    void registerObserver(Observer *observer) override;
    void unregisterObserver(Observer *observer) override;

    void notifyObservers() override;

    // Set the new state of the weather station
    void setState(float temp, float humidity, float pressure);

private:
    vector<Observer *> observers_;
    float temp = 0.0f;
    float humidity = 0.0f;
    float pressure = 0.0f;
};
#endif // WEATHERSTATION_H