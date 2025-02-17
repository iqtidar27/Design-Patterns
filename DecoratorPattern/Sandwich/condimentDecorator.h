#pragma once
#include "decorator.h"

class CondimentDecorator : public Decorator
{
public:
    string condiment_;
    int cost_ = 1;

    CondimentDecorator(string condiment, SandwichOrder *order) : condiment_(condiment), Decorator(order) {}

    int GetCost() const override
    {
        return cost_ + Decorator ::GetCost();
    }

    string GetIngredient() const override
    {
        return condiment_ + " " + order_->GetIngredient();
    }
};