#pragma once
#include "turkey.h"
#include <iostream>
using namespace std;

class WildTurkey : public Turkey
{
public:
    void gooble() override
    {
        cout << "Googble, gooble" << endl;
    }
    void fly() override
    {
        cout << "I am flying a short distance" << endl;
    }
};