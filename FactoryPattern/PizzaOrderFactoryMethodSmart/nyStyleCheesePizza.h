#pragma once
#include "pizza.h"

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza();
};

inline NYStyleCheesePizza::NYStyleCheesePizza()
{
    name = "NY Style Sauce and Cheese Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";
    toppings.push_back("Grated Reggiano Chesse");
}
