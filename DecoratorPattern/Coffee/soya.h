#pragma once
#include "iCondimentDecorator.h"

class Soya : public ICondimentDecorator
{
public:
    Soya(Beverage *beverage) : ICondimentDecorator(beverage) {}

    string getComponentDescription() const override
    {
        return beverage_->getComponentDescription() + m_description;
    }

    double getComponentCost() const override
    {
        return beverage_->getComponentCost() + m_cost;
    }

private:
    string m_description = ", Soya";
    const double m_cost = 0.15;
};