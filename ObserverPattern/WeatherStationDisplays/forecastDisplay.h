#pragma once
#include "iObserver.h"
#include "iDisplayElement.h"
#include <iostream>
using namespace std;

class ForecastDisplay : public IObserver, public IDisplayElement
{
public:
    void update(double temperature, double humidity, double pressure) override;
    void display() override;

private:
    double m_currentPressure = 29.92;
    double m_lastPressure;
};