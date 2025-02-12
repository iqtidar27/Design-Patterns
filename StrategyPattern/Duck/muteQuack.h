#pragma once
#include "iQuack.h"
#include <iostream>
using namespace std;

// Concrete Strategy
class MuteQuack : public IQuackBehavior
{
public:
    MuteQuack() = default;
    MuteQuack(const MuteQuack &) = delete;
    MuteQuack(MuteQuack &&) = delete;
    MuteQuack &operator=(const MuteQuack &) = delete;
    MuteQuack &operator=(const MuteQuack &&) = delete;
    ~MuteQuack() override = default;

    void quack() const override
    {
        cout << "I say nothing <-->" << endl;
    }
};