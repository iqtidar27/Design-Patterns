#pragma once
#include "sandwich.h"

class UpdatedSandwichBulilder : public Sandwich
{
public:
    virtual void AddBread() = 0;
    virtual void AddProtein() = 0;
    void AddSide(Side s)
    {
        product.sides.push_back(s);
    }
    void AddSauce(Sauce s)
    {
        product.sauces.push_back(s);
    }
    virtual void AddWrapper() = 0;
    virtual void LoadSides() = 0;
    virtual void DrizzleSauces() = 0;
    Sandwich ReturnProduct()
    {
        return product;
    }

    Sandwich product;
};