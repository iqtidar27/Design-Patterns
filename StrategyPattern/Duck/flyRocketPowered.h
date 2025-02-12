#pragma once
#include "iFly.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class FlyRocketPowered : public IFlyBehavior
{
public:
    FlyRocketPowered() = default;
    FlyRocketPowered(const FlyRocketPowered &) = delete;
    FlyRocketPowered(FlyRocketPowered &&) = delete;
    FlyRocketPowered &operator=(const FlyRocketPowered &) = delete;
    FlyRocketPowered &operator=(FlyRocketPowered &&) = delete;
    ~FlyRocketPowered() override = default;

    void fly() override
    {
        cout << "I am flying using a rocket!!" << endl;
    }
};