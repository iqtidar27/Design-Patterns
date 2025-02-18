#pragma once
#include "foodFactory.h"
#include "foodItemProduct.h"

// Singleton Factory Registry
class FactoryRegistry
{
public:
    static FactoryRegistry &getInstance()
    {
        static FactoryRegistry instance;
        return instance;
    }

    void registerFactory(FoodType type, unique_ptr<FoodFactory> factory)
    {
        factories[type] = move(factory);
    }

    unique_ptr<FoodFactory> getFactory(FoodType type) const
    {
        auto it = factories.find(type);
        if (it != factories.end())
        {
            return it->second->clone();
        }
        return nullptr;
    }

private:
    FactoryRegistry() = default;
    unordered_map<FoodType, unique_ptr<FoodFactory>> factories;
};