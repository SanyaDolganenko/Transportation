//
// Created by Admin on 5/30/18.
//

#ifndef TRANSPORTATION_FLYINGCAR_H
#define TRANSPORTATION_FLYINGCAR_H


#include "../../structure/air/AirTransport.h"
#include "../../structure/land/LandTransport.h"
#include "../air/Plane.h"
#include "../land/Automobile.h"

class FlyingCar : virtual public Plane, virtual public Automobile {
public:
    FlyingCar(const Operator &pilot, int flightNumber, int passengersCount, int maxAltitude, int maxSpeed,
              int maxDistance, char *transportName, int fuelLiters,
              int maxRange, int numberOfWheels, int engineHorsePower);

    void printCharacteristics();

    void startTrip(Route flyingRoute, Route drivingRoute);

    void printEngineType() override;

};


#endif //TRANSPORTATION_FLYINGCAR_H
