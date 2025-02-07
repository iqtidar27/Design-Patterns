#pragma once
#include "../lib/email.h"
#include "event_system.h"

void HandleUserRegisteredEventEmail(const User &user)
{
    sendEmail(user.name_, user.email_, "Welcome", "Thanks for registering, " + user.name_ + "!");
}

void HandleUserPasswordForgottenEventEmail(const User &user)
{
    sendEmail(user.name_, user.email_, "Reset your password", "To reset your password, use this secure code: " + user.reset_code_ + ".");
}

void HandleUserUpgradePlanEventEmail(const User &user)
{
    sendEmail(user.name_, user.email_, "Thank you", "Thanks for upgrading, " + user.name_ + " ! You are gonna love it.");
}

void SetupEmailEventHandlers(EventSystem &event_system)
{
    event_system.Subscribe("user_registered", HandleUserRegisteredEventEmail);
    event_system.Subscribe("user_password_forgotten", HandleUserPasswordForgottenEventEmail);
    event_system.Subscribe("user_upgrade_plan", HandleUserUpgradePlanEventEmail);
}