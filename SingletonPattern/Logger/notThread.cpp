#include "logger.h"

int main()
{
    Logger *logger1 = Logger ::getLogger();
    logger1->Log("this msg is from user 1");
    cout << endl;

    Logger *logger2 = Logger ::getLogger();
    logger2->Log("this msg is from user 2");
}