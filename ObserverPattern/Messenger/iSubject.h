#pragma once
#include "iObserver.h"

// Abstract Subject Or Interface
class ISubject
{
public:
    virtual ~ISubject() = default;
    virtual void subscribe(IObserver *observer) = 0;
    virtual void unsubscribe(IObserver *observer) = 0;
    virtual void notify() = 0;
};