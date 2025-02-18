#include "factoryRegistry.h"
#include "foodFactory.h"
#include "foodItemProduct.h"

int main()
{
    // Get the singleton instance of the FactoryRegistry
    FactoryRegistry &registry = FactoryRegistry::getInstance();

    // Register Factories
    registry.registerFactory(FoodType::PIZZA, make_unique<CheesePizzaFactory>());
    registry.registerFactory(FoodType::PASTA, make_unique<SpaghettiPizzaFactory>());

    // Simulate a Customer order
    FoodType customerOrder = FoodType::PIZZA;
    unique_ptr<FoodFactory> factory = registry.getFactory(customerOrder);

    if (factory)
    {
        unique_ptr<FoodItem> food = factory->createFood();
        food->prepare(); //
    }
    else
    {
        cout << "No factory found for the requested food type!" << endl;
    }
}