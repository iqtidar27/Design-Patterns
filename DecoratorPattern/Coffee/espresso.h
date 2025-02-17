#pragma once
#include "beverage.h"

// Concrete Component
class Espresso : public Beverage
{
public:
    Espresso()
    {
        m_description = "Espresso";
    }

    double getComponentCost() const override
    {
        return 1.99;
    }
};