#pragma once

// Strategy Interface
class IFlyBehavior
{
public:
    virtual ~IFlyBehavior() = default;
    IFlyBehavior(const IFlyBehavior &) = delete;
    IFlyBehavior(IFlyBehavior &&) = delete;
    IFlyBehavior &operator=(const IFlyBehavior &) = delete;
    IFlyBehavior &operator=(IFlyBehavior &&) = delete;

    virtual void fly() const = 0;

protected:
    IFlyBehavior() = default;
};