#include "director.h"

int main()
{
    Director d;
    Sandwich s;

    // Make Burger Orders
    d.SetBuilderType(new BurgerBuilder());
    s = d.TakeoutOrder();
    s = d.DineInOrder();
    s = d.NoSauce();
    s = d.NoSides();
    cout << "------------" << endl;
    // Make Hotdog Orders
    d.SetBuilderType(new HotdogBuilder());
    s = d.TakeoutOrder();
    s = d.DineInOrder();
    s = d.NoSauce();
    s = d.NoSides();
    cout << "------------" << endl;

    // Make BLT Orders
    d.SetBuilderType(new BLTBuilder());
    s = d.TakeoutOrder();
    s = d.DineInOrder();
    s = d.NoSauce();
    s = d.NoSides();
    return 0;
}