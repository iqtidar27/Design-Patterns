#include "updatedConcreteBuilder.h"

Sandwich CreateSandwich(UpdatedSandwichBulilder *builder)
{
    builder->AddBread();
    builder->AddProtein();
    builder->LoadSides();
    builder->DrizzleSauces();
    builder->AddWrapper();
    return builder->ReturnProduct();
}

int main()
{
    cout << "Burger:" << endl;
    CreateSandwich(new BurgerBuilder());
    cout << "-------------" << endl;
    cout << "BLT:" << endl;
    CreateSandwich(new BLTBuilder());
    cout << "-------------" << endl;
    cout << "Hotdog:" << endl;
    CreateSandwich(new HotdogBuilder());
}