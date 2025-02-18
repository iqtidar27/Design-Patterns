#pragma once
#include "foodFactory.h"
#include "foodItemProduct.h"
#include <unordered_map>

class FactoryRegistry
{
public:
    static FactoryRegistry &getInstance()
    {
        static FactoryRegistry instance;
        return instance;
    }

    void registerFactory(const string &name, unique_ptr<FoodFactory> factory)
    {
        factories[name] = move(factory);
    }

    FoodFactory *getFactory(const string &name)
    {
        auto it = factories.find(name);
        if (it != factories.end())
        {
            return it->second.get();
        }
        return nullptr;
    }

private:
    FactoryRegistry() = default;
    unordered_map<string, unique_ptr<FoodFactory>> factories;
};