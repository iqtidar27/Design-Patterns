#pragma once
#include "cheesePizza.h"
#include "ClamPizza.h"
#include "pizza.h"
#include "veggiePizza.h"
#include <memory>
#include <string>
using namespace std;

class SimplePizzaFactory
{
public:
    unique_ptr<Pizza> createPizza(string_view);
};

inline unique_ptr<Pizza> SimplePizzaFactory::createPizza(string_view type)
{
    if (type == "cheese")
    {
        return make_unique<CheesePizza>();
    }
    else if (type == "clam")
    {
        return make_unique<ClamPizza>();
    }
    else if (type == "veggie")
    {
        return make_unique<VeggiePizza>();
    }
    else
    {
        return nullptr;
    }
}