#pragma once
#include "updatedSandwichBuilder.h"

class BurgerBuilder : public UpdatedSandwichBulilder
{
public:
    void AddBread()
    {
        cout << "Heating up the Seasame Sprinked Bun" << endl;
        product.b = Bread ::BurgerBun;
    }
    void AddProtein()
    {
        cout << "Grilling the Wagyu" << endl;
        product.p = Protein::BeefPatty;
    }
    void AddWrapper()
    {
        cout << "Loading up the Burger" << endl;
        product.w = Wrapper::Paper;
    }
    void LoadSides()
    {
        cout << "Loading up the Burger" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
    }
    void DrizzleSauces()
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::YumYum);
    }
};

class HotdogBuilder : public UpdatedSandwichBulilder
{
public:
    void AddBread()
    {
        cout << "Steaming up the buns" << endl;
        product.b = Bread::HotdogBun;
    }
    void AddProtein()
    {
        cout << "Boiling the hotdog into box" << endl;
        product.p = Protein::Dog;
    }
    void AddWrapper()
    {
        cout << "Loading up the Hotdog" << endl;
        product.w = Wrapper::Box;
    }
    void LoadSides()
    {
        cout << "Loading up the Hotdog" << endl;
        this->AddSide(Side::Onions);
    }
    void DrizzleSauces()
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::Ketchup);
        this->AddSauce(Sauce::Mustard);
    }
};

class BLTBuilder : public UpdatedSandwichBulilder
{
public:
    void AddBread()
    {
        cout << "Toasting bread in toaster" << endl;
        product.b = Bread::Toast;
    }
    void AddProtein()
    {
        cout << "Sizzling bacon in cast iron pan" << endl;
        product.p = Protein::Bacon;
    }
    void AddWrapper()
    {
        cout << "Wrapping up in a decompostable plastic wrap" << endl;
        product.w = Wrapper::Plastic;
    }
    void LoadSides()
    {
        cout << "Loading up the BLT" << endl;
        this->AddSide(Side::Lettuce);
        this->AddSide(Side::Tomato);
    }
    void DrizzleSauces()
    {
        cout << "Drizzling the sauces" << endl;
        this->AddSauce(Sauce::Mayo);
    }
};