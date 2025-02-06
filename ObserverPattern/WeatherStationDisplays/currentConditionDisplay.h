#pragma once

#include "iDisplayElement.h"
#include "iObserver.h"
#include <iostream>
using namespace std;

class CurrentConditionDisplay : public IObserver, public IDisplayElement
{
public:
    void update(double temperature, double humidity, double pressure) override;
    void display() override;

private:
    double m_temperature{};
    double m_humidity{};
    double m_pressure{};
};