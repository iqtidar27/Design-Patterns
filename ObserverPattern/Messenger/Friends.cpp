#include "Friends.h"

Friends ::Friends(const string &name) : name_(name) {}

void Friends ::update(const string &newMessage)
{
    cout << name_ << " received a message: " << newMessage << endl;
}