#pragma once
#include "iFly.h"
#include <iostream>
using namespace std;

// Concrete Strategy Implementation
class FlyRocketPowered : public IFlyBehavior
{

public:
    FlyRocketPowered() = default;
    ~FlyRocketPowered() override = default;

    FlyRocketPowered(const FlyRocketPowered &) = delete;
    FlyRocketPowered(FlyRocketPowered &&) = delete;
    FlyRocketPowered &operator=(const FlyRocketPowered &) = delete;
    FlyRocketPowered &operator=(FlyRocketPowered &&) = delete;

    void fly() const override
    {
        cout << "I am flying using a fly." << endl;
    }
};