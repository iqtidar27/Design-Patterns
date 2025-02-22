#include "pizzaFactory.h"
#include "pizzaStore.h"
#include "veggiePizza.h"
#include "clamsPizza.h"
#include "pizzaFactoryRegistry.h"
#include "cheesePizza.h"
#include <memory>

int main()
{
    auto factory = new CheesePizzaFactory(); // Create Facotry
    auto pizzaStore = PizzaStore(factory);   // Create store and pass it factory
    string customerOrder1 = "CheesePizza";
    auto pizza = pizzaStore.orderPizza(customerOrder1); // Order pizza from store
    cout << "\n\t";
    auto factory2 = new ClamsPizzaFactory();
    auto store = PizzaStore(factory2);
    string customerOrder2 = "ClamsPizza";
    auto pizza2 = store.orderPizza(customerOrder2);
}