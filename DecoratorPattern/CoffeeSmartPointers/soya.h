#pragma once
#include "iCondimentDecorator.h"

class Soya : public ICondimentDecorator
{
public:
    Soya(shared_ptr<Beverage> beverage) : ICondimentDecorator(move(beverage)) {}

    string getDescription() const override
    {
        return m_beverage->getDescription() + m_description;
    }
    double getCost() const override
    {
        return m_beverage->getCost() + m_cost;
    }

private:
    string m_description = ", Soya";
    const double m_cost = 0.15;
};