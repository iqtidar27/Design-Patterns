#pragma once
#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy Implementation
class MuteQuack : public IQuackBehavior
{
public:
    MuteQuack() = default;
    virtual ~MuteQuack() override = default;
    MuteQuack(const MuteQuack &) = delete;
    MuteQuack(MuteQuack &&) = delete;
    MuteQuack &operator=(const MuteQuack &) = delete;
    MuteQuack &operator=(MuteQuack &&) = delete;

    void quack() const override
    {
        cout << "I say nothing!!" << endl;
    }
};