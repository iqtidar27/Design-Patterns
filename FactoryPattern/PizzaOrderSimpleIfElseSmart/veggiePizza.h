#pragma once
#include "pizza.h"

class VeggiePizza : public Pizza
{
public:
    VeggiePizza();
};

inline VeggiePizza ::VeggiePizza()
{
    name = "Veggie Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara sauce";
    toppings.push_back("Grated Regiano Veggie");
    toppings.push_back("Fresh veggies");
}