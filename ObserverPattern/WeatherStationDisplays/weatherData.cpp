#include "weatherData.h"

void WeatherData::registerObserver(IObserver *observer)
{
    observers_.push_back(observer);
}

void WeatherData ::unregisterObserver(IObserver *observer)
{
    observers_.remove(observer);
}

void WeatherData ::notifyObservers()
{
    for (auto &observer : observers_)
    {
        observer->update(m_temperature, m_humidity, m_pressure);
    }
}

void WeatherData ::setMeasurements(double temperature, double humidity, double pressure)
{
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    notifyObservers();
}