#pragma once

// Strategy Interface
class IQuackBehavior
{
public:
    virtual ~IQuackBehavior() = default;
    IQuackBehavior(const IQuackBehavior &) = default;
    IQuackBehavior(IQuackBehavior &&) = delete;
    IQuackBehavior &operator=(const IQuackBehavior &) = delete;
    IQuackBehavior &operator=(IQuackBehavior &&) = delete;

    virtual void quack() const = 0;

protected:
    IQuackBehavior() = default;
};