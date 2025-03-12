#pragma once
#include "sandwich.h"

// Abstract builder class
class SandwichBuilder
{
public:
    virtual void AddBread() = 0;
    virtual void AddProtein() = 0;
    virtual void AddWrapper() = 0;
    virtual void LoadSides() = 0;
    virtual void DrizzleSauces() = 0;
    void AddSide(Side s)
    {
        product.sides.push_back(s);
    }
    void AddSauce(Sauce s)
    {
        product.sauces.push_back(s);
    }

    Sandwich ReturnProduct()
    {
        return product;
    }

    Sandwich product;
};