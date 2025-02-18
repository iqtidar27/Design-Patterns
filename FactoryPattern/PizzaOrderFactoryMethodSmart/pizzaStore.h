#pragma once
#include "pizza.h"
#include <memory>
#include <string_view>
using namespace std;

class PizzaStore
{
public:
    virtual ~PizzaStore() = default;
    unique_ptr<Pizza> pizzaOrder(string_view type);

protected:
    virtual unique_ptr<Pizza> createPizza(string_view item) = 0; // factory method
};

inline unique_ptr<Pizza> PizzaStore::pizzaOrder(string_view type)
{
    auto pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}