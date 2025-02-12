#pragma once
#include "iFly.h"
#include <iostream>
using namespace std;

// Concrete Strategy Implementation
class FlyWithWings : public IFlyBehavior
{
public:
    FlyWithWings() = default;
    ~FlyWithWings() override = default;
    FlyWithWings(const FlyWithWings &) = delete;
    FlyWithWings(FlyWithWings &&) = delete;
    FlyWithWings &operator=(const FlyWithWings &) = delete;
    FlyWithWings &operator=(FlyWithWings &&) = delete;

    void fly() const override
    {
        cout << "I am flying with my wings!!" << endl;
    }
};