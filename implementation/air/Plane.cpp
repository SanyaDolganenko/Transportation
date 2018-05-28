//
// Created by Admin on 5/28/18.
//

#include "Plane.h"
#include "iostream"

void Plane::fly(Route route) {
    cout << "Initial takeoff" << endl;
    int index = 0;
    for (Stop stop : route.stops) {
        cout << "landing at" << stop.stopName << endl;
        if (index < route.stops.size() - 1) {
            cout << "Taking off from " << stop.stopName << endl;
        }
        index++;
    }
    cout << "Last landing of trip is complete" << endl;
}

Plane::Plane(int flightNumber, int passengersCount, int maxAltitude, int maxSpeed, int maxDistance) : AirTransport(
        passengersCount,
        maxAltitude, maxSpeed,
        maxDistance) {
    this->flightNumber = flightNumber;
}


