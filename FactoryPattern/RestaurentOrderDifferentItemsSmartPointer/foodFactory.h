#pragma once
#include "foodItemProduct.h"

// Abstract Factory
class FoodFactory
{
public:
    virtual unique_ptr<FoodItem> createFood() const = 0;
    virtual ~FoodFactory() = default;
};

// Concrete Factories for(CheesePizza)
class ChessPizzaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<CheesePizza>();
    }
};

// Concrete Factories for(PepperoniPizza)
class PepperoniPizzaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<PepperoniPizza>();
    }
};

// Concrete Factories for(SpaghettiPasta)
class SpaghettiFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<Spaghetti>();
    }
};

// Concrete Factories for(PennePasta)
class PennePastaFactory : public FoodFactory
{
public:
    unique_ptr<FoodItem> createFood() const override
    {
        return make_unique<PennePasta>();
    }
};