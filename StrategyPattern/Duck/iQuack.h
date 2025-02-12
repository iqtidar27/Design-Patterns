#pragma once

// Interface Or Abstract class
class IQuackBehavior
{
public:
    virtual ~IQuackBehavior() = default;
    virtual void quack() const = 0;
};