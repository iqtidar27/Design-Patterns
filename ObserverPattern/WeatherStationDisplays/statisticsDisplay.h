#pragma once
#include "iObserver.h"
#include "iDisplayElement.h"
#include <limits>
#include <iostream>
using namespace std;

class StatisticsDisplay : public IObserver, public IDisplayElement
{
public:
    void update(double temperature, double humidity, double pressure) override;
    void display() override;

private:
    double m_numberOfReadings{};
    double m_maxTemperature = -std::numeric_limits<double>::infinity(); // Smallest possible starting value
    double m_minTemperature = std::numeric_limits<double>::infinity();  // Largest possible starting value
    double m_avgTemeprature{};
};