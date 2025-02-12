#pragma once
#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class Squeak : public IQuackBehavior
{
public:
    Squeak() = default;
    Squeak(const Squeak &) = delete;
    Squeak(Squeak &&) = delete;
    Squeak &operator=(const Squeak &) = delete;
    Squeak &operator=(const Squeak &&) = delete;
    ~Squeak() override = default;

    void quack() const override
    {
        cout << "I say Squeak." << endl;
    }
};