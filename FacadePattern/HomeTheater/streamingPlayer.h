#pragma once
#include <string>
#include <string_view>
#include <iostream>
using namespace std;

class Amplifier;
class StreamingPlayer
{
public:
    StreamingPlayer(const string &des, Amplifier *amp) : description(des), amplifier(amp) {}

    void on()
    {
        cout << description << " on" << endl;
    }
    void off()
    {
        cout << description << " off" << endl;
    }
    void play(const string &m)
    {
        movie = m;
        currentChapter = 0;
        std::cout << description + " playing \"" + movie + "\"" << endl;
    }
    void play(int chapter)
    {
        if (!movie.empty())
        {
            std::cout << description + " can't play chapter " << chapter << " no movie selected" << endl;
        }
        else
        {
            currentChapter = chapter;
            std::cout << description + " playing chapter " << currentChapter << " of \"" + movie + "\"" << endl;
        }
    }
    void stop()
    {
        currentChapter = 0;
        cout << description << " stopped \"" << movie << "\"" << endl;
    }
    void pause()
    {
        cout << description + " paused \"" + movie + "\"" << endl;
    }
    void setTwoChannelAudio()
    {
        cout << description << " set two channel audio" << endl;
    }
    void setSurroungAudio()
    {
        cout << description << " set surround audio" << endl;
    }
    string toString()
    {
        return description;
    }

private:
    string description;
    int currentChapter;
    Amplifier *amplifier;
    string movie;
};