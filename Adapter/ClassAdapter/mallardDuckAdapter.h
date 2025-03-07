#pragma once
#include "duck.h"
#include "turkey.h"
#include "mallardDuck.h"
#include <random>
#include <ctime>

class MallardDuckAdapter : public Turkey, private MallardDuck
{
public:
    MallardDuckAdapter() = default;
    void gobble() override
    {
        MallardDuck::quack();
    }
    void fly() override
    {
        if (dist(randGen) == 0) // Corrected function call
            MallardDuck::fly();
    }

private:
    std::mt19937 randGen;                    // Mersenne Twister RNG
    std::uniform_int_distribution<int> dist; // Uniform distribution
};