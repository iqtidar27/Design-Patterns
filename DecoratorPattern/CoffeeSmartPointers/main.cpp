#include "beverage.h"
#include "darkRoast.h"
#include "espresso.h"
#include "houseBlend.h"
#include "milk.h"
#include "mocha.h"
#include "soya.h"

#include <iostream>
#include <memory>

int main()
{
    // Plain Espresso
    shared_ptr<Beverage> beverage = make_shared<Espresso>();
    cout << beverage->getDescription() << " $" << beverage->getCost() << endl;

    // Dark Roast with double Mocha and Milk
    shared_ptr<Beverage> beverage2 = make_shared<DarkRoast>();
    beverage2 = make_shared<Mocha>(beverage2);
    beverage2 = make_shared<Mocha>(beverage2);
    beverage = make_shared<Milk>(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->getCost() << endl;

    // House Blend with Soya, Mocha and Milk
    shared_ptr<Beverage> beverage3 = make_shared<HouseBlend>();
    beverage3 = make_shared<Soya>(beverage3);
    beverage3 = make_shared<Mocha>(beverage3);
    beverage3 = make_shared<Milk>(beverage3);
    cout << beverage3->getDescription() << " $" << beverage3->getCost() << endl;
}