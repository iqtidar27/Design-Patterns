#pragma once

class IFlyBehavior
{
public:
    virtual ~IFlyBehavior() = default;
    virtual void fly() = 0;
};