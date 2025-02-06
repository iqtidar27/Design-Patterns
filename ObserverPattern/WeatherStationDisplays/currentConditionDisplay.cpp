#include "currentConditionDisplay.h"

void CurrentConditionDisplay ::update(double temperature, double humidity, double pressure)
{
    m_temperature = temperature;
    m_humidity = humidity;
    m_pressure = pressure;
    display();
}

void CurrentConditionDisplay ::display()
{
    cout << "Current conditions display: " << m_temperature << " F degrees and " << m_humidity << " humidity" << endl;
}