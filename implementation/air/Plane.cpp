//
// Created by Admin on 5/28/18.
//

#include "Plane.h"
#include "iostream"

void Plane::fly(Route route) {
    cout << "Welcome on board flight " << flightNumber << ". Our journey will have " << route.stops.size() - 1
         << " stop(s) and will take us roughly " << route.durationMin << " minutes. " << endl;
    int index = 0;
    for (Stop stop : route.stops) {
        if (index > 0) {
            cout << "landing at " << stop.stopName << endl;
        }
        if (index < route.stops.size() - 1) {
            cout << "Taking off from " << stop.stopName << endl;
        }
        index++;
    }
    cout << "Our journey has ended." << endl;
}

Plane::Plane(Operator pilot, int flightNumber, int passengersCount, int maxAltitude, int maxSpeed, int maxDistance)
        : AirTransport(
        pilot,
        passengersCount,
        maxAltitude, maxSpeed,
        maxDistance) {
    this->flightNumber = flightNumber;
}


