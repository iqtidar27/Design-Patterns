#pragma once
#include "turkey.h"
#include <iostream>
using namespace std;

class WildTurkey : public Turkey
{
public:
    void gobble() override
    {
        cout << "Gobble, Gobble" << endl;
    }
    void fly() override
    {
        cout << "I am flying a short distance" << endl;
    }
};