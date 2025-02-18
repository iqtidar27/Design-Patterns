#pragma once
#include "pizza.h"

class ChicagoStyleClamPizza : public Pizza
{
public:
    ChicagoStyleClamPizza();
    void cut() const override;
};

inline ChicagoStyleClamPizza ::ChicagoStyleClamPizza()
{
    name = "Chicago Style Clam Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
    toppings.push_back("Shredded Mozarella Cheese");
    toppings.push_back("Frozen from Chesapeake Bay");
}

inline void ChicagoStyleClamPizza ::cut() const
{
    cout << "Cutting the pizza into square slices";
}