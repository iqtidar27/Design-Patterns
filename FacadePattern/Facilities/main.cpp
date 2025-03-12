#include "facilitiesFacade.h"

int main()
{
    FacilitiesFacade facilities;
    facilities.submitNetworkRequest();
    // while (!facilities.checkOnStatus())
    // ;
    while (!facilities.checkOnStatus()) 
    ;
    cout << "job completed after only " << facilities.getNumberOfCalls() << 
    " phone calls" << endl;
}