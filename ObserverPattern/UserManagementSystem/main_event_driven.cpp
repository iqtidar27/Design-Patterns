#include "../api2/email_listener.h"
#include "../api2/event_system.h"
#include "../api2/log_listener.h"
#include "../api2/plan_management_event_driven.h"
#include "../api2/slack_listener.h"
#include "../api2/user_management_event_driven.h"

int main()
{
    EventSystem event_system;
    SetupEmailEventHandlers(event_system);
    SetupEmailEventHandlers(event_system);
    SetupLogEventHandlers(event_system);

    Database users_db;
    UserManagementEventDriven user_management_system(users_db, event_system);
    PlanManagementEventDriven plan_management_system(users_db, event_system);

    user_management_system.RegisterNewUser("angelos", "1234", "angelo@gmail.com");
    cout << "\n=====================\n";
    user_management_system.PasswordForgotten("angelo@gmail.com");
    cout << "\n=====================\n";
    plan_management_system.upgradePlan("angelo@gmail.com");
    cout << "\n=====================\n";
}