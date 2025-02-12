#pragma once

#include "iFly.h"
#include "iQuack.h"
#include <iostream>
#include <memory>
using namespace std;

// Context class
class Duck
{
public:
    virtual ~Duck() = default;
    Duck(const Duck &) = delete;
    Duck(Duck &&other) noexcept : m_flyBehavior(move(other.m_flyBehavior)), m_quackBehavior(move(other.m_quackBehavior)) {}

    Duck &operator=(const Duck &) = delete;

    Duck &operator=(Duck &&other) noexcept
    {
        if (this != &other)
        {
            m_flyBehavior = move(other.m_flyBehavior);
            m_quackBehavior = move(other.m_quackBehavior);
        }
        return *this;
    }

    void swim() const
    {
        cout << "I am swimming" << endl;
    }

    void performFly()
    {
        if (m_flyBehavior)
        {
            m_flyBehavior->fly();
        }
        else
        {
            cerr << "Fly behavior not set" << endl;
        }
    }

    void performQuack()
    {
        if (m_quackBehavior)
        {
            m_quackBehavior->quack();
        }
        else
        {
            cerr << "Quack behavior not set" << endl;
        }
    }

    void setFlyBehavior(unique_ptr<IFlyBehavior> flyBehavior)
    {
        m_flyBehavior = move(flyBehavior);
    }

    void setQuackBehavior(unique_ptr<IQuackBehavior> quackBehavior)
    {
        m_quackBehavior = move(quackBehavior);
    }

    virtual void display() const = 0;

protected:
    Duck() = default;
    unique_ptr<IFlyBehavior> m_flyBehavior;
    unique_ptr<IQuackBehavior> m_quackBehavior;
};