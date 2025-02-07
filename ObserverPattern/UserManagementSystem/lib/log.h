#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <sstream>
using namespace std;

// Function to get the current time as a formatted string
std::string GetCurrentTime()
{
    auto now = std::chrono::system_clock::now();
    auto timeT = std::chrono::system_clock::to_time_t(now);
    std::tm tm = *std::localtime(&timeT);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
    return oss.str();
}

void Log(std::string_view message)
{
    std::cout << "[" << GetCurrentTime() << "] [Log]: " << message << std::endl;
}