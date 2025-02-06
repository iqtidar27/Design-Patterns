#include "iSubject.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Concrete Subject
class GroupChat : public ISubject
{
public:
    void subscribe(IObserver *observer) override;
    void unsubscribe(IObserver *observer) override;
    void notify() override;

    void sendMessage(const string &msg);

private:
    vector<IObserver *> observers_;
    vector<string> messages;
};