#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"

/*
Interface for the Subject
*/

class Subject
{
public:
    // Register an Observer
    virtual void registerObserver(Observer *observer) = 0;

    // Unregister an Observer
    virtual void unregisterObserver(Observer *observer) = 0;

    // Notify all the registered observers when a change happens
    virtual void notifyObservers() = 0;
};
#endif // SUBJECT_H