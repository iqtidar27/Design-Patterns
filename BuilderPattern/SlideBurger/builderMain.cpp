#include "concreteBuilder.h"

Sandwich CreateSandwich(SandwichBuilder *builder)
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
    cout << "Creating Bruger: ------" << endl;
    CreateSandwich(new BurgerBuilder());
    cout << "Creating Hotdog: ----- " << endl;
    CreateSandwich(new HotdogBuilder());
    cout << "Creating BLT: ---- " << endl;
    CreateSandwich(new BLTBuilder());
}