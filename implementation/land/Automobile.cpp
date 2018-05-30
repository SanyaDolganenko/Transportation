//
// Created by Admin on 5/30/18.
//

#include "Automobile.h"


Automobile::Automobile(const Operator driver, int passengersCount, char *transportName, int fuelLiters, int maxRange,
                       int numberOfWheels,
                       int engineHorsePower) : LandTransport(driver, passengersCount, transportName) {
    this->fuelLiters = fuelLiters;
    this->maxRange = maxRange;
    this->numberOfWheels = numberOfWheels;
    this->engineHorsePower = engineHorsePower;
}
