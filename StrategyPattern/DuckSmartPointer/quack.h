#pragma once

#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy Implementation
class Quack : public IQuackBehavior
{
public:
    Quack() = default;
    virtual ~Quack() override = default;
    Quack(const Quack &) = delete;
    Quack(Quack &&) = delete;
    Quack &operator=(const Quack &) = delete;
    Quack &operator=(Quack &&) = delete;

    void quack() const override
    {
        cout << "I say Quack!!" << endl;
    }
};