#pragma once
#include "foodItem.h"

// Abstract Factory
class FoodFactory
{
public:
    virtual FoodItem *createFood() const = 0;
};

// Concrete Factory
class CheesePizzaFactory : public FoodFactory
{
public:
    FoodItem *createFood() const override
    {
        return new CheesePizza();
    }
};

class PepperoniPizzaFactory : public FoodFactory
{
public:
    FoodItem *createFood() const override
    {
        return new Pepperoni();
    }
};

class SpaghettiPizzaFactory : public FoodFactory
{
public:
    FoodItem *createFood() const override
    {
        return new Spaghetti();
    }
};
