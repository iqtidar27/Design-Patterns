#pragma once
#include "event_system.h"
#include "../lib/log.h"

void HandleUserRegisteredEventLog(const User &user)
{
    Log("User has registered with email address " + user.email_);
}

void HandleUserPasswordForgottenEventLog(const User &user)
{
    Log("User with email address " + user.email_ + " requested a password reset.");
}

void HandleUserUpgradePlanEventLog(const User &user)
{
    Log("User with email address " + user.email_ + " has upgraded their plan");
}

void SetupLogEventHandlers(EventSystem &event_system)
{
    event_system.Subscribe("user_registered", HandleUserRegisteredEventLog);
    event_system.Subscribe("user_password_forgotten", HandleUserPasswordForgottenEventLog);
    event_system.Subscribe("user_upgrade_plan", HandleUserUpgradePlanEventLog);
}