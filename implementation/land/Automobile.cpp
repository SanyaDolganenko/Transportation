//
// Created by Admin on 5/30/18.
//

#include "Automobile.h"
#include "iostream"

Automobile::Automobile(const Operator driver, int passengersCount, char *transportName, int fuelLiters, int maxRange,
                       int numberOfWheels,
                       int engineHorsePower) : LandTransport(driver, passengersCount, transportName) {
    this->fuelLiters = fuelLiters;
    this->maxRange = maxRange;
    this->numberOfWheels = numberOfWheels;
    this->engineHorsePower = engineHorsePower;
}

void Automobile::drive(Route route) {
    cout << "We will be taking a trip by an automobile. Our journey will have " << route.stops.size() - 1
         << " stop(s) and will take us roughly " << route.durationMin << " minutes. " << endl;
    int index = 0;
    for (Stop stop : route.stops) {
        if (index > 0) {
            cout << "Stopping at " << stop.stopName << endl;
        }
        if (index < route.stops.size() - 1) {
            cout << "Starting at " << stop.stopName << endl;
        }
        index++;
    }
    cout << "Our journey has ended." << endl;
}

void Automobile::printCharacteristics() {
    LandTransport::printCharacteristics();
    cout << "This automobile has " << fuelLiters << " liters of fuel.\nMax range is " << maxRange << "km.\nIt has "
         << numberOfWheels << " wheels and " << engineHorsePower << "horse power";
}
