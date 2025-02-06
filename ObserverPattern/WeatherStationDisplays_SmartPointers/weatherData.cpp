#pragma once

#include "iObserver.h"
#include "iSubject.h"
#include <list>
using namespace std;

namespace ws
{
    class WeatherData : public ISubject
    {
    public:
        WeatherData() = default;
        ~WeatherData() override = default;

        void registerObserver(shared_ptr<IObserver> observer) override
        {
            observers_.push_back(observer);
        }

        void unregisterObserver(shared_ptr<IObserver> observer) override
        {
            observers_.remove(observer);
        }

        void notifyObservers() override
        {
            for (auto &observer : observers_)
            {
                observer->update(m_temperature, m_humidity, m_pressure);
            }
        }

        void setMeasurements(double temperature, double humidity, double pressure)
        {
            m_temperature = temperature;
            m_humidity = humidity;
            m_pressure = pressure;
            notifyObservers();
        }

    private:
        list<shared_ptr<IObserver>> observers_;
        double m_temperature;
        double m_humidity;
        double m_pressure;
    };
} // namespace ws