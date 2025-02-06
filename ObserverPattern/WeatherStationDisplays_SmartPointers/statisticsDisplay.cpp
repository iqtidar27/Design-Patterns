#pragma once
#include <iostream>
#include <limits>
#include "iObserver.h"
#include "iDisplayElement.h"
using namespace std;

namespace ws
{
    class StatisticsDisplay : public IObserver, public IDisplayElement
    {
    public:
        void update(double temperature, double humidity, double pressure) override
        {
            ++m_numberOfReadings;
            m_avgTemeprature = (m_avgTemeprature * (m_numberOfReadings - 1) + temperature) / m_numberOfReadings;
            if (temperature > m_maxTemperature)
            {
                m_maxTemperature = temperature;
            }
            if (temperature < m_minTemperature)
            {
                m_minTemperature = temperature;
            }
            display();
        }

        void display() override
        {
            cout << "Avg/Max/Min temperature = " << m_avgTemeprature << "/" << m_maxTemperature << "/" << m_minTemperature << endl;
        }

    private:
        int m_numberOfReadings{};
        double m_maxTemperature = -std::numeric_limits<double>::infinity(); // Smallest possible starting value
        double m_minTemperature = std::numeric_limits<double>::infinity();  // Largest possible starting value
        double m_avgTemeprature{};
    };
} // namespace ws