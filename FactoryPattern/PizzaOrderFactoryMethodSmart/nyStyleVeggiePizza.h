#pragma once
#include "pizza.h"

class NYStyleVeggiePizza : public Pizza
{
public:
    NYStyleVeggiePizza();
};

inline NYStyleVeggiePizza::NYStyleVeggiePizza()
{
    name = "NY Style Veggie Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";
    toppings.push_back("Grated Reggiano Cheese");
    toppings.push_back("Garlic");
    toppings.push_back("Onion");
    toppings.push_back("Mushrooms");
    toppings.push_back("Red Pepper");
}