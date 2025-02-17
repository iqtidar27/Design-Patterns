#pragma once
#include "iCondimentDecorator.h"

// Concrete Decorator
class Milk : public ICondimentDecorator
{
public:
    Milk(shared_ptr<Beverage> beverage) : ICondimentDecorator(move(beverage)) {}

    string getDescription() const override
    {
        return m_beverage->getDescription() + m_description;
    }

    double getCost() const override
    {
        return m_beverage->getCost() + m_cost;
    }

private:
    string m_description = ", Milk";
    const double m_cost = 0.10;
};