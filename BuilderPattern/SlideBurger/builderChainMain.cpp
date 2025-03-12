#include "concreteChainBuilder.h"

Sandwich CreateChainSandwich(ChainSandwichBuilder &builder)
{
    builder.AddBread().AddProtein().LoadSides().DrizzleSauces().AddWrapper();
    return builder.ReturnProduct();
}

int main()
{
    cout << "Creating Burger: ------" << endl;
    BurgerBuilder burgerBuilder;        // Stack allocation
    CreateChainSandwich(burgerBuilder); // Pass by reference

    cout << "Creating Hotdog: ----- " << endl;
    HotdogBuilder hotdogBuilder;
    CreateChainSandwich(hotdogBuilder);

    cout << "Creating BLT: ---- " << endl;
    BLTBuilder bltBuilder;
    CreateChainSandwich(bltBuilder);
}
