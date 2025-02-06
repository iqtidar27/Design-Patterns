#ifndef CLIENT_H
#define CLIENT_H
#include "Observer.h"
#include <iostream>

/*
A concrete client that implements the Observer interface
*/
class Client : public Observer
{
public:
    Client(int id);
    void update(float temp, float humidity, float pressure) override;

private:
    int id_;
};
#endif // CLIENT_H