#include <string>
#include <iostream>

using namespace std;

class Alaram
{
public:
    void alarmOn()
    {
        cout << "Alarm is on and house is secured" << endl;
    }
    void alarmOff()
    {
        cout << "Alarm is off and you can go into the house" << endl;
    }
};

class AirConditioner
{
public:
    void acOn()
    {
        cout << "Ac is on" << endl;
    }
    void acOff()
    {
        cout << "Ac is off" << endl;
    }
};

class TV
{
public:
    void tvOn()
    {
        cout << "Tv is on" << endl;
    }
    void tvOff()
    {
        cout << "Tv is off" << endl;
    }
};

class HouseFacade
{
private:
    Alaram alarm;
    AirConditioner ac;
    TV tv;

public:
    HouseFacade() {}

    void goToWork()
    {
        ac.acOff();
        tv.tvOff();
        alarm.alarmOn();
    }

    void comeHome()
    {
        alarm.alarmOff();
        ac.acOn();
        tv.tvOn();
    }
};

int main()
{
    HouseFacade hf;

    // Rather than calling 100 different on and off functions thanks to facade we only have 2 functions...
    cout << "Going to work:" << endl;
    hf.goToWork();
    cout << "\nJust got home:" << endl;
    hf.comeHome();
}