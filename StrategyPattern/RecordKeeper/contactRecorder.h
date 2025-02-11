#pragma once
#include "record.h"
#include <cassert>

struct ContactData
{
    string first_name, last_name, phone, email;
};

class ContactRecorder
{
public:
    ContactRecorder(Record *a) : m_record(a)
    {
        assert(a != nullptr);
    }

    void store(const ContactData &data)
    {
        assert(m_record != nullptr);

        m_record->start_record();
        m_record->store_field("first name", data.first_name);
        m_record->store_field("last name", data.last_name);
        m_record->store_field("phone", data.phone);
        m_record->store_field("email", data.email);
        m_record->finish_record();
    }

private:
    Record *m_record;
};