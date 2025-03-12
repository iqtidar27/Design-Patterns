#pragma once
#include "sandwichBuilder.h"

class BurgerBuilder : public SandwichBuilder
{
public:
    void AddBread() override
    {
        cout << "Heating up the Seasame Sprinked Bun" << endl;
        product.b = Bread ::BurgerBun;
    }
    void AddProtein() override
    {
        cout << "Grilling the Wagyu" << endl;
        product.p = Protein::BeefPatty;
    }
    void AddWrapper() override
    {
        cout << "Wrapping with 100% recycled paper" << endl;
        product.w = Wrapper::Paper;
    }
    void LoadSides() override
    {
        cout << "Loading up the Burger" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
    }
    void DrizzleSauces() override
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::YumYum);
    }
};

class HotdogBuilder : public SandwichBuilder
{
public:
    void AddBread() override
    {
        cout << "Steaming up the buns" << endl;
        product.b = Bread::HotdogBun;
    }
    void AddProtein() override
    {
        cout << "Boiling the hotdog in brine" << endl;
        product.p = Protein::Dog;
    }
    void AddWrapper() override
    {
        cout << "Placing the hotdog into box" << endl;
        product.w = Wrapper::Box;
    }
    void LoadSides() override
    {
        cout << "Loading up the Hotdog" << endl;
        this->AddSide(Side::Onions);
    }
    void DrizzleSauces() override
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::Mustard);
    }
};

class BLTBuilder : public SandwichBuilder
{
public:
    void AddBread() override
    {
        cout << "Toasting bread in toaster" << endl;
        product.b = Bread::Toast;
    }
    void AddProtein() override
    {
        cout << "Sizzling bacon in cast iron pan" << endl;
        product.p = Protein::Bacon;
    }
    void AddWrapper() override
    {
        cout << "Wrapping up in a decompostable plastic wrap" << endl;
        product.w = Wrapper::Plastic;
    }
    void LoadSides() override
    {
        cout << "Loading up the BLT" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
    }
    void DrizzleSauces() override
    {
        cout << "Drizzling with the sauces" << endl;
        this->AddSauce(Sauce::Mayo);
    }
};