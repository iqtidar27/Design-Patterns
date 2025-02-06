// Observer.cpp
#include <iostream>
#include <list>
using namespace std;

// Interface / Abstract class
class Observer
{
public:
    virtual ~Observer() = default;
    virtual void notify() const = 0;
};

// Actual Subject
class Subject
{
public:
    void registerObserver(Observer *observer)
    {
        observers_.push_back(observer);
    }

    void unregisterObserver(Observer *observer)
    {
        observers_.remove(observer);
    }

    void notifyObservers() const
    {
        for (auto &observer : observers_)
        {
            observer->notify();
        }
    }

private:
    list<Observer *> observers_;
};

class ConcreteObserverA : public Observer
{
public:
    ConcreteObserverA(Subject &subject) : subject_(subject)
    {
        subject_.registerObserver(this);
    }

    void notify() const override
    {
        cout << "--ConcreteObserverA is fully notified\n";
    }

private:
    Subject &subject_;
};

class ConcreteObserverB : public Observer
{
public:
    ConcreteObserverB(Subject &subject) : subject_(subject)
    {
        subject_.registerObserver(this);
    }

    void notify() const override
    {
        cout << "--ConcreteObserverB is fully notified\n";
    }

private:
    Subject &subject_;
};

/*
We have not used any memory allocation in this driver function. This is how virtuality is typically
used if you aren’t allowed to allocate memory, such as in deeply embedded systems.
*/
// int main()
// {
//     Subject subject;
//     ConcreteObserverA observerA(subject);
//     ConcreteObserverB observerB(subject);
//     subject.notifyObservers();

//     cout << "\t subject.unregisterObserver(observerB)\n";
//     subject.unregisterObserver(&observerB);
//     cout << "Current subcribed observers are:\n";
//     subject.notifyObservers();
// }

/*
If we want to allocate memory, our driver file should be like the following
*/
int main()
{
    Subject *subject = new Subject;
    ConcreteObserverA *observerA = new ConcreteObserverA(*subject);
    ConcreteObserverB *observerB = new ConcreteObserverB(*subject);

    subject->notifyObservers();
    cout << "\t subject.unregisterObserver(observerB)\n";
    subject->unregisterObserver(observerB);
    cout << "Current subcribed observers are:\n";
    subject->notifyObservers();

    delete observerA;
    delete observerB;
    delete subject;

    std::cout << '\n';
}