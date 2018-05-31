//
// Created by Admin on 5/30/18.
//

#ifndef TRANSPORTATION_AUTOMOBILE_H
#define TRANSPORTATION_AUTOMOBILE_H


#include "../../structure/land/LandTransport.h"

class Automobile : public LandTransport {
public:
    int fuelLiters;
    int maxRange;
    int numberOfWheels;
    int engineHorsePower;

    Automobile(Operator driver, int passengersCount, char *transportName, int fuelLiters, int maxRange,
               int numberOfWheels,
               int engineHorsePower);

    void drive(Route route) override;

    void printCharacteristics();

    void printEngineType() override;
};


#endif //TRANSPORTATION_AUTOMOBILE_H
