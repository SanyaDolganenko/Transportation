//
// Created by Admin on 5/30/18.
//

#include "LandTransport.h"
#include "iostream"

using namespace std;

LandTransport::LandTransport(Operator driver, int passengersCount, char *transportName) : Transport(
        driver,
        passengersCount) {
    this->transportName = transportName;
}

void LandTransport::printCharacteristics() {
    transportOperator.print();
    cout << "Transport info:" << endl << "Transport name: " << transportName << endl << "Number of passengers: "
         << passengersCount << endl;
}


