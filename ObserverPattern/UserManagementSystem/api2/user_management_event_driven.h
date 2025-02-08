#pragma once

#include "../lib/database.h"
#include "../lib/user.h"
#include "event_system.h"

class UserManagementEventDriven
{
public:
    explicit UserManagementEventDriven(Database &user_database, EventSystem &event_system) : database_(user_database), event_system_(event_system) {}

    void RegisterNewUser(string_view name, string_view password, string_view email)
    {
        User a_user = database_.create_user(name, password, email);

        event_system_.PostEvent("user_registered", a_user);
    }

    void PasswordForgotten(string_view email) const
    {
        const auto found_the_user = database_.FindUser(email);
        if (found_the_user.has_value())
        {
            User the_user = found_the_user.value();
            the_user.reset_code_ = "1111";
            event_system_.PostEvent("user_password_forgotten", the_user);
        }
    }

private:
    Database &database_;
    EventSystem &event_system_;
};