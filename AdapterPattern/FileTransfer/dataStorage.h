#pragma once
#include <iostream>
using namespace std;

class DataStorage
{
public:
    int data_;
};

class USB : public DataStorage
{
public:
    USB(int data)
    {
        data_ = data;
    }
    virtual int USB_Transmit()
    {
        cout << "Transmit data from USB Device" << endl;
        return data_;
    }
};

class SDCard : DataStorage
{
public:
    SDCard(int data)
    {
        data_ = data;
    }
    int SDCard_Transmit()
    {
        cout << "Transmit data from SDCard Device" << endl;
        return data_;
    }
};