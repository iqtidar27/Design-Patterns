#pragma once

#include "../lib/user.h"
#include "../lib/database.h"
#include "event_system.h"

class PlanManagementEventDriven
{
public:
    explicit PlanManagementEventDriven(Database &user_database, EventSystem &event_system) : database_(user_database), event_system_(event_system)
    {
    }

    void upgradePlan(string_view email) const
    {
        const auto found_the_user = database_.FindUser(email);
        if (found_the_user.has_value())
        {
            User the_user = found_the_user.value();
            the_user.plan_ = "paid";

            event_system_.PostEvent("user_upgrade_plan", the_user);
        }
    }

private:
    Database &database_;
    EventSystem &event_system_;
};