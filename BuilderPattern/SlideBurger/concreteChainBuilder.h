#pragma once
#include "chainSandwichBuilder.h"

class BurgerBuilder : public ChainSandwichBuilder
{
public:
    ChainSandwichBuilder &AddBread()
    {
        cout << "Heating up the Seasame Sprinked Bun" << endl;
        product.b = Bread ::BurgerBun;
        return *this;
    }
    ChainSandwichBuilder &AddProtein()
    {
        cout << "Grilling the Wagyu" << endl;
        product.p = Protein::BeefPatty;
        return *this;
    }
    ChainSandwichBuilder &AddWrapper()
    {
        cout << "Wrapping with 100% recycled paper" << endl;
        product.w = Wrapper::Paper;
        return *this;
    }
    ChainSandwichBuilder &LoadSides()
    {
        cout << "Loading up the Burger" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
        return *this;
    }
    ChainSandwichBuilder &DrizzleSauces()
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::YumYum);
        return *this;
    }
};

class HotdogBuilder : public ChainSandwichBuilder
{
public:
    ChainSandwichBuilder &AddBread()
    {
        cout << "Steaming up the buns" << endl;
        product.b = Bread::HotdogBun;
        return *this;
    }
    ChainSandwichBuilder &AddProtein()
    {
        cout << "Boiling the hotdog in brine" << endl;
        product.p = Protein::Dog;
        return *this;
    }
    ChainSandwichBuilder &AddWrapper()
    {
        cout << "Placing the hotdog into box" << endl;
        product.w = Wrapper::Box;
        return *this;
    }
    ChainSandwichBuilder &LoadSides()
    {
        cout << "Loading up the Hotdog" << endl;
        this->AddSide(Side::Onions);
        return *this;
    }
    ChainSandwichBuilder &DrizzleSauces()
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::Mustard);
        return *this;
    }
};

class BLTBuilder : public ChainSandwichBuilder
{
public:
    ChainSandwichBuilder &AddBread()
    {
        cout << "Toasting bread in toaster" << endl;
        product.b = Bread::Toast;
        return *this;
    }
    ChainSandwichBuilder &AddProtein()
    {
        cout << "Sizzling bacon in cast iron pan" << endl;
        product.p = Protein::Bacon;
        return *this;
    }
    ChainSandwichBuilder &AddWrapper()
    {
        cout << "Wrapping up in a decompostable plastic wrap" << endl;
        product.w = Wrapper::Plastic;
        return *this;
    }
    ChainSandwichBuilder &LoadSides()
    {
        cout << "Loading up the BLT" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
        return *this;
    }
    ChainSandwichBuilder &DrizzleSauces()
    {
        cout << "Drizzling with the sauces" << endl;
        this->AddSauce(Sauce::Mayo);
        return *this;
    }
};