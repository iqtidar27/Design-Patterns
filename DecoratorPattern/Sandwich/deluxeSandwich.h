#pragma once
#include "sandwichOrder.h"

class DeluxeSandwich : public SandwichOrder // Concrete Component
{
public:
    int cost = 8;
    int GetCost() const override
    {
        return cost;
    }
    string GetIngredient() const override
    {
        return "Organic Bread, Organic Meat, Cheese, veggie";
    }
};