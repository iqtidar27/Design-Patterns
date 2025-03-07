#include "amplifier.h"
#include "cdPlayer.h"
#include "popcornPopper.h"
#include "projector.h"
#include "screen.h"
#include "streamingPlayer.h"
#include "theaterLights.h"
#include "homeTheaterFacade.h"
#include "tuner.h"

int main()
{
    auto amp = new Amplifier("Amplifier");
    auto tuner = new Tuner("AM/FM Tuner", amp);
    auto player = new StreamingPlayer("Streaming Player", amp);
    [[maybe_unused]] auto cd = new CDPlayer("CD Player", amp);
    auto projector = new Projector("Projector", player);
    auto lights = new TheaterLights("Theater Ceiling Lights");
    auto screen = new Screen("Theater Screen");
    auto popper = new PopcornPopper("Popcorn Popper");

    auto homeTheater = new HomeTheaterFacade(amp, tuner, player, projector, screen, lights, popper);

    homeTheater->watchMovie("Children of Men");
    cout << endl
         << endl;
    homeTheater->endMovie();
}