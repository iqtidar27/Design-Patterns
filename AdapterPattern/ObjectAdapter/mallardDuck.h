#pragma once
#include "duck.h"
#include <iostream>
using namespace std;

class MallardDuck : public Duck
{
public:
    void quack() override
    {
        cout << "Quack" << endl;
    }
    void fly() override
    {
        cout << "I am flying" << endl;
    }
};