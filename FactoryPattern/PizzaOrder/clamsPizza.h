#pragma once
#include "pizza.h"

class ClamsPizza : public Pizza
{
public:
    ClamsPizza();
};

inline ClamsPizza ::ClamsPizza()
{
    name = "Clams Pizza";
    dough = "Thin Crust Though";
    sauce = "Mariana Sauce";
    toppings.push_back("Grated Regiano Clam");
    toppings.push_back("Fresh Clams");
}
