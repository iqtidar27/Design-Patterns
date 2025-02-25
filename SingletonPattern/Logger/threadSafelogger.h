#pragma once
#include <iostream>
#include <mutex>

using namespace std;

class Logger
{
public:
    static Logger *getLogger();
    void Log(string msg);
    // Deleting assignment and copy constructor
    Logger(const Logger &) = delete;
    Logger operator=(const Logger &) = delete;

private:
    static int counter;
    static mutex mtx;
    // Private Constructor
    Logger();
    static Logger *loggerInstance;
};
