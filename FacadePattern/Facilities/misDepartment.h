#pragma once
#include <iostream>
using namespace std;

class MisDepartment 
{
public:
    void submitNetworkRequest() {
        _state = 0;
        cout << "[MIS] Request submitted. Current state: " << _state << endl;
    }
    bool checkOnStatus() {
        _state++;
        cout << "[MIS] Current state: " << _state << endl;
        if (_state == Complete) {
            cout << "[MIS] Task completed." << endl;
            return true;
        }
        return false;
    }
private:
    enum States {
        Received, DenyAllKnowledge, ReferClientToFacilities,
        FacilitiesHasNotSentPaperwork, ElectricianIsNotDone,
        ElectricianDidItWrong, DispatchTechnician, SignedOff, DoesNotWork,
        FixElectriciansWiring, Complete
    };
    int _state;
};