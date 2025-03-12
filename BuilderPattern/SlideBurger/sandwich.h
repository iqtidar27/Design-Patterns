#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Bread
{
    Toast,
    HotdogBun,
    BurgerBun
};
enum class Protein
{
    BeefPatty,
    Dog,
    Bacon
};
enum class Side
{
    Lettuce,
    Tomato,
    Onions,
    Cheese
};
enum class Sauce
{
    Mayo,
    Ketchup,
    YumYum,
    Mustard
};
enum class Wrapper
{
    Paper,
    Box,
    Plastic
};

class Sandwich
{

public:
    Sandwich() = default;

    Sandwich(Bread b, Protein p, vector<Side> sides, vector<Sauce> sauces, Wrapper w) : b{b}, p{p}, sides{sides}, sauces{sauces}, w{w}
    {
        cout << "A Sandwich is constructed" << endl;
    }

    Bread b;
    Protein p;
    vector<Side> sides;
    vector<Sauce> sauces;
    Wrapper w;
};
