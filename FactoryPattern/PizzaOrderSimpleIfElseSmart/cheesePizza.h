#pragma once
#include "pizza.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza();
};

inline CheesePizza ::CheesePizza()
{
    name = "Cheese Pizza";
    dough = "Thin Crust Dough";
    sauce = "Mariana Sauce";
    toppings.push_back("Grated Regiano Cheese");
}