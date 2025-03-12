#include "director.h"

int main()
{
    Director dir;
    Sandwich sand;

    // Make Burger Orders
    dir.setBuilderType(new BurgerBuilder());
    cout << "TakeOut Order for the Burger: ---------------" << endl;
    sand = dir.TakeoutOrder();
    cout << "Dine In Order for the Burger: ---------------" << endl;
    sand = dir.DineInOrder();
    cout << "No Sauce Order for the Burger: ---------------" << endl;
    sand = dir.NoSauce();
    cout << "No Sides Order for the Burger: ---------------" << endl;
    sand = dir.NoSides();
}