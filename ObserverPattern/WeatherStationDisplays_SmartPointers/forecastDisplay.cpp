#pragma once
#include "iObserver.h"
#include "iDisplayElement.h"
#include <iostream>

using namespace std;

namespace ws
{
    class ForecastDisplay : public IObserver, public IDisplayElement
    {
    public:
        void update(double temperature, double humidity, double pressure) override
        {
            m_lastPressure = m_currentPressure;
            m_currentPressure = pressure;
            display();
        }

        void display() override
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

    private:
        double m_currentPressure = 29.92;
        double m_lastPressure;
    };

} // namespace ws