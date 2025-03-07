#pragma once
#include "amplifier.h"
#include "tuner.h"
#include <iostream>
#include <string>
using namespace std;

class CDPlayer
{
public:
    CDPlayer(const string &des, Amplifier *amp) : description(des), amplifier(amp) {}

    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void eject()
    {
        title = nullptr;
        cout << description << " eject" << endl;
    }
    void play(const string &m)
    {
        title = m;
        currentTrack = 0;
        cout << description << " playing \"" << title << "\"" << endl;
    }
    void stop()
    {
        currentTrack = 0;
        cout << description << " stopped" << endl;
    }
    void pause()
    {
        cout << description << " paused \"" << title << "\"" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
    string title;
    int currentTrack = 0;
    Amplifier *amplifier = nullptr;
};