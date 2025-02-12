#pragma once
#include "iFly.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class FlyNoWay : public IFlyBehavior
{
public:
    FlyNoWay() = default;
    FlyNoWay(const FlyNoWay &) = delete;
    FlyNoWay(FlyNoWay &&) = delete;
    FlyNoWay &operator=(const FlyNoWay &) = delete;
    FlyNoWay &operator=(FlyNoWay &&) = delete;
    ~FlyNoWay() override = default;

    void fly() override
    {
        cout << "I cannot fly!" << endl;
    }
};