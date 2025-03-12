#pragma once
#include "modifiedPerson.h"

class PersonBuilder
{
public:
    PersonBuilder(Person &person) : person(person) {}

    PersonBuilder &name(const string &name)
    {
        this->person.name = name;
        return *this;
    }
    PersonBuilder &address(const string &address)
    {
        this->person.address = address;
        return *this;
    }
    PersonBuilder &job(const string &job)
    {
        this->person.job = job;
        return *this;
    }

    operator Person()
    {
        return this->person;
    }

private:
    Person person;
};