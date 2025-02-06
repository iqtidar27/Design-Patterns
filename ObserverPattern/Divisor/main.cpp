#include <iostream>
#include <list>

using namespace std;

// Forward declaration of Subject
class Subject;

// Parent Observer
class Observer
{
private:
    Subject *model;
    int denominator;

public:
    Subject *getSubject()
    {
        return model;
    }
    int getDenominator()
    {
        return denominator;
    }

    virtual void notify() = 0;

    Observer(Subject *mod, int divisor);
};

// Concrete Subject or Publisher
class Subject
{
public:
    void setValue(int val)
    {
        value = val;
        notifyObservers();
    }
    int getValue()
    {
        return value;
    }
    void registerObserver(Observer *observer)
    {
        observers_.push_back(observer);
    }

    void unregisterObserver(Observer *observer)
    {
        observers_.remove(observer);
    }

    void notifyObservers()
    {
        for (auto &observer : observers_)
        {
            observer->notify();
        }
    }

private:
    list<Observer *> observers_;
    int value;
};

Observer::Observer(Subject *mod, int divisor)
{
    model = mod;
    denominator = divisor;
    // Now this is valid because Subject is fully defined
    model->registerObserver(this);
}

// Child Observer 1
class DivObserver : public Observer
{
public:
    DivObserver(Subject *mod, int divisor) : Observer(mod, divisor) {}

    void notify() override
    {
        int value = getSubject()->getValue();
        int d = getDenominator();
        cout << value << " division " << d << " is " << value / d << endl;
    }
};

class ModObserver : public Observer
{
public:
    ModObserver(Subject *mod, int divisor) : Observer(mod, divisor) {}

    void notify() override
    {
        int value = getSubject()->getValue();
        int d = getDenominator();
        cout << value << " mod " << d << " is " << value % d << endl;
    }
};

int main()
{
    Subject subject;
    DivObserver divObj1(&subject, 4);
    ModObserver modObj1(&subject, 3);
    subject.setValue(14);
}
