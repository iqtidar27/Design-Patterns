#pragma once
#include "sandwichOrder.h"

class Decorator : public SandwichOrder // Decorator
{
public:
    SandwichOrder *order_;

    Decorator(SandwichOrder *order) : order_(order) {}
    int GetCost() const override
    {
        return order_->GetCost();
    }

    string GetIngredient() const override
    {
        return order_->GetIngredient();
    }
};