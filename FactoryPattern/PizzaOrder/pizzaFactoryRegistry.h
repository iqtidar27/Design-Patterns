#pragma once
#include "pizza.h"
#include "pizzaFactory.h"
#include <unordered_map>

class PizzaFactoryRegistry
{
public:
    static PizzaFactoryRegistry &getInstance()
    {
        static PizzaFactoryRegistry instance;
        return instance;
    }

    void registerFactory(const string &name, PizzaFactory *factory)
    {
        factories[name] = factory;
    }

    PizzaFactory *getFactory(const string &name)
    {
        auto it = factories.find(name);
        if (it != factories.end())
        {
            return it->second;
        }
        return nullptr;
    }

private:
    PizzaFactoryRegistry() = default;
    unordered_map<string, PizzaFactory *> factories;
};