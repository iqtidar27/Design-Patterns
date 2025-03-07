#pragma once
#include <iostream>
#include <string>
using namespace std;

class TheaterLights
{
public:
    TheaterLights(const string &des) : description(des) {}
    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void dim(int level)
    {
        cout << description << " dimming to " << level << " %" << endl;
    }

private:
    string description;
};