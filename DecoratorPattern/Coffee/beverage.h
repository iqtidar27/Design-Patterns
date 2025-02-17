#pragma once
#include <string>
using namespace std;

// Interface for component
class Beverage
{
public:
    virtual ~Beverage() = default;
    virtual string getComponentDescription() const
    {
        return m_description;
    }

    virtual double getComponentCost() const = 0;

protected:
    string m_description = "Unknown Beverage";
};