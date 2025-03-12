#pragma once
#include <iostream>
using namespace std;

class FacilitiesDepartment {
public:
    void submitNetworkRequest() {
        _state = 0;
        cout << "[Facilities] Request submitted. Current state: " << _state << endl;
    }
    bool checkOnStatus() {
        _state++;
        cout << "[Facilities] Current state: " << _state << endl;
        if (_state == Complete) {
            cout << "[Facilities] Task completed." << endl;
            return true;
        }
        return false;
    }
private:
    enum States {
        Received, AssignToEngineer, EngineerResearches, RequestIsNotPossible,
        EngineerLeavesCompany, AssignToNewEngineer, NewEngineerResearches,
        ReassignEngineer, EngineerReturns, EngineerResearchesAgain,
        EngineerFillsOutPaperWork, Complete
    };
    int _state;
};