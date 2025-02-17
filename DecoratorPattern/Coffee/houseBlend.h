#pragma once
#include "beverage.h"

// Conrete Component
class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        m_description = "House Blend Coffee";
    }

    double getComponentCost() const override
    {
        return 1.79;
    }
};