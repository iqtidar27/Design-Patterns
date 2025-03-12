#pragma once
#include "amplifier.h"
#include "tuner.h"
#include "streamingPlayer.h"
#include "cdPlayer.h"
#include "projector.h"
#include "theaterLights.h"
#include "screen.h"
#include "popcornPopper.h"
#include <iostream>
#include <string>

using namespace std;

class HomeTheaterFacade
{
public:
    HomeTheaterFacade(Amplifier *amp, Tuner *tun, StreamingPlayer *stream, Projector *proj, Screen *sc, TheaterLights *theater, PopcornPopper *corn) : amplifier(amp), tuner(tun), streamingPlayer(stream), projector(proj), screen(sc), lights(theater), popcorn(corn) {}

    void watchMovie(const string &movie)
    {
        cout << "Get ready to watch a movie ..." << endl;
        popcorn->on();
        popcorn->pop();
        lights->dim(10);
        screen->down();
        projector->on();
        projector->wideScreenMode();
        amplifier->on();
        amplifier->setStreamingPlayer(streamingPlayer);
        amplifier->setSurroundSound();
        amplifier->setVolume(5);
        streamingPlayer->on();
        streamingPlayer->play(movie);
    }

    void endMovie()
    {
        cout << "Shutting movie theater down ..." << endl;
        popcorn->off();
        lights->on();
        screen->up();
        projector->off();
        amplifier->off();
        streamingPlayer->stop();
        streamingPlayer->off();
    }
    void ListenToRadio(double frequency)
    {
        cout << "Tuning in the airwaves ..." << endl;
        tuner->on();
        tuner->setFrequency(frequency);
        amplifier->on();
        amplifier->setVolume(5);
        amplifier->setTuner(tuner);
    }
    void endRadio()
    {
        cout << "Shutting down the tuner ..." << endl;
        tuner->off();
        amplifier->off();
    }

private:
    Amplifier *amplifier;
    Tuner *tuner;
    StreamingPlayer *streamingPlayer;
    CDPlayer *cdPlayer;
    Projector *projector;
    Screen *screen;
    TheaterLights *lights;
    PopcornPopper *popcorn;
};