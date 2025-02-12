#pragma once
#include "duck.h"
#include "flyNoWay.h"
#include "quack.h"
#include <iostream>
using namespace std;

class ModelDuck : public Duck
{
public:
    ModelDuck()
    {
        m_flyBehavior = new FlyNoWay();
        m_quackBehavior = new Quack();
    }

    ~ModelDuck() override = default;

    void display() const override
    {
        cout << "I am a model duck!!" << endl;
    }
};