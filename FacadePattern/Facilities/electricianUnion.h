#pragma once
#include <iostream>
using namespace std;

class ElectricianUnion {
public:
    void submitNetworkRequest() {
        _state = 0;
        cout << "[Electrician] Request submitted. Current state: " << _state << endl;
    }
    bool checkOnStatus() {
        _state++;
        cout << "[Electrician] Current state: " << _state << endl;
        if (_state == Complete) {
            cout << "[Electrician] Task completed." << endl;
            return true;
        }
        return false;
    }
private:
    enum States {
        Received, RejectTheForm, SizeTheJob, SmokeAndJokeBreak,
        WaitForAuthorization, DoTheWrongJob, BlameTheEngineer, WaitToPunchOut,
        DoHalfAJob, ComplainToEngineer, GetClarification, CompleteTheJob,
        TurnInThePaperwork, Complete
    };
    int _state;
};
