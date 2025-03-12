#pragma once
#include "concreteBuilder.h"

class Director
{
public:
    SandwichBuilder *builder;
    void SetBuilderType(SandwichBuilder *builder)
    {
        this->builder = builder;
    }
    // Dine In Order: AddBread -> AddProtein -> LoadSides -> DrizzleSauces
    Sandwich DineInOrder()
    {
        builder->AddBread();
        builder->AddProtein();
        builder->LoadSides();
        builder->DrizzleSauces();
        return builder->ReturnProduct();
    }
    // Takeout Order: Steps from Dine In Order -> AddWrapper
    Sandwich TakeoutOrder()
    {
        builder->AddBread();
        builder->AddProtein();
        builder->LoadSides();
        builder->DrizzleSauces();
        builder->AddWrapper();
        return builder->ReturnProduct();
    }
    // Order without Sauces: AddBread -> AddProtein -> LoadSides
    Sandwich NoSauce()
    {
        builder->AddBread();
        builder->AddProtein();
        builder->DrizzleSauces();
        return builder->ReturnProduct();
    }
    // Order No Sides: AddBread -> AddProtein -> DrizzleSauces
    Sandwich NoSides()
    {
        builder->AddBread();
        builder->AddProtein();
        builder->DrizzleSauces();
        return builder->ReturnProduct();
    }
};