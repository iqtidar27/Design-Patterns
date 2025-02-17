#pragma once
#include "beverage.h"

// Decorate interface or base class
class ICondimentDecorator : public Beverage
{
public:
    ICondimentDecorator(Beverage *beverage) : beverage_(beverage) {}

    virtual ~ICondimentDecorator() = default;
    virtual string getComponentDescription() const = 0;

protected:
    Beverage *beverage_;
};