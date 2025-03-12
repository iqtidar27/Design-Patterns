#pragma once
#include <iostream>
#include <string>
#include "amplifier.h"
using namespace std;

class Amplifier; // forward declaration

class Tuner
{
public:
    Tuner(const string &des, Amplifier *amp) : description(des), amplifier(amp), frequency(0.0) {}

    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void setFrequency(double f)
    {
        frequency = f;
        cout << description << " setting frequency to " << frequency << endl;
    }
    void setAm()
    {
        cout << description << " setting AM Mode" << endl;
    }
    void setFm()
    {
        cout << description << " setting FM Mode" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
    double frequency;
    Amplifier *amplifier; // Store as a pointer
};
