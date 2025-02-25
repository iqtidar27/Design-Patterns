#include "logger.h"

int Logger::counter = 0;
Logger *Logger::loggerInstance = nullptr;

Logger ::Logger()
{
    counter++;
    cout << "New instance of Logger created. Number of instances created: " << counter << endl;
}

void Logger ::Log(string msg)
{
    cout << msg << endl;
}

Logger *Logger ::getLogger()
{
    if (loggerInstance == nullptr)
    {
        loggerInstance = new Logger();
    }
    return loggerInstance;
}