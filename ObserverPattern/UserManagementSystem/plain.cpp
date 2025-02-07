#include "lib/database.h"

#include "../api/user_management.h"
#include "../api/plan_management.h"

int main()
{
    Database users_db{};
    UserManagement plain_user_system{users_db};
    PlanManagement plain_plan_system{users_db};

    plain_user_system.RegisterNewUser("angelos", "1234", "angelo@gmail.com");
    cout << "===================" << endl;
    plain_user_system.PasswordForgotten("angelo@gmail.com");
    cout << "====================" << endl;
    plain_plan_system.upgradePlan("angelo@gmail.com");
}