#pragma once
#include <iostream>
#include <string>

using namespace std;

class User
{
public:
    User(string_view name, string_view password, string_view email) : name_(name), password_(password), email_(email), plan_{"basic"} {}

    void ResetPassword(string_view code, string_view new_password)
    {
        if (code == reset_code_)
        {
            password_ = new_password;
        }
        else
        {
            cout << "Invalid password reset code." << endl;
        }
    }

    void PrintUser() const
    {
        cout << "[" << name_ << ", " << "]" << endl;
    }

    string name_;
    string password_;
    string email_;
    string plan_{"basic"};
    string reset_code_;
};