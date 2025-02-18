#pragma once
#include <iostream>
#include <memory>
using namespace std;

// Abstract Product
class FoodItem
{
public:
    virtual void prepare() const = 0;
    virtual ~FoodItem() = default;
};

// Concrete Product (Pizza)
class CheesePizza : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Cheese Pizza!!" << endl;
    }
};

// Concrete Product (Pizza)
class PepperoniPizza : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Pepperoni Pizza!!" << endl;
    }
};

// Concrete Product (Pasta)
class Spaghetti : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparing Spaghetti pasta!!" << endl;
    }
};

// // Concrete Product (Pasta)
class PennePasta : public FoodItem
{
public:
    void prepare() const override
    {
        cout << "Preparng Penne Pasta!!" << endl;
    }
};