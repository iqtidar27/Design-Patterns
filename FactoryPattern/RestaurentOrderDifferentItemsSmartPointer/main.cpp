#include "factoryRegistry.h"
#include "foodFactory.h"
#include "foodItemProduct.h"

int main()
{
    // Step 1: Get the singleton FactoryRegistry instance
    FactoryRegistry &registry = FactoryRegistry ::getInstance();

    // Step 2: Register Concrete Factories
    registry.registerFactory("CheesePizza", make_unique<ChessPizzaFactory>());
    registry.registerFactory("PepperoniPizza", make_unique<PepperoniPizzaFactory>());
    registry.registerFactory("Spaghetti", make_unique<SpaghettiFactory>());
    registry.registerFactory("PennePasta", make_unique<PennePastaFactory>());

    // Step 3: Retrieve correct factory based on the customer choice.
    string customerOder = "CheesePizza";

    FoodFactory *factory = registry.getFactory(customerOder);

    if (factory)
    {
        unique_ptr<FoodItem> food = factory->createFood();
        food->prepare();
    }
    else
    {
        cout << "Invalid food choice" << endl;
    }
}