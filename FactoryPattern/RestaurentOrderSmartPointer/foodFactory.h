#pragma once
#include "foodItemProduct.h"

// Abstract Factory
class FoodFactory
{
public:
    virtual unique_ptr<FoodItem> createFood() const = 0;
    virtual unique_ptr<FoodFactory> clone() const = 0; // Required for Factory registry
};

// Concrete Factories
class CheesePizzaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<CheesePizza>();
    }

    unique_ptr<FoodFactory> clone() const override
    {
        return make_unique<CheesePizzaFactory>();
    }
};

class PepperoniPizzaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<Pepperoni>();
    }
    unique_ptr<FoodFactory> clone() const override
    {
        return make_unique<PepperoniPizzaFactory>();
    }
};

class SpaghettiPizzaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<Spaghetti>();
    }
    unique_ptr<FoodFactory> clone() const override
    {
        return make_unique<SpaghettiPizzaFactory>();
    }
};