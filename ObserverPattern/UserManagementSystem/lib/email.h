#pragma once
#include <iostream>
#include <string>
using namespace std;

void sendEmail(string_view name, string_view address, string_view subject, string_view body)
{
    cout << "Sending email to " << name << " (" << address << ")" << endl;
    cout << "-----" << endl;
    cout << "Subject: " << subject << endl;
    cout << body << endl;
}