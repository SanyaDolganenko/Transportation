//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_PLANE_H
#define TRANSPORTATION_PLANE_H


#include "../../structure/air/Flyable.h"
#include "../../structure/base/Transport.h"
#include "../../structure/air/AirTransport.h"

class Plane : public AirTransport {
public:

    Plane(int flightNumber, int passengersCount, int maxAltitude, int maxSpeed, int maxDistance);

    void fly(Route route) override;

private:
    int flightNumber;

};


#endif //TRANSPORTATION_PLANE_H
