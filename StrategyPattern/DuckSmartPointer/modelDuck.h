#pragma once

#include "duck.h"
#include "flyNoWay.h"
#include "quack.h"
#include <iostream>
#include <memory>
using namespace std;

class ModelDuck : public Duck
{
public:
    ModelDuck()
    {
        m_flyBehavior = make_unique<FlyNoWay>();
        m_quackBehavior = make_unique<Quack>();
    }

    ~ModelDuck() override = default;

    void display() const override
    {
        cout << "I am a model duck!!" << endl;
    }
};