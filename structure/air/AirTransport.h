//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_AIRTRANSPORT_H
#define TRANSPORTATION_AIRTRANSPORT_H


#include "Flyable.h"
#include "../base/Transport.h"
#include "Pilot.h"

class AirTransport : public Flyable, Transport {
public:
    int maxAltitude;
    int maxSpeed;
    int maxDistance;

    AirTransport(Pilot pilot, int passengersCount, int maxAltitude, int maxSpeed, int maxDistance);

    virtual void printCharacteristics();

    Operator getTransportOperator() override;
};


#endif //TRANSPORTATION_AIRTRANSPORT_H
