#pragma once
#include "record.h"
#include <iostream>

class StreamRecord : public Record
{
public:
    StreamRecord(ostream &s, const string &record_name = string()) : m_ostream(s), m_record_name(record_name) {}

    void start_record() override
    {
        m_ostream << m_record_name << "( ";
    }

    void store_field(const string &name, const string &value) override
    {
        m_ostream << name << ": " << value << "; ";
    }

    void finish_record() override
    {
        m_ostream << ")" << endl;
    }

    void set_record_name(const string &name)
    {
        m_record_name = name;
    }

private:
    ostream &m_ostream;
    string m_record_name;
};