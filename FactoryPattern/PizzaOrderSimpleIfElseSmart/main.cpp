#include "simplePizzaFactory.h"
#include "pizzaStore.h"
#include "veggiePizza.h"
#include "clamPizza.h"
#include "cheesePizza.h"
#include <memory>

int main()
{
    auto factory = make_unique<SimplePizzaFactory>(); // Create Facotry
    auto pizzaStore = PizzaStore(move(factory));      // Create store and pass it factory
    auto pizza = pizzaStore.orderPizza("clam");       // Order pizza from store
}