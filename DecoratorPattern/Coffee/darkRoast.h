#pragma once
#include "beverage.h"

// Concrete Component
class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        m_description = "Dark Roast Coffee";
    }

    double getComponentCost() const override
    {
        return 1.89;
    }
};