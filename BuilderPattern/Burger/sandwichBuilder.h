#pragma once
#include "sandwich.h"

class SandwichBuilder
{
public:
    void AddBread();     // unique method
    void AddProtein();   // unique method
    void AddSide(Side s) // base method
    {
        product.sides.push_back(s);
    }
    void AddSauce(Sauce s) // base method
    {
        product.sauces.push_back(s);
    }
    void AddWrapper(); // unique method

    Sandwich ReturnProduct()
    {
        return product;
    }
    Sandwich product;
};