#pragma once
#include <iostream>
#include "dataStorage.h"
using namespace std;

class DataReader
{
public:
    void ReadDataFromStorage(USB *usb_device)
    {
        int data = usb_device->USB_Transmit();
        cout << "Received data " << data << endl;
    }
};