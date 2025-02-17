#pragma once
#include "beverage.h"

// Concrete Component
class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        m_description = "House Blend Coffee";
    }
    double getCost() const override
    {
        return 1.79;
    }
};