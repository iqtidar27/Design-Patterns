#include "statisticsDisplay.h"

void StatisticsDisplay ::update(double temperature, double humidity, double pressure)
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

void StatisticsDisplay ::display()
{
    cout << "Avg/Max/Min temperature = " << m_avgTemeprature << "/" << m_maxTemperature << "/" << m_minTemperature << endl;
}