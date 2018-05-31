//
// Created by Admin on 5/30/18.
//

#include <iostream>
#include "FlyingCar.h"


void FlyingCar::printCharacteristics() {
    cout << "This is a unique hybrid automobile " << endl;
    AirTransport::printCharacteristics();
    LandTransport::printCharacteristics();
}

void FlyingCar::startTrip(Route flyingRoute, Route drivingRoute) {
    Plane::fly(flyingRoute);
    Automobile::drive(drivingRoute);
    printCharacteristics();
}

FlyingCar::FlyingCar(const Operator &pilot, int flightNumber, int passengersCount, int maxAltitude, int maxSpeed,
                     int maxDistance, char *transportName, int fuelLiters,
                     int maxRange, int numberOfWheels, int engineHorsePower) : Plane(pilot, flightNumber,
                                                                                     passengersCount, maxAltitude,
                                                                                     maxSpeed, maxDistance),
                                                                               Automobile(pilot, passengersCount,
                                                                                          transportName, fuelLiters,
                                                                                          maxRange, numberOfWheels,
                                                                                          engineHorsePower) {}
