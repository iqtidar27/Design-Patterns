#pragma once
#include "sandwich.h"

// Abstract chain builder class
class ChainSandwichBuilder
{
public:
    virtual ChainSandwichBuilder &AddBread() = 0;
    virtual ChainSandwichBuilder &AddProtein() = 0;
    virtual ChainSandwichBuilder &AddWrapper() = 0;
    virtual ChainSandwichBuilder &LoadSides() = 0;
    virtual ChainSandwichBuilder &DrizzleSauces() = 0;
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