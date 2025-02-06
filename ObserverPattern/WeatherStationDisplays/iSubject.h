#pragma once

#include "iObserver.h"

class ISubject
{
public:
    virtual ~ISubject() = default;

    virtual void registerObserver(IObserver *observer) = 0;
    virtual void unregisterObserver(IObserver *observer) = 0;
    virtual void notifyObservers() = 0;
};