#pragma once

#include <string>
#include "../lib/database.h"
#include "../lib/email.h"
#include "../lib/log.h"
#include "../lib/slack.h"
#include "../lib/user.h"
using namespace std;

class UserManagement
{
public:
    explicit UserManagement(Database &user_database) : database_{user_database} {}

    void RegisterNewUser(string_view name, string_view password, string_view email)
    {
        User a_user = database_.create_user(name, password, email);

        PostSlackMessage("sales", name.data() + string(" has registered with email ") + email.data());
        Log(string("User registered with email address ") + email.data());
        sendEmail(a_user.name_, a_user.email_, "Welcome", "Thanks for registering, " + a_user.name_);
    }

    void PasswordForgotten(string_view email) const
    {
        const auto found_the_user = database_.FindUser(email);
        if (found_the_user.has_value())
        {
            User the_user = found_the_user.value();
            the_user.reset_code_ = "1111";

            sendEmail(the_user.name_, the_user.email_, "Reset your password", "To reset your password, use this secure code: " + the_user.reset_code_);
            Log("User with email address " + the_user.email_ + " requested a password reset");
        }
    }

private:
    Database &database_;
};