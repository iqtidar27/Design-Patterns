#pragma once

#include "duck.h"
#include "flyWithWings.h"
#include "quack.h"
#include <iostream>
#include <memory>
using namespace std;

// Different Subclass of Context
class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        m_quackBehavior = make_unique<Quack>();
        m_flyBehavior = make_unique<FlyWithWings>();
    }
    ~MallardDuck() override = default;
    MallardDuck(const MallardDuck &) = delete;

    void display() const override
    {
        cout << "I am a mallard duck!" << endl;
    }
};