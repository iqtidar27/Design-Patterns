#include <iostream>
#include <string>
#include "groupChat.cpp"
#include "Friends.cpp"
using namespace std;

int main()
{
    GroupChat chat;

    Friends friend1("Alice");
    Friends friend2("Bob");
    Friends friend3("Charlie");

    chat.subscribe(&friend1);
    chat.subscribe(&friend2);
    chat.subscribe(&friend3);

    chat.sendMessage("Hey Everyone, let's plan our trip!");
}