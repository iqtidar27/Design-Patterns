#pragma once
#include "sandwichBuilder.h"

class BurgerBuilder : public SandwichBuilder
{
public:
    void AddBread()
    {
        cout << "Heating up the Seasame Sprinked Bun" << endl;
        product.b = Bread::BurgerBun;
    }
    void AddProtein()
    {
        cout << "Grilling the Wagyu" << endl;
        product.p = Protein::BeefPatty;
    }
    void AddWrapper()
    {
        cout << "Wrapping with 100% recycled paper" << endl;
        product.w = Wrapper::Paper;
    }
};

class HotdogBuilder : public SandwichBuilder
{
public:
    void AddBread()
    {
        cout << "Steaming up the buns" << endl;
        product.b = Bread ::HotdogBun;
    }
    void AddProtein()
    {
        cout << "Boiling the hotdog in brine" << endl;
        product.p = Protein::Dog;
    }
    void AddWrapper()
    {
        cout << "Placing hotdog into box" << endl;
        product.w = Wrapper::Box;
    }
};

class BLTBuilder : public SandwichBuilder
{
public:
    void AddBread()
    {
        cout << "Toasting bread in the toaster" << endl;
        product.b = Bread::Toast;
    }
    void AddProtein()
    {
        cout << "Sizzling bacon in cast iron path" << endl;
        product.p = Protein::Bacon;
    }
    void AddWrapper()
    {
        cout << "Wrapping up in a decompostable plastic wrap" << endl;
        product.w = Wrapper::Plastic;
    }
};