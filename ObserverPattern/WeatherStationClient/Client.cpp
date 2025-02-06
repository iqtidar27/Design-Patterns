#include "Client.h"
#include <iostream>
using namespace std;

Client ::Client(int id) : id_(id) {}

void Client ::update(float temp, float humidity, float pressure)
{
    // print the changed values
    cout << "---Client (" << id_ << ") Data---\tTemperature: "
         << temp << "\thumidity: " << humidity
         << "\tPressure: " << pressure << endl;
}
