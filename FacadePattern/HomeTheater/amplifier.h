#pragma once
#include <iostream>
#include <string>
#include "tuner.h"
#include "streamingPlayer.h"
using namespace std;

class Amplifier
{
public:
    Amplifier(const string &d) : description(d), tuner(nullptr), player(nullptr) {}

    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void setStereoSound()
    {
        cout << description << " stereo mode on" << endl;
    }
    void setSurroundSound()
    {
        cout << description << " surround sound on (5 speakers, 1 subwoofer)" << endl;
    }
    void setVolume(int level)
    {
        cout << description << " setting volume to " << level << endl;
    }
    void setTuner(Tuner *t)
    {
        tuner = t;
        cout << description << " setting tuner to " << (tuner ? tuner->toString() : "None") << endl;
    }
    void setStreamingPlayer(StreamingPlayer *p)
    {
        player = p;
        cout << description << " setting Streaming player to " << (player ? player->toString() : "None") << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
    Tuner *tuner;
    StreamingPlayer *player;
};
