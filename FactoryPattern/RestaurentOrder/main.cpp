#include "factoryRegister.h"
#include "foodFactory.h"
#include "foodItem.h"

int main()
{
    // Get the singleton instance of the FactoryRegistry
    FactoryRegistry &registry = FactoryRegistry::getInstance();

    // Register Factories
    registry.registerFactory(FoodType::PIZZA, new CheesePizzaFactory());
    registry.registerFactory(FoodType::PASTA, new SpaghettiPizzaFactory());

    // Simulate a Customer Order
    FoodType cutomerOrder = FoodType::PIZZA;
    FoodFactory *factory = registry.getFactory(cutomerOrder);

    if (factory)
    {
        FoodItem *food = factory->createFood();
        food->prepare();
    }
    else
    {
        cout << "No factory found for the requested food type!" << endl;
    }

    return 0;
}
