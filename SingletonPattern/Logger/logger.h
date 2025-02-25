#pragma once
#include <iostream>

using namespace std;

class Logger
{
public:
    static Logger *getLogger();
    void Log(string msg);

private:
    static int counter;
    Logger();
    static Logger *loggerInstance;
};
