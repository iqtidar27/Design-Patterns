#pragma once
#include "../lib/user.h"
#include <functional>
#include <map>
#include <string>
#include <vector>

class EventSystem
{
public:
    void Subscribe(string_view event_type, const function<void(const User &)> &function)
    {
        subscribers_[event_type.data()].push_back(function);
    }

    void PostEvent(string_view event_type, const User &a_user)
    {
        for (const auto &fn : subscribers_[event_type.data()])
        {
            fn(a_user);
        }
    }

    [[maybe_unused]] void ListSubscribers()
    {
        for (const auto &[event, fun] : subscribers_)
        {
            cout << "EventSyste type: " + event + " subscribers " + to_string(subscribers_[event].size());
        }
    }

private:
    map<string, vector<function<void(const User &)>>> subscribers_;
};