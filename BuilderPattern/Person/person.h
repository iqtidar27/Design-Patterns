#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name) : name(name) {}
    Person(string name, string address) : name(name), address(address) {}
    Person(string name, string address, string job) : name(name), address(address), job(job) {}

private:
    string name;
    string address;
    string job;
    friend class PersonBuilder;
};