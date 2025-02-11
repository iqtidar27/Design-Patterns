#pragma once
#include <string>
using namespace std;

// Interface or Abstract Class
class Record
{
public:
    virtual void start_record() = 0;
    virtual void store_field(const string &name, const string &value) = 0;
    virtual void finish_record() = 0;
    virtual ~Record() {}
};