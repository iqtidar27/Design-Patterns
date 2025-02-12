#pragma once
#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class Quack : public IQuackBehavior
{
public:
    Quack() = default;
    Quack(const Quack &) = delete;
    Quack(Quack &&) = delete;
    Quack &operator=(const Quack &) = delete;
    Quack &operator=(Quack &&) = delete;
    ~Quack() override = default;

    void quack() const override
    {
        cout << "I say Quack" << endl;
    }
};