#pragma once

#include "iSubject.h"
#include "iObserver.h"
#include <list>
using namespace std;

class WeatherData : public ISubject
{
public:
    WeatherData() = default;
    ~WeatherData() = default;

    void registerObserver(IObserver *observer) override;

    void unregisterObserver(IObserver *observer) override;

    void notifyObservers() override;

    void setMeasurements(double temperature, double humidity, double pressure);

private:
    list<IObserver *> observers_;
    double m_temperature;
    double m_humidity;
    double m_pressure;
};