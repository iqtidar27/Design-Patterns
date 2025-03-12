#pragma once
#include <iostream>
#include <string>

using namespace std;

class PersonBuilder; // Forward declaration

class Person
{
private:
    string name;
    string address;
    string job;
    Person() {}

public:
    static PersonBuilder Build(); // Now it recognizes PersonBuilder as a class
    friend class PersonBuilder;
};
