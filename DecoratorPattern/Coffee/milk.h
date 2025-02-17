#pragma once
#include "iCondimentDecorator.h"

// Concrete Decorator
class Milk : public ICondimentDecorator
{

public:
    Milk(Beverage *beverage) : ICondimentDecorator(beverage) {}

    string getComponentDescription() const override
    {
        return beverage_->getComponentDescription() + m_description;
    }
    double getComponentCost() const override
    {
        return beverage_->getComponentCost() + m_cost;
    }

private:
    string m_description = ", Milk";
    const double m_cost = 0.10;
};