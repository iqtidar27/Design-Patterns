#pragma once
#include "pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza();
    void cut() const override;
};

inline ChicagoStyleCheesePizza ::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
    toppings.push_back("Shredded Mozzarella Cheese");
}

inline void ChicagoStyleCheesePizza ::cut() const
{
    cout << "Cutting the pizza into square slices" << endl;
}
