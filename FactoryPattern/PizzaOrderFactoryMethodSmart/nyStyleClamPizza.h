#pragma once
#include "pizza.h"

class NYStyleClamPizza : public Pizza
{
public:
    NYStyleClamPizza();
};

inline NYStyleClamPizza::NYStyleClamPizza()
{
    name = "NY Style Clam Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";
    toppings.push_back("Grated Reggiano Cheese");
    toppings.push_back("Fresh Clams from Long Island Sound");
}