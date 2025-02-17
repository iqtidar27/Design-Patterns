#include "beverage.h"
#include "darkRoast.h"
#include "espresso.h"
#include "houseBlend.h"
#include "milk.h"
#include "mocha.h"
#include "soya.h"
#include <iostream>

int main()
{
    // Plain Espresso
    Beverage *beverage = new Espresso();
    cout << beverage->getComponentDescription() << " $" << beverage->getComponentCost() << endl;

    // Dark Roast with double Mocha and Milk
    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Milk(beverage2);
    cout << beverage2->getComponentDescription() << " $" << beverage2->getComponentCost() << endl;

    // House Blend with Soya, Mocha and Milk
    Beverage *beverage3 = new HouseBlend();
    beverage3 = new Soya(beverage3);
    beverage3 = new Milk(beverage3);
    beverage3 = new Mocha(beverage3);
    cout << beverage3->getComponentDescription() << " $" << beverage3->getComponentCost() << endl;
}