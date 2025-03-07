#pragma once
#include "duck.h"
#include "wildTurkey.h"
#include <iostream>
using namespace std;

class WildTurkeyAdapter : public Duck, private WildTurkey
{
public:
    WildTurkeyAdapter() = default;
    void quack() override
    {
        WildTurkey::gobble();
    }
    void fly() override
    {
        for (int i = 0; i < 5; i++)
        {
            WildTurkey::fly();
        }
    }
};