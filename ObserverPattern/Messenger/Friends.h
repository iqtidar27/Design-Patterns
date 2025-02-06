#include "iObserver.h"
#include <string>
#include <iostream>
using namespace std;

class Friends : public IObserver
{
public:
    Friends(const string &name);
    void update(const string &newMessage) override;

private:
    string name_;
};