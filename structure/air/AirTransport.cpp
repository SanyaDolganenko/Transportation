//
// Created by Admin on 5/28/18.
//

#include "AirTransport.h"


AirTransport::AirTransport(int passengersCount, int maxAltitude, int maxSpeed, int maxDistance)
        : Transport(
        passengersCount), maxAltitude(maxAltitude), maxSpeed(maxSpeed),
          maxDistance(maxDistance) {}
