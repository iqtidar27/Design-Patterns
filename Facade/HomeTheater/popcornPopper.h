#pragma once
#include <iostream>
#include <string>
using namespace std;

class PopcornPopper
{
public:
    PopcornPopper(const string &des) : description(des) {}
    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void pop()
    {
        cout << description << " popping popcorn" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
};