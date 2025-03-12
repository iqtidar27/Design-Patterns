#include "concreteBuilder.h"

Sandwich BuildBurger()
{
    BurgerBuilder *builder = new BurgerBuilder();
    builder->AddBread();
    builder->AddProtein();
    builder->AddSide(Side::Lettuce);
    builder->AddSide(Side::Tomato);
    builder->AddSauce(Sauce::YumYum);
    builder->AddWrapper();
    return builder->ReturnProduct();
}

Sandwich BuildHotdog()
{
    HotdogBuilder *builder = new HotdogBuilder();
    builder->AddBread();
    builder->AddProtein();
    builder->AddSide(Side::Onions);
    builder->AddSauce(Sauce::Ketchup);
    builder->AddSauce(Sauce::Mustard);
    builder->AddWrapper();
    return builder->ReturnProduct();
}

Sandwich BuildBLT()
{
    BLTBuilder *builder = new BLTBuilder();
    builder->AddBread();
    builder->AddProtein();
    builder->AddSide(Side::Lettuce);
    builder->AddSide(Side::Tomato);
    builder->AddSauce(Sauce::Mayo);
    builder->AddWrapper();
    return builder->ReturnProduct();
}

int main()
{
    Sandwich buger = BuildBurger();
    cout << "------" << endl;
    Sandwich hotdog = BuildHotdog();
    cout << "------" << endl;
    Sandwich BLT = BuildBLT();
}
