#pragma once
#include <memory>
using namespace std;

namespace ws
{
    class IObserver;

    class ISubject
    {
    public:
        virtual ~ISubject() = default;

        virtual void registerObserver(shared_ptr<IObserver> observer) = 0;
        virtual void unregisterObserver(shared_ptr<IObserver> observer) = 0;
        virtual void notifyObservers() = 0;
    };
} // namespace ws