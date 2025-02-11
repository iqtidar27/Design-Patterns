#include <iostream>
#include <memory>
#include <utility>

// Interface or Abstract Class
class Strategy
{
public:
    virtual void execute() = 0;
    virtual ~Strategy() = default;
};

// Context holds a Concrete strategy that is encapsulated in an object
class Context
{
public:
    void setStrategy(Strategy *s)
    {
        strat = s;
    }

    void strategy()
    {
        if (strat)
        {
            strat->execute();
        }
    }

private:
    Strategy *strat;
};

// Concrete Strategy1
class Strategy1 : public Strategy
{
public:
    void execute() { std::cout << "Strategy1 executed\n"; }
};
// Concrete Strategy2
class Strategy2 : public Strategy
{
public:
    void execute() { std::cout << "Strategy2 executed\n"; }
};
// Concrete Strategy3
class Strategy3 : public Strategy
{
public:
    void execute() { std::cout << "Strategy3 executed\n"; }
};

int main()
{
    Context k;

    k.setStrategy(new Strategy1());
    k.strategy();

    k.setStrategy(new Strategy2());
    k.strategy();

    k.setStrategy(new Strategy3());
    k.strategy();
}