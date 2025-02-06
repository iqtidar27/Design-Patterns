#pragma once
#include <string>
using namespace std;

// Abstract class or Interface
class IObserver
{
public:
    virtual ~IObserver() = default;
    virtual void update(const string &newMessage) = 0;
};