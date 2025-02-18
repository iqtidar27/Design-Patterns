#pragma once
#include "nyStyleCheesePizza.h"
#include "nyStyleClamPizza.h"
#include "nyStylePepperoniPizza.h"
#include "nyStyleVeggiePizza.h"
#include "pizza.h"
#include "pizzaStore.h"

class NYPizzaStore : public PizzaStore
{
protected:
    unique_ptr<Pizza> createPizza(string_view name) override;
};

// Concrete Factory
inline std::unique_ptr<Pizza>
NYPizzaStore::createPizza(std::string_view item)
{
    if (item == "cheese")
        return std::make_unique<NYStyleCheesePizza>();
    if (item == "veggie")
        return std::make_unique<NYStyleVeggiePizza>();
    if (item == "clam")
        return std::make_unique<NYStyleClamPizza>();
    if (item == "pepperoni")
        return std::make_unique<NYStylePepperoniPizza>();
    return nullptr;
}