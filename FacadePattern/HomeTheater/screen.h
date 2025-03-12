#pragma once
#include <iostream>
#include <string>
using namespace std;

class Screen
{
public:
    Screen(const string &des) : description(des) {}

    void up()
    {
        cout << description << " going up" << endl;
    }
    void down()
    {
        cout << description << " going down" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
};