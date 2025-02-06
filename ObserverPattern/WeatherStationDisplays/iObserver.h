#pragma once

class IObserver
{
public:
    virtual ~IObserver() = default;
    virtual void update(double temperature, double humidity, double pressure) = 0;
};