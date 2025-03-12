#include "personBuilder.h"
#include "modifiedPerson.h"

PersonBuilder Person::Build()
{
    Person p;
    return PersonBuilder{p};
}

int main()
{
    Person p = Person::Build().name("Adam").address("Plot 15, Bashundhora").job("Software Engineer");
}