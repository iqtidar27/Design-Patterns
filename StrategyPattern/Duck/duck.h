#pragma once
#include "iFly.h"
#include "iQuack.h"
#include <iostream>
using namespace std;

class Duck
{
public:
    virtual ~Duck() = default;
    Duck(const Duck &) = delete;
    Duck(Duck &&other) noexcept : m_flyBehavior(other.m_flyBehavior), m_quackBehavior(other.m_quackBehavior) {}
    Duck &operator=(const Duck &) = delete;
    Duck &operator=(Duck &&other) noexcept
    {
        if (this != &other)
        {
            m_flyBehavior = other.m_flyBehavior;
            m_quackBehavior = other.m_quackBehavior;
        }
        return *this;
    }

    void swim() const
    {
        cout << "I am swimming" << endl;
    }

    virtual void display() const = 0;

    void performQuack()
    {
        m_quackBehavior->quack();
    }

    void performFly()
    {
        m_flyBehavior->fly();
    }

    void setFlyBehavior(IFlyBehavior *flyBehavior)
    {
        m_flyBehavior = flyBehavior;
    }

    void setQuackBehavior(IQuackBehavior *quackBehavior)
    {
        m_quackBehavior = quackBehavior;
    }

protected:
    Duck() = default;
    IFlyBehavior *m_flyBehavior;
    IQuackBehavior *m_quackBehavior;
};