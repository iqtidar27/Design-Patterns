#pragma once
#include "foodFactory.h"
#include "foodItem.h"
#include <unordered_map>

// Singleton Factory Registry
class FactoryRegistry
{
public:
    static FactoryRegistry &getInstance()
    {
        static FactoryRegistry instance;
        return instance;
    }

    void registerFactory(FoodType type, FoodFactory *factory) // Fixed function name
    {
        factories[type] = factory;
    }

    FoodFactory *getFactory(FoodType type) const
    {
        auto it = factories.find(type);
        if (it != factories.end())
        {
            return it->second;
        }
        return nullptr;
    }

private:
    FactoryRegistry() = default;
    unordered_map<FoodType, FoodFactory *> factories;
};
