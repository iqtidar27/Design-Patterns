#pragma once
#include "misDepartment.h"
#include "electricianUnion.h"
#include "facilitiesDepartment.h"
#include <iostream>
using namespace std;

class FacilitiesFacade {
public:
    FacilitiesFacade() {
        _count = 0;
    }
    void submitNetworkRequest() {
        _state = 0;
        cout << "[Facade] Request received in FacilitiesFacade." << endl;
    }
    bool checkOnStatus() {
        _count++;
        cout << "[Facade] Checking status. Call #" << _count << endl;

        if (_state == Received) {
            _state++;
            _engineer.submitNetworkRequest();
            cout << "[Facade] Submitted to Facilities. " << _count << " calls so far." << endl;
        } else if (_state == SubmitToEngineer) {
            if (_engineer.checkOnStatus()) {
                _state++;
                _electrician.submitNetworkRequest();
                cout << "[Facade] Submitted to Electrician. " << _count << " calls so far." << endl;
            }
        } else if (_state == SubmitToElectrician) {
            if (_electrician.checkOnStatus()) {
                _state++;
                _technician.submitNetworkRequest();
                cout << "[Facade] Submitted to MIS. " << _count << " calls so far." << endl;
            }
        } else if (_state == SubmitToTechnician) {
            if (_technician.checkOnStatus()) {
                return true;
            }
        }
        return false;
    }
    int getNumberOfCalls() {
        return _count;
    }
private:
    enum States {
        Received, SubmitToEngineer, SubmitToElectrician, SubmitToTechnician
    };
    int _state;
    int _count;
    FacilitiesDepartment _engineer;
    ElectricianUnion _electrician;
    MisDepartment _technician;
};