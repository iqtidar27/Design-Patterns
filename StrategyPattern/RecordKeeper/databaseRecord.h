#pragma once
#include "record.h"
#include <iostream>
using namespace std;

class MySql
{
}; // Dummy class for MySQL connection simulation

class DatabaseRecord : public Record
{
public:
    DatabaseRecord() : m_dbConnection(new MySql) {}

    void start_record() override
    {
        cout << "Start transaction" << endl;
    }

    void store_field(const string &name, const string &value)
    {
        cout << "Insert into table: " << name << " = " << value << endl;
    }

    void finish_record()
    {
        cout << "Finish transaction" << endl;
    }

private:
    MySql *m_dbConnection;
};