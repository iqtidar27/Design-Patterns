#pragma once

#include "iDisplayElement.h"
#include "iObserver.h"
#include <iostream>

using namespace std;

namespace ws
{
    class CurrentConditionDisplay : public IObserver, public IDisplayElement
    {
    public:
        void update(double temperature, double humidity, double pressure) override
        {
            m_temperature = temperature;
            m_humidity = humidity;
            m_pressure = pressure;
            display();
        }

        void display() override
        {
            cout << "Current conditions: " << m_temperature << " F degrees and " << m_humidity << " humidity" << endl;
        }

    private:
        double m_temperature{};
        double m_humidity{};
        double m_pressure{};
    };
} // namespace ws