#pragma once
#include "duck.h"
#include "flyWithWings.h"
#include "quack.h"
#include <iostream>
#include <memory>

using namespace std;

class MallardDuck : public Duck
{
public:
    MallardDuck()
    {
        m_flyBehavior = new FlyWithWings();
        m_quackBehavior = new Quack();
    }

    ~MallardDuck() override = default;
    MallardDuck(const MallardDuck &) = delete;

    void display() const override
    {
        cout << "I am a mallard Duck!!" << endl;
    }
};