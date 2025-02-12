#pragma once
#include "iFly.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class FlyWithWings : public IFlyBehavior
{
public:
    FlyWithWings() = default;
    FlyWithWings(const FlyWithWings &) = delete;
    FlyWithWings(FlyWithWings &&) = delete;
    FlyWithWings &operator=(const FlyWithWings &) = delete;
    FlyWithWings &&operator=(const FlyWithWings &&) = delete;
    ~FlyWithWings() override = default;

    void fly() override
    {
        cout << "I am flying with my wings";
    }
};