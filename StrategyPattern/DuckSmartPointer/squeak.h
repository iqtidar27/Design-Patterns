#pragma once

#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy Implementation
class Squack : public IQuackBehavior
{
public:
    Squack() = default;
    virtual ~Squack() override = default;

    Squack(const Squack &) = delete;
    Squack(Squack &&) = delete;
    Squack &operator=(const Squack &) = delete;
    Squack &operator=(Squack &&) = delete;

    void quack() const override
    {
        cout << "I say Squeak!!" << endl;
    }
};