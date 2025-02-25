#include "threadSafelogger.h"

#include <thread>

void userLogs()
{
    Logger *logger1 = Logger ::getLogger();
    logger1->Log("this msg is from user 1");
    cout << endl;
}

void user2Logs()
{
    Logger *logger2 = Logger ::getLogger();
    logger2->Log("this msg is from user 2");
}

int main()
{

    thread t1(userLogs);
    thread t2(user2Logs);

    t1.join();
    t2.join();
}