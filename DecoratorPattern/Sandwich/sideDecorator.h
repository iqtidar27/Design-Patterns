#pragma once
#include "decorator.h"

class SideDecorator : public Decorator
{
public:
    string side_;
    int cost = 2;
    SideDecorator(string side, SandwichOrder *order) : side_(side), Decorator(order) {}

    int GetCost() const override
    {
        return cost + Decorator::GetCost();
    }

    string GetIngredient() const override
    {
        return side_ + " " + order_->GetIngredient();
    }
};
