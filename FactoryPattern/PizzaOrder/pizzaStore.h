#pragma once
#include "pizzaFactoryRegistry.h"
#include "pizzaFactory.h"
#include "cheesePizza.h"
#include "clamsPizza.h"
#include "veggiePizza.h"

class PizzaStore
{
public:
    PizzaStore(PizzaFactory *f) : factory(f)
    {
        // Get singleton instance of Factory Registry
        PizzaFactoryRegistry &registry = PizzaFactoryRegistry::getInstance();

        // Register Concrete Factories
        registry.registerFactory("CheesePizza", new CheesePizzaFactory()); //
        registry.registerFactory("ClamsPizza", new ClamsPizzaFactory());
        registry.registerFactory("VeggiePizza", new VeggiePizzaFactory());
    }

    Pizza *orderPizza(string_view type);

private:
    PizzaFactory *factory = nullptr;
};

inline Pizza *PizzaStore::orderPizza(string_view type)
{
    auto pizza = factory->createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}
