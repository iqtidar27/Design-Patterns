#pragma once
#include "sandwich.h"

class ChainSandwichBuilder
{
public:
    virtual ChainSandwichBuilder &AddBread() = 0;   // unique method
    virtual ChainSandwichBuilder &AddProtein() = 0; // unique method
    ChainSandwichBuilder &AddSide(Side s)           // base method
    {
        product.sides.push_back(s);
        return *this;
    }
    ChainSandwichBuilder &AddSauce(Sauce s) // base method
    {
        product.sauces.push_back(s);
        return *this;
    }
    virtual ChainSandwichBuilder &AddWrapper() = 0; // unique method

    Sandwich ReturnProduct()
    {
        return product;
    }
    Sandwich product;
};