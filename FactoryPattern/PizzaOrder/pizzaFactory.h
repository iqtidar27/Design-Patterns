#pragma once
#include "cheesePizza.h"
#include "clamsPizza.h"
#include "pizza.h"
#include "veggiePizza.h"
#include <memory>
#include <string>
using namespace std;

class PizzaFactory
{
public:
    virtual Pizza *createPizza(string_view) const = 0; // Pure virtual function
    virtual ~PizzaFactory() = default;                 // Virtual destructor
};

class VeggiePizzaFactory : public PizzaFactory
{
public:
    Pizza *createPizza(string_view name) const override
    {
        return new VeggiePizza();
    }
};

class CheesePizzaFactory : public PizzaFactory
{
public:
    Pizza *createPizza(string_view name) const override
    {
        return new CheesePizza();
    }
};

class ClamsPizzaFactory : public PizzaFactory
{
public:
    Pizza *createPizza(string_view name) const override
    {
        return new ClamsPizza();
    }
};
