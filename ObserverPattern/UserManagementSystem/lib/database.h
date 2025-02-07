#pragma once
#include <optional>
#include <vector>
#include "user.h"

using namespace std;

class Database
{
public:
    Database() = default;

    User create_user(string_view name, string_view password, string_view email)
    {
        User new_user{name, password, email};
        users_.push_back(new_user);
        return new_user;
    }

    [[nodiscard]] std::optional<User> FindUser(string_view email) const
    {
        for (auto user : users_)
        {
            if (user.email_ == email)
            {
                return user;
            }
        }
        return std::nullopt;
    }

    vector<User> users_;
};