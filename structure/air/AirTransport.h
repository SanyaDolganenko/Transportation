//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_AIRTRANSPORT_H
#define TRANSPORTATION_AIRTRANSPORT_H


#include "Flyable.h"
#include "../base/Transport.h"

class AirTransport : public Flyable, Transport {
public:
    int maxAltitude;
    int maxSpeed;
    int maxDistance;

    AirTransport(int passengersCount, int maxAltitude, int maxSpeed, int maxDistance);

};


#endif //TRANSPORTATION_AIRTRANSPORT_H