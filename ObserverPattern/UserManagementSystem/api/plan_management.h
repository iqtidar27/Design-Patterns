#pragma once

#include <string>
#include "../lib/database.h"
#include "../lib/email.h"
#include "../lib/log.h"
#include "../lib/slack.h"
#include "../lib/user.h"
using namespace std;

class PlanManagement
{
public:
    explicit PlanManagement(Database &user_database) : database_(user_database) {}

    void upgradePlan(string_view email) const
    {
        const auto found_the_user = database_.FindUser(email);
        if (found_the_user.has_value())
        {
            User the_user = found_the_user.value();
            the_user.plan_ = "paid";

            PostSlackMessage("sales", the_user.name_ + " has upgraded their plan.");
            sendEmail(the_user.name_, the_user.email_, "Thank you", "Thanks for upgrading, You're gonna love it.");
            Log("User with email address " + the_user.email_ + " has upgraded their plan");
        }
    }

private:
    Database &database_;
};