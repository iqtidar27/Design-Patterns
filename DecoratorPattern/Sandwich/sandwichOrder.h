#pragma once
#include <string>
#include <iostream>
using namespace std;

class SandwichOrder // Component
{
public:
    virtual int GetCost() const = 0;
    virtual string GetIngredient() const = 0;
};