#include "groupChat.h"

void GroupChat::subscribe(IObserver *observer)
{
    observers_.push_back(observer);
}

void GroupChat::unsubscribe(IObserver *observer)
{
    auto it = find(observers_.begin(), observers_.end(), observer);
    if (it != observers_.end())
    {
        observers_.erase(it);
    }
}
void GroupChat::notify()
{
    for (auto &observer : observers_)
    {
        observer->update(messages.back());
    }
}

void GroupChat::sendMessage(const string &msg)
{
    messages.push_back(msg);
    notify();
}
