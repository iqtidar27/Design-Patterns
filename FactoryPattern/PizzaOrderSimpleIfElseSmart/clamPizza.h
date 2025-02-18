#pragma once
#include "pizza.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza();
};

inline ClamPizza ::ClamPizza()
{
    name = "Calm Pizza";
    dough = "Thin Crust Though";
    sauce = "Mariana Sauce";
    toppings.push_back("Grated Regiano Clam");
    toppings.push_back("Fresh Clams");
}
