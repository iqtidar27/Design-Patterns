#pragma once
#include "duck.h"
#include "turkey.h"
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class DuckAdapter : public Turkey
{
public:
    DuckAdapter(Duck *du) : duck(du), randGen(std::random_device{}()), dist(0, 4) {}

    void gooble() override
    {
        duck->quack();
    }

    void fly() override
    {
        if (dist(randGen) == 0) // Corrected function call
            duck->fly();
    }

private:
    Duck *duck;
    std::mt19937 randGen;                    // Mersenne Twister RNG
    std::uniform_int_distribution<int> dist; // Uniform distribution
};
