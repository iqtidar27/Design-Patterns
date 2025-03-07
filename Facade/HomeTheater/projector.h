#pragma once
#include <iostream>
#include <string>
#include "streamingPlayer.h"
using namespace std;

class Projector
{
public:
    Projector(const string &des, StreamingPlayer *stream) : description(des), streamingPlayer(stream) {}
    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void wideScreenMode()
    {
        cout << description << " in widescreen mode (16x9 aspect ratio)" << endl;
    }
    void tvMode()
    {
        cout << description << " in tv mode (4x3 aspect ratio)" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
    StreamingPlayer *streamingPlayer;
};