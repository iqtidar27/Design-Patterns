#pragma once
#include <iostream>
#include <string_view>
#include <vector>
using namespace std;

class Pizza
{
public:
    virtual ~Pizza() = default;

    virtual void prepare();

    virtual void bake() const
    {
        cout << "Bake for 25 minutes at 350" << endl;
    }
    virtual void cut() const
    {
        cout << "Cutting the pizza into diagonal slice" << endl;
    }
    virtual void box() const
    {
        cout << "Place pizza in official PizzaStore box" << endl;
    }

    void setName(string_view n)
    {
        name = n;
    }
    string getName() const
    {
        return name;
    }

protected:
    string name{};
    string dough{};
    string sauce{};
    vector<string> toppings{};
};

inline void
Pizza::prepare()
{
    std::cout << "Preparing " << name << '\n';
    std::cout << "Tossing dough...\n";
    std::cout << "Adding sauce...\n";
    std::cout << "Adding toppings: \n";
    for (const auto &topping : toppings)
        std::cout << "   " + topping << '\n';
}
