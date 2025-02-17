#pragma once
#include "beverage.h"
#include <memory>

// Decorator base class
class ICondimentDecorator : public Beverage
{
public:
    ICondimentDecorator(shared_ptr<Beverage> beverage) : m_beverage(move(beverage)) {}
    virtual ~ICondimentDecorator() = default;
    virtual string getDescription() const = 0;

protected:
    shared_ptr<Beverage> m_beverage;
};