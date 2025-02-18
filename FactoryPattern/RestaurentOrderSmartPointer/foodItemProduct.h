#pragma once
#include <iostream>
#include <memory>
#include <unordered_map>
using namespace std;

// Enum for food types
enum class FoodType
{
    PIZZA,
    PASTA
};

// Abstract Product
class FoodItem
{
public:
    virtual void prepare() const = 0;
    virtual ~FoodItem() = default;
};

// Concrete Products
class CheesePizza : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Cheese Pizza" << endl;
    }
};

class Pepperoni : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Pepperoni Pizza" << endl;
    }
};

class Spaghetti : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Spaghetti" << endl;
    }
};