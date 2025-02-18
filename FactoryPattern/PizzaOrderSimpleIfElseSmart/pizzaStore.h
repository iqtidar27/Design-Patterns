#pragma once
#include "simplePizzaFactory.h"
#include "pizza.h"
#include <memory>
#include <string>
#include <string_view>

class PizzaStore
{
public:
    PizzaStore() = default;
    PizzaStore(unique_ptr<SimplePizzaFactory> f) : factory(move(f)) {}
    unique_ptr<Pizza> orderPizza(string_view type);

private:
    unique_ptr<SimplePizzaFactory> factory = nullptr;
};

inline unique_ptr<Pizza> PizzaStore::orderPizza(string_view type)
{
    auto pizza = factory->createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}