#pragma once
#include <string>
using namespace std;

// Interface for component
class Beverage
{
public:
    virtual ~Beverage() = default;
    virtual string getDescription() const
    {
        return m_description;
    }
    virtual double getCost() const = 0;

protected:
    string m_description = "Unknown Beverage";
};