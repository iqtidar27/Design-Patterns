#pragma once
#include "chicagoStyleCheesePizza.h"
#include "chicagoStyleClamPizza.h"
#include "chicagoStylePepperoniPizza.h"
#include "chicagoStyleVeggiePizza.h"
#include "pizza.h"
#include "pizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
protected:
    unique_ptr<Pizza> createPizza(string_view item) override;
};

// Concrete Factory
inline std::unique_ptr<Pizza>
ChicagoPizzaStore::createPizza(std::string_view item)
{
    if (item == "cheese")
        return std::make_unique<ChicagoStyleCheesePizza>();
    if (item == "veggie")
        return std::make_unique<ChicagoStyleVeggiePizza>();
    if (item == "clam")
        return std::make_unique<ChicagoStyleClamPizza>();
    if (item == "pepperoni")
        return std::make_unique<ChicagoStylePepperoniPizza>();
    return nullptr;
}
