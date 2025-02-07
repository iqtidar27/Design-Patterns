#pragma once
#include <iostream>
#include <string>

void PostSlackMessage(std::string_view channel, std::string_view message)
{
    std::cout << "[SlackBot " << channel << "]: " << message << std::endl;
}
