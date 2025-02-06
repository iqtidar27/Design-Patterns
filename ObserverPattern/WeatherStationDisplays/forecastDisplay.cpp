#include "forecastDisplay.h"

void ForecastDisplay ::update(double temperature, double humidity, double pressure)
{
    m_lastPressure = m_currentPressure;
    m_currentPressure = pressure;
    display();
}

void ForecastDisplay ::display()
{
    cout << "Forecast: ";
    if (m_currentPressure > m_lastPressure)
    {
        cout << "Improving weather on the head! " << endl;
    }
    else if (m_currentPressure == m_lastPressure)
    {
        cout << "Same weather ahead! " << endl;
    }
    else
    {
        cout << "Watch out for coller, rainy weather!" << endl;
    }
}