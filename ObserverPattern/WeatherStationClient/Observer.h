#ifndef OBSERVER_H
#define OBSERVER_H
/*
Interface for the Observer
Observer.h
*/

class Observer
{
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};
#endif // OBSERVER_H