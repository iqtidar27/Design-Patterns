#pragma once
#include "sandwichOrder.h"

class BasicSandwich : public SandwichOrder // Concrete Component
{
public:
    int cost = 5;
    int GetCost() const override
    {
        return cost;
    }
    string GetIngredient() const override
    {
        return "Basic Bread and Meat";
    }
};