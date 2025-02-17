#pragma once
#include "iCondimentDecorator.h"

// Concrete Decorator
class Mocha : public ICondimentDecorator
{
public:
    Mocha(shared_ptr<Beverage> beverage) : ICondimentDecorator(move(beverage)) {}

    string getDescription() const override
    {
        return m_beverage->getDescription() + m_description;
    }

    double getCost() const override
    {
        return m_beverage->getCost() + m_cost;
    }

private:
    string m_description = ", Mocha";
    const double m_cost = 0.20;
};