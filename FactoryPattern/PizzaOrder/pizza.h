#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pizza
{
public:
    Pizza() = default;
    virtual ~Pizza() = default;

    virtual void prepare() const;

    virtual void bake() const
    {
        cout << "Bake for 25 minutes at 350" << endl;
    }

    virtual void cut() const
    {
        cout << "Cutting the pizza into diagonal slices" << endl;
    }

    virtual void box() const
    {
        cout << "Place pizza in official PizzaStore box" << endl;
    }

protected:
    string name{};
    string dough{};
    string sauce{};
    vector<string> toppings{};
};

inline void Pizza ::prepare() const
{
    cout << "Preparing " + name << endl;
    cout << "\nTossing dough...\n";
    cout << "Adding sauce...\n";
    cout << "Adding toppings...\n";
    for (const auto &topping : toppings)
    {
        cout << " " + topping << endl;
    }
}