//
// Created by Admin on 5/28/18.
//

#include <iostream>
#include "AirTransport.h"


AirTransport::AirTransport(Operator pilot, int passengersCount,
                           int maxAltitude, int maxSpeed, int maxDistance)
        : Transport(pilot,
                    passengersCount), maxAltitude(maxAltitude), maxSpeed(maxSpeed),
          maxDistance(maxDistance) {}


void AirTransport::printCharacteristics() {
    transportOperator.print();
    cout << "Air transport characteristics: " << endl;
    printf("Max number of passengers: %d\nMax altitude: %d\nMax speed: %d\nMax distance: %d\n",
           passengersCount,
           maxAltitude,
           maxSpeed, maxDistance);
}

void AirTransport::printEngineType() {
    cout << "This abstract engine type is jet based." << endl;
}
