#pragma once
#include "turkey.h"
#include "duck.h"
#include <iostream>
using namespace std;

class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey *tur) : turkey(tur) {}

    void quack() override
    {
        turkey->gooble();
    }
    void fly() override
    {
        for (int i = 0; i < 5; i++)
        {
            turkey->fly();
        }
    }

private:
    Turkey *turkey;
};