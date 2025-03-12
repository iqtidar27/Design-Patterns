#include "builderChain.h"

Sandwich BuildBurger()
{
    BurgerBuilder builder;
    builder.AddBread().AddProtein().AddSide(Side::Lettuce).AddSide(Side::Tomato).AddSauce(Sauce::YumYum).AddWrapper();
    return builder.ReturnProduct();
}

Sandwich BuildHotdog()
{
    HotdogBuilder builder;
    builder.AddBread().AddProtein().AddSide(Side::Onions).AddSauce(Sauce::Mustard).AddSauce(Sauce::Ketchup).AddWrapper();
    return builder.ReturnProduct();
}

Sandwich BuildBLT()
{
    BLTBuilder builder;
    builder.AddBread().AddProtein().AddSide(Side::Lettuce).AddSide(Side::Tomato).AddSauce(Sauce::Mayo).AddWrapper();
    return builder.ReturnProduct();
}

int main()
{
    Sandwich buger = BuildBurger();
    cout << "------" << endl;
    Sandwich hotdog = BuildHotdog();
    cout << "------" << endl;
    Sandwich BLT = BuildBLT();
}
