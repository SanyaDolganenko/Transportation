//
// Created by Admin on 5/28/18.
//

#include "Transport.h"
#include "iostream"

using namespace std;

Transport::Transport(Operator transportOperator, int passengersCount) {
    this->transportOperator = transportOperator;
    this->passengersCount = passengersCount;
}

void Transport::printCharacteristics() {
    cout << "Basic transport characteristics" << endl;
}
